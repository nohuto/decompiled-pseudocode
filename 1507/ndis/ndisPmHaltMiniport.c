/*
 * XREFs of ndisPmHaltMiniport @ 0x1C00F50D4
 * Callers:
 *     ndisSetDevicePower @ 0x1C000F10C (ndisSetDevicePower.c)
 * Callees:
 *     NdisResetEvent @ 0x1C000DE00 (NdisResetEvent.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C000E9F0 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C009BD18 (ndisMDeregisterBugCheckHandler.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A109C (ndisMSetMiniportReadyForBinding.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E6698 (ndisMCommonHaltMiniport.c)
 */

void __fastcall ndisPmHaltMiniport(struct _TlgProvider_t *a1)
{
  KIRQL v2; // al
  KIRQL v3; // bp
  unsigned __int64 *p_RegHandle; // rcx
  KIRQL v5; // al
  unsigned int AnnotationFunc; // ecx

  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(0x2Cu, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a1);
  NdisTraceLoggingDeviceRemoved(a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1[1].RegHandle);
  a1[8].ProviderMetadataPtr = (const unsigned __int16 *)KeGetCurrentThread();
  v3 = v2;
  a1[29].LevelPlus1 = 1705148;
  NdisResetEvent((PNDIS_EVENT)&a1[59].ProviderMetadataPtr);
  a1[8].ProviderMetadataPtr = 0LL;
  a1[29].LevelPlus1 = 0;
  p_RegHandle = &a1[1].RegHandle;
  if ( (HIDWORD(a1[1].AnnotationFunc) & 0x4000) != 0 )
  {
    KeReleaseSpinLock(p_RegHandle, v3);
    ndisDereferencePackage((__int64)&ndisPkgs);
  }
  else
  {
    KeReleaseSpinLock(p_RegHandle, v3);
    ndisMSetMiniportReadyForBinding((struct _NDIS_MINIPORT_BLOCK *)a1, 0, Reason_MiniportLowPower, RunSynchronous);
    v5 = KeAcquireSpinLockRaiseToDpc(&a1[1].RegHandle);
    AnnotationFunc = (unsigned int)a1[1].AnnotationFunc;
    HIDWORD(a1[1].AnnotationFunc) |= 0x4004u;
    a1[8].ProviderMetadataPtr = 0LL;
    a1[29].LevelPlus1 = 0;
    LODWORD(a1[1].AnnotationFunc) = AnnotationFunc & 0x7FFFFFFE | 0x80000000;
    KeReleaseSpinLock(&a1[1].RegHandle, v5);
    ndisMCommonHaltMiniport((ULONG_PTR)a1, 62);
    _InterlockedOr((volatile signed __int32 *)&a1[70].ProviderMetadataPtr, 0x10u);
    ndisMDeregisterBugCheckHandler((__int64)a1);
    ndisDereferencePackage((__int64)&ndisPkgs);
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
      WPP_SF_q(0x2Du, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a1);
  }
}
