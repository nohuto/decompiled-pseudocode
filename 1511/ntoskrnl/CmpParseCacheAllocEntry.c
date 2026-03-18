/*
 * XREFs of CmpParseCacheAllocEntry @ 0x1403BB2A0
 * Callers:
 *     CmpParseCacheAddHive @ 0x1403BB0AC (CmpParseCacheAddHive.c)
 *     CmpParseCacheAddSymbolicLink @ 0x14054488C (CmpParseCacheAddSymbolicLink.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     CmpParseCacheComputeRegHashKey @ 0x1403BB524 (CmpParseCacheComputeRegHashKey.c)
 */

__int64 __fastcall CmpParseCacheAllocEntry(__int128 *a1, int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v8; // edi
  char *PoolWithTag; // rax
  char *v10; // rbx
  __int128 v11; // xmm0

  v8 = -1073741670;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x65504D43u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    v11 = *a1;
    *(_QWORD *)PoolWithTag = 0LL;
    *(_OWORD *)(PoolWithTag + 24) = v11;
    *((_DWORD *)PoolWithTag + 10) = CmpParseCacheComputeRegHashKey(a1);
    v8 = 0;
    *((_DWORD *)v10 + 11) = a2;
    *((_QWORD *)v10 + 6) = a3;
    *a4 = v10;
  }
  return v8;
}
