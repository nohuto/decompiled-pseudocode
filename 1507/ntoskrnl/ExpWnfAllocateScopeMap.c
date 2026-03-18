/*
 * XREFs of ExpWnfAllocateScopeMap @ 0x1405C0BB0
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfAllocateScopeMap(_QWORD *a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx
  int v4; // edx
  _QWORD *v5; // rcx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x20666E57u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x70uLL);
  v4 = 0;
  *v3 = 7342337;
  v5 = v3 + 6;
  do
  {
    v5[1] = v5;
    ++v4;
    *v5 = v5;
    *(v5 - 1) = 0LL;
    v5 += 3;
  }
  while ( (unsigned __int64)v4 < 4 );
  *a1 = v3;
  return 0LL;
}
