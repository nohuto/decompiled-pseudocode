/*
 * XREFs of LdrpCompareModuleBaseAddresses @ 0x180032D38
 * Callers:
 *     LdrpInsertModuleToIndexLockHeld @ 0x180031CD4 (LdrpInsertModuleToIndexLockHeld.c)
 *     LdrpFindLoadedDllByHandle @ 0x180032760 (LdrpFindLoadedDllByHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpCompareModuleBaseAddresses(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 - 152);
  if ( a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 > v2;
}
