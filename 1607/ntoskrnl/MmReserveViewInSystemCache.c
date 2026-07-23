/*
 * XREFs of MmReserveViewInSystemCache @ 0x140575A08
 * Callers:
 *     CcBuildUpHighPriorityMappings @ 0x140148130 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax

  v2 = MiObtainSystemCacheView((__int64)MiSystemPartition, a2);
  if ( v2 )
    return (__int64)((_QWORD)v2 << 25) >> 16;
  ++dword_140327DC0;
  return 0LL;
}
