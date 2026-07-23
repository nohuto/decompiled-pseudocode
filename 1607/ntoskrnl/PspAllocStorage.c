/*
 * XREFs of PspAllocStorage @ 0x140579A30
 * Callers:
 *     PspCreateSilo @ 0x14067E740 (PspCreateSilo.c)
 *     PspInitializeSiloStructures @ 0x14079DE5C (PspInitializeSiloStructures.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspAllocStorage(_QWORD *a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x240uLL, 0x74537350u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v4 = 32LL;
  do
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag += 2;
    --v4;
  }
  while ( v4 );
  v3[64] = 0LL;
  result = 0LL;
  *a1 = v3;
  return result;
}
