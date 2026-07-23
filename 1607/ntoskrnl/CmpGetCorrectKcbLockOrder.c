/*
 * XREFs of CmpGetCorrectKcbLockOrder @ 0x1405189D0
 * Callers:
 *     CmpLockTwoKcbsShared @ 0x140437AF0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x140437EA0 (CmpUnlockTwoKcbs.c)
 *     CmpIsKcbLockAllowed @ 0x140518998 (CmpIsKcbLockAllowed.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpGetCorrectKcbLockOrder(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r10d
  __int16 v6; // r10
  __int16 v7; // r10

  v4 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
  v5 = (*(_DWORD *)(a2 + 4) >> 21) & 0x3FF;
  if ( v4 <= v5
    && (v4 < v5
     || ((v6 = *(_WORD *)(a1 + 178), (v6 & 4) == 0) || (LOBYTE(v4) = *(_BYTE *)(a2 + 178), (v4 & 2) == 0))
     && ((v6 & 2) != 0 && (LOBYTE(v4) = *(_BYTE *)(a2 + 178), (v4 & 4) != 0)
      || (LOWORD(v4) = *(_WORD *)(a1 + 58), v7 = *(_WORD *)(a2 + 58), (__int16)v4 <= v7)
      && ((__int16)v4 < v7 || a1 <= a2))) )
  {
    *a4 = a2;
    *a3 = a1;
  }
  else
  {
    *a3 = a2;
    *a4 = a1;
  }
  return v4;
}
