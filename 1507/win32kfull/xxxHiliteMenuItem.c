/*
 * XREFs of xxxHiliteMenuItem @ 0x1C0244684
 * Callers:
 *     NtUserHiliteMenuItem @ 0x1C021CB70 (NtUserHiliteMenuItem.c)
 * Callees:
 *     xxxMNInvertItem @ 0x1C010D450 (xxxMNInvertItem.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z @ 0x1C0122228 (-UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023B1E4 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHiliteMenuItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  unsigned int TopLevelMenuIndex; // esi

  v4 = a4;
  TopLevelMenuIndex = a3;
  if ( (a4 & 0x400) == 0 )
    TopLevelMenuIndex = UT_FindTopLevelMenuIndex((struct tagMENU *)a2, a3);
  if ( (*(_DWORD *)(a2 + 40) & 1) == 0 )
    xxxMNRecomputeBarIfNeeded(a1, a2, a3, a4);
  xxxMNInvertItem(0LL, a2, TopLevelMenuIndex, a1, v4 & 0x80);
  return 1LL;
}
