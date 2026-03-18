/*
 * XREFs of MmReserveViewInSystemCache @ 0x1405AC3CC
 * Callers:
 *     CcBuildUpHighPriorityMappings @ 0x140166A18 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 */

__int64 MmReserveViewInSystemCache()
{
  _QWORD *v0; // rax

  v0 = MiObtainSystemCacheView();
  if ( v0 )
    return (__int64)((_QWORD)v0 << 25) >> 16;
  ++dword_140350040;
  return 0LL;
}
