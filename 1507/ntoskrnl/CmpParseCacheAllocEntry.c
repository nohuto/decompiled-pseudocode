/*
 * XREFs of CmpParseCacheAllocEntry @ 0x1404EA4A4
 * Callers:
 *     CmpParseCacheAddHive @ 0x1404EA29C (CmpParseCacheAddHive.c)
 *     CmpParseCacheAddSymbolicLink @ 0x1405BB434 (CmpParseCacheAddSymbolicLink.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpParseCacheComputeRegHashKey @ 0x14044C048 (CmpParseCacheComputeRegHashKey.c)
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
    *((_DWORD *)PoolWithTag + 10) = CmpParseCacheComputeRegHashKey((__int64)a1);
    v8 = 0;
    *((_DWORD *)v10 + 11) = a2;
    *((_QWORD *)v10 + 6) = a3;
    *a4 = v10;
  }
  return v8;
}
