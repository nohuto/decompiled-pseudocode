/*
 * XREFs of CmpParseCacheInit @ 0x14051CD50
 * Callers:
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 CmpParseCacheInit()
{
  unsigned int v0; // edi
  _DWORD *PoolWithTag; // rax
  __int64 v2; // rbx

  CmpParseCacheLock = 0LL;
  CmpParseCacheTable = 0LL;
  v0 = -1073741670;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x108uLL, 0x74504D43u);
  v2 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 1951419715;
    memset(PoolWithTag + 2, 0, 0x100uLL);
    v0 = 0;
    CmpParseCacheTable = v2;
  }
  return v0;
}
