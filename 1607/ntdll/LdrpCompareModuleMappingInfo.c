/*
 * XREFs of LdrpCompareModuleMappingInfo @ 0x180031744
 * Callers:
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180031524 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180031800 (LdrpInsertModuleToIndexLockHeld.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpCompareModuleMappingInfo(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v5; // ecx

  v2 = *(_DWORD *)(a2 - 96);
  if ( *a1 < v2 )
    return 0xFFFFFFFFLL;
  if ( *a1 > v2 )
    return 1LL;
  v5 = *(_DWORD *)(a2 - 160);
  if ( a1[1] < v5 )
    return 0xFFFFFFFFLL;
  else
    return a1[1] > v5;
}
