/*
 * XREFs of ndisPnPIrpRemoveDevice @ 0x1C00E6DF8
 * Callers:
 *     ndisPnPDispatch @ 0x1C009DAC0 (ndisPnPDispatch.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00D29F0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C0012C54 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisDereferenceDriver @ 0x1C001331C (ndisDereferenceDriver.c)
 *     ndisIsMiniportStarted @ 0x1C00180A4 (ndisIsMiniportStarted.c)
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BBF8 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     ndisDereferenceDmaAdapter @ 0x1C005F880 (ndisDereferenceDmaAdapter.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisPowerSaveStop @ 0x1C009E190 (ndisPowerSaveStop.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C009E398 (ndisPnPRemoveDeviceEx.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00AD04C (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisWakeUpDevice @ 0x1C00CAF20 (ndisWakeUpDevice.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00E6D5C (ndisDeQueueMiniportOnDriver.c)
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
  if ( (unsigned __int8)byte_1C00895D0 >= 4u )
    WPP_SF_qZ(
      0x25u,
      &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids,
      (__int64)a2,
      (unsigned __int16 *)a2[61].ProviderMetadataPtr);
  ndisLogMiniportEvent((__int64)a2, 0x23u);
  if ( ((__int64)a2[1].AnnotationFunc & 4) == 0 )
  {
    NdisTraceLoggingDeviceRemoved(a2);
    ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a2, 2);
    KeWaitForSingleObject(&a2[66].AnnotationFunc, Executive, 0, 0, 0LL);
    if ( (HIDWORD(a2[1].AnnotationFunc) & 0x100) == 0 && SHIDWORD(a2[61].KeywordAny) > 1 )
      v9 = ndisWakeUpDevice((__int64)a2);
  }
  ndisReferenceMiniportNoCheck((__int64)a2, 0x1Eu);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v10 = LODWORD(a2[23].CallbackContext) == 5;
  a2[25].ProviderMetadataPtr = (const unsigned __int16 *)&Event;
  if ( !v10 )
    ndisPnPRemoveDeviceEx((struct _NDIS_MINIPORT_BLOCK *)a2);
  if ( Irp )
    Irp->IoStatus.Status = v9;
  ndisDereferenceMiniport((__int64)a2);
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
    ndisDeQueueMiniportOnDriver((__int64)a2, (__int64)a2[59].EnableCallback);
    ndisDereferenceDriver((__int64)a2[59].EnableCallback, 0);
    if ( ((__int64)a2[1].AnnotationFunc & 0x20000) != 0 )
      ndisDereferencePackage((__int64)&unk_1C0088068);
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
