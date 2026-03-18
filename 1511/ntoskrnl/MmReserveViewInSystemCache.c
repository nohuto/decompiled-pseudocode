/*
 * XREFs of MmReserveViewInSystemCache @ 0x14053263C
 * Callers:
 *     CcBuildUpHighPriorityMappings @ 0x14013789C (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 */

__int64 MmReserveViewInSystemCache()
{
  __int64 v0; // rax

  v0 = MiObtainSystemCacheView();
  if ( v0 )
    return v0 << 25 >> 16;
  ++dword_1402FFB80;
  return 0LL;
}
