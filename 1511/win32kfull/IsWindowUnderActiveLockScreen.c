/*
 * XREFs of IsWindowUnderActiveLockScreen @ 0x1C0090C38
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01E4FB0 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C02000BC (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C0201368 (_GetNextQueueWindow.c)
 * Callees:
 *     GetBandOrdinal @ 0x1C0056824 (GetBandOrdinal.c)
 */

__int64 __fastcall IsWindowUnderActiveLockScreen(__int64 a1)
{
  PVOID v1; // rdx
  unsigned int BandOrdinal; // eax
  unsigned int v4; // r8d
  unsigned int v5; // r9d

  v1 = *(PVOID *)(a1 + 24);
  if ( !v1 || !gbLockScreenActive || grpdeskLogon == v1 )
    return 0LL;
  GetBandOrdinal(*(_DWORD *)(a1 + 304));
  BandOrdinal = GetBandOrdinal(17);
  LOBYTE(v5) = v4 < BandOrdinal;
  return v5;
}
