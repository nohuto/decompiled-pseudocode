/*
 * XREFs of CcCanReuseVacb @ 0x1401DDEF0
 * Callers:
 *     CcUnmapInactiveViews @ 0x140167FCC (CcUnmapInactiveViews.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcCanReuseVacb(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 8) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL && !*(_WORD *)(a1 + 16) && *(_QWORD *)a1 )
    return !a2
        || ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL == ((*(_QWORD *)a1 >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL;
  return v2;
}
