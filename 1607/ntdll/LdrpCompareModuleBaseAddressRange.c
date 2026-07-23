/*
 * XREFs of LdrpCompareModuleBaseAddressRange @ 0x180076138
 * Callers:
 *     LdrpFindLoadedDllByAddress @ 0x180076070 (LdrpFindLoadedDllByAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpCompareModuleBaseAddressRange(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 - 152);
  if ( a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 >= v2 + *(unsigned int *)(a2 - 136);
}
