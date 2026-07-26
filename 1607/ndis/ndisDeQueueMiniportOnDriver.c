/*
 * XREFs of ndisDeQueueMiniportOnDriver @ 0x1C00E6D5C
 * Callers:
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2120 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D44EC (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E6DF8 (ndisPnPIrpRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 */

void __fastcall ndisDeQueueMiniportOnDriver(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  _QWORD *i; // rcx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x15u, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, a1, a2);
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
    WPP_SF_qq(0x16u, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, a1, a2);
}
