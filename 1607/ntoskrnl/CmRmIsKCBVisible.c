/*
 * XREFs of CmRmIsKCBVisible @ 0x1404BB590
 * Callers:
 *     CmpWalkOneLevel @ 0x14002D9B0 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByNumberEx @ 0x140438CE0 (CmpFindSubKeyByNumberEx.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140440140 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmRmIsKcbStackVisible @ 0x14060DCCC (CmRmIsKcbStackVisible.c)
 * Callees:
 *     CmEqualTrans @ 0x1403FD9D0 (CmEqualTrans.c)
 */

bool __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 232);
  return !v3 || CmEqualTrans(a2, v3) != 0;
}
