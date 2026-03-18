/*
 * XREFs of IsWindowUnderActiveLockScreen @ 0x1C0045D40
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01E4B20 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01FFA14 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C0200FC8 (_GetNextQueueWindow.c)
 * Callees:
 *     GetBandOrdinal @ 0x1C00664B0 (GetBandOrdinal.c)
 */

__int64 __fastcall IsWindowUnderActiveLockScreen(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID v3; // rdx
  unsigned int BandOrdinal; // eax
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // r9d

  v3 = *(PVOID *)(a1 + 24);
  if ( !v3 || !gbLockScreenActive || grpdeskLogon == v3 )
    return 0LL;
  BandOrdinal = GetBandOrdinal(*(unsigned int *)(a1 + 304), v3, a3, 0LL);
  v8 = GetBandOrdinal(17LL, v6, BandOrdinal, v7);
  LOBYTE(v10) = v9 < v8;
  return v10;
}
