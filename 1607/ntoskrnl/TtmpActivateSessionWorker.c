/*
 * XREFs of TtmpActivateSessionWorker @ 0x140678F64
 * Callers:
 *     TtmpSessionWorker @ 0x140679130 (TtmpSessionWorker.c)
 * Callees:
 *     TtmpSessionPowerControl @ 0x1406790A4 (TtmpSessionPowerControl.c)
 *     TtmpSetCsSessionGoal @ 0x140679334 (TtmpSetCsSessionGoal.c)
 *     TtmiLogSessionActivate @ 0x14067B7D8 (TtmiLogSessionActivate.c)
 */

__int64 __fastcall TtmpActivateSessionWorker(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v4; // ebx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // r8

  v2 = *(_DWORD *)(a1 + 4);
  if ( (v2 & 8) == 0 )
  {
    if ( (v2 & 0x40) != 0 )
      return 259;
    if ( (v2 & 0x200) != 0 )
    {
      if ( (v2 & 0x100) != 0 )
        return 259;
      v5 = *(unsigned int *)(a1 + 12);
      *(_DWORD *)(a1 + 4) = v2 | 0x100;
      v4 = TtmpSetCsSessionGoal(a1, 0LL, v5);
      if ( v4 )
        return v4;
      *(_DWORD *)(a1 + 4) &= 0xFFFFFCFF;
      if ( (*(_DWORD *)(a1 + 4) & 0x10) == 0 )
        return 0;
    }
    v6 = *(_DWORD *)(a1 + 4);
    if ( (v6 & 0x400) == 0 )
    {
      v4 = 0;
      *(_DWORD *)(a1 + 4) = v6 & 0xFFFFFFE7 | 8;
      TtmiLogSessionActivate();
      return v4;
    }
    if ( (v6 & 0x80u) == 0 )
    {
      v7 = *(unsigned int *)(a1 + 12);
      LOBYTE(a2) = 1;
      *(_DWORD *)(a1 + 4) = v6 | 0x80;
      TtmpSessionPowerControl(a1, a2, v7);
    }
    return 259;
  }
  *(_DWORD *)(a1 + 4) = v2 & 0xFFFFFFEF;
  return 0;
}
