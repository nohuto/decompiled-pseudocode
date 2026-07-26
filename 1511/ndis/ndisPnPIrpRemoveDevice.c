/*
 * XREFs of ndisPnPIrpRemoveDevice @ 0x1C00E0108
 * Callers:
 *     ndisPnPDispatch @ 0x1C00A8060 (ndisPnPDispatch.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00CCD00 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C0013574 (ndisDereferenceDriver.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C0013C58 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisLogMiniportEvent @ 0x1C00194EC (ndisLogMiniportEvent.c)
 *     ndisIsMiniportStarted @ 0x1C001BE98 (ndisIsMiniportStarted.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024BB8 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     ndisDereferenceDmaAdapter @ 0x1C005BA80 (ndisDereferenceDmaAdapter.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C009865C (ndisPnPRemoveDeviceEx.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00989B0 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisPowerSaveStop @ 0x1C0099100 (ndisPowerSaveStop.c)
 *     ndisWakeUpDevice @ 0x1C00C546C (ndisWakeUpDevice.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00E0D84 (ndisDeQueueMiniportOnDriver.c)
 */

__int64 __fastcall ndisPnPIrpRemoveDevice(
        PDEVICE_OBJECT DeviceObject,
        struct _TlgProvider_t *a2,
        PIRP Irp,
        _BYTE *a4,
        _BYTE *a5)
{
  unsigned int v9; // esi
  bool v10; // zf
  _NDIS_SG_DMA_BLOCK *AnnotationFunc; // rcx
  KIRQL v12; // al
  struct _NDIS_MINIPORT_BLOCK **p_NextGlobalMiniport; // rcx
  struct _NDIS_MINIPORT_BLOCK *v14; // rdx
  __int64 result; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  if ( (unsigned __int8)byte_1C0083710 >= 4u )
    WPP_SF_qZ(
      0x25u,
      &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids,
      (__int64)a2,
      (__int64 *)a2[61].ProviderMetadataPtr);
  ndisLogMiniportEvent((__int64)a2, 0x23u);
  if ( ((__int64)a2[1].AnnotationFunc & 4) == 0 )
  {
    NdisTraceLoggingDeviceRemoved(a2);
    ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a2, 2);
    KeWaitForSingleObject(&a2[66].AnnotationFunc, Executive, 0, 0, 0LL);
    if ( (HIDWORD(a2[1].AnnotationFunc) & 0x100) == 0 && SHIDWORD(a2[61].KeywordAny) > 1 )
      v9 = ndisWakeUpDevice((__int64)a2);
  }
  ndisReferenceMiniportNoCheck((__int64)a2, 0x1Cu);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v10 = LODWORD(a2[23].CallbackContext) == 5;
  a2[25].ProviderMetadataPtr = (const unsigned __int16 *)&Event;
  if ( !v10 )
    ndisPnPRemoveDeviceEx((struct _NDIS_MINIPORT_BLOCK *)a2);
  if ( Irp )
    Irp->IoStatus.Status = v9;
  ndisDereferenceMiniport((__int64)a2, 0x1Cu);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  AnnotationFunc = (_NDIS_SG_DMA_BLOCK *)a2[7].AnnotationFunc;
  a2[25].ProviderMetadataPtr = 0LL;
  if ( AnnotationFunc && AnnotationFunc->DmaAdapterRefCount == 1 && ((__int64)a2[1].AnnotationFunc & 0x40) != 0 )
  {
    AnnotationFunc->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a2[7].AnnotationFunc);
    LODWORD(a2[1].AnnotationFunc) &= ~0x40u;
  }
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) )
  {
    ndisDeQueueMiniportOnDriver(a2, a2[59].EnableCallback);
    ndisDereferenceDriver((__int64)a2[59].EnableCallback, 0);
    if ( ((__int64)a2[1].AnnotationFunc & 0x20000) != 0 )
      ndisDereferencePackage((__int64)&unk_1C0082098);
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  p_NextGlobalMiniport = &ndisMiniportList;
  if ( ndisMiniportList )
  {
    while ( 1 )
    {
      v14 = *p_NextGlobalMiniport;
      if ( *p_NextGlobalMiniport == (struct _NDIS_MINIPORT_BLOCK *)a2 )
        break;
      p_NextGlobalMiniport = &v14->NextGlobalMiniport;
      if ( !v14->NextGlobalMiniport )
        goto LABEL_15;
    }
    *p_NextGlobalMiniport = *(struct _NDIS_MINIPORT_BLOCK **)&a2[61].LevelPlus1;
  }
LABEL_15:
  KeReleaseSpinLock(&ndisMiniportListLock, v12);
  if ( Irp )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v9 = IofCallDriver((PDEVICE_OBJECT)a2[60].AnnotationFunc, Irp);
    IoDetachDevice((PDEVICE_OBJECT)a2[60].AnnotationFunc);
    IoDeleteDevice(DeviceObject);
  }
  ndisMDeleteMiniportBlockOnRemove((char *)a2);
  *a5 = 0;
  result = v9;
  *a4 = 0;
  return result;
}
