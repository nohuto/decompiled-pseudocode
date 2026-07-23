/*
 * XREFs of CcCanReuseVacb @ 0x1401B2478
 * Callers:
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcCanReuseVacb(unsigned __int64 *a1, unsigned __int64 a2)
{
  char v2; // r8
  unsigned __int64 v3; // rcx

  v2 = 0;
  if ( a1[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL && !*((_WORD *)a1 + 8) )
  {
    v3 = *a1;
    if ( v3 )
      return !a2 || ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL == ((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  }
  return v2;
}
