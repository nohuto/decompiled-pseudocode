/*
 * XREFs of ndisLegacyProtocolPauseRestartHandler @ 0x1C00567A8
 * Callers:
 *     ndisPnPNotifyBinding @ 0x1C00E3EEC (ndisPnPNotifyBinding.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     NdisWaitEvent @ 0x1C0093C70 (NdisWaitEvent.c)
 */

void __fastcall ndisLegacyProtocolPauseRestartHandler(__int64 a1, int *a2)
{
  KIRQL v4; // al
  char v5; // bl
  KIRQL v6; // al
  bool v7; // zf

  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0x4Bu, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1, *a2);
  if ( *a2 == 8 )
  {
    v5 = 0;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 720));
    v7 = *(_DWORD *)(a1 + 740) == 0;
    *(_BYTE *)(a1 + 728) = v6;
    *(_DWORD *)(a1 + 736) = 1;
    if ( v7 )
      v5 = 1;
    else
      KeClearEvent((PRKEVENT)(a1 + 744));
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 720), *(_BYTE *)(a1 + 728));
    if ( !v5 )
      NdisWaitEvent((PNDIS_EVENT)(a1 + 744), 0);
  }
  else if ( *a2 == 9 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 720));
    *(_DWORD *)(a1 + 736) = 2;
    *(_BYTE *)(a1 + 728) = v4;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 720), v4);
  }
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0x4Cu, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1, *a2);
}
