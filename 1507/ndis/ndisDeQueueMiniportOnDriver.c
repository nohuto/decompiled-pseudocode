/*
 * XREFs of ndisDeQueueMiniportOnDriver @ 0x1C00E6CD0
 * Callers:
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2CA0 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D4D9C (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E5488 (ndisPnPIrpRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 */

void __fastcall ndisDeQueueMiniportOnDriver(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  _QWORD *i; // rcx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x15u, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a1, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 392));
  for ( i = (_QWORD *)(a2 + 16); *i; i = (_QWORD *)(*i + 8LL) )
  {
    if ( *i == a1 )
    {
      *i = *(_QWORD *)(a1 + 8);
      break;
    }
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 392), v4);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x16u, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a1, a2);
}
