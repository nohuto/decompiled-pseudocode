/*
 * XREFs of ExpWnfAllocateScopeMap @ 0x14057DEE4
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x140461888 (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfAllocateScopeMap(_QWORD *a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx
  int v4; // edx
  _QWORD *v5; // rcx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x20666E57u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x90uLL);
  v4 = 0;
  *v3 = 9439489;
  v5 = v3 + 8;
  do
  {
    v5[1] = v5;
    ++v4;
    *v5 = v5;
    *(v5 - 1) = 0LL;
    v5 += 3;
  }
  while ( (unsigned __int64)v4 < 5 );
  *a1 = v3;
  return 0LL;
}
