/*
 * XREFs of ndisPplCreatePool @ 0x1C0015DA4
 * Callers:
 *     NdisAllocateNetBufferListPool @ 0x1C0015EC0 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocateNetBufferPool @ 0x1C001CA90 (NdisAllocateNetBufferPool.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 */

char *__fastcall ndisPplCreatePool(__int64 a1, SIZE_T a2, ULONG a3, __int64 a4, FREE_FUNCTION_EX *Free)
{
  unsigned int v5; // ebx
  char *v6; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rbp
  size_t v11; // rdi
  char *PoolWithTag; // rax
  unsigned __int64 v13; // rdi
  _SLIST_HEADER *v14; // rbx

  v5 = ndisMaxNumberOfProcessors;
  v6 = 0LL;
  if ( ndisMaxNumberOfProcessors > 1 )
    v5 = ndisMaxNumberOfProcessors + 1;
  v9 = (unsigned __int64)v5 << 8;
  v10 = v5;
  if ( is_mul_ok(0x100uLL, v5) )
  {
    v11 = v9 + 128;
    if ( v9 + 128 >= v9 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v9 + 128, a3);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v11);
        v13 = (unsigned __int64)(v6 + 128);
        ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)(v6 + 128),
          (PALLOCATE_FUNCTION_EX)ndisAllocateFromNPagedPool,
          Free,
          NonPagedPoolNx,
          0,
          a2,
          a3,
          0x400u);
        v6[344] = 1;
        if ( v5 )
        {
          v14 = (_SLIST_HEADER *)(v6 + 256);
          do
          {
            InitializeSListHead(v14);
            KeInitializeSpinLock(&v14[5].Alignment);
            v14[4].Alignment = v13;
            v13 += 256LL;
            v14[4].Region = (unsigned __int64)v14;
            v14 += 16;
            --v10;
          }
          while ( v10 );
        }
      }
    }
  }
  return v6;
}
