/*
 * XREFs of NdisAllocateRWLock @ 0x1C0010080
 * Callers:
 *     EthCreateFilter @ 0x1C00AC308 (EthCreateFilter.c)
 *     nullCreateFilter @ 0x1C00ACCE0 (nullCreateFilter.c)
 *     ndisInitializePeriodicReceives @ 0x1C00FE168 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     ndisAllocatePerProcessorSlot @ 0x1C001013C (ndisAllocatePerProcessorSlot.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

PNDIS_RW_LOCK_EX __stdcall NdisAllocateRWLock(NDIS_HANDLE NdisHandle)
{
  SIZE_T v2; // rsi
  struct _NDIS_RW_LOCK_EX *PoolWithTag; // rax
  __int64 v4; // rdi
  struct _NDIS_RW_LOCK_EX *v5; // rbx
  __int64 PerProcessorSlot; // rax
  unsigned int **RefCount; // rdx
  __int64 v8; // r8
  unsigned int *v9; // rcx

  v2 = 8LL * (ndisMaxNumberOfProcessors - 1) + 40;
  PoolWithTag = (struct _NDIS_RW_LOCK_EX *)ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x7772444Eu);
  v4 = 0LL;
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v2);
    KeInitializeSpinLock(&v5->WriteLock);
    v5->SourceHandle = NdisHandle;
    PerProcessorSlot = ndisAllocatePerProcessorSlot(2003977294LL);
    v5->RefCountSlot = (PNDIS_PER_PROCESSOR_SLOT__ *)PerProcessorSlot;
    if ( PerProcessorSlot )
    {
      if ( ndisMaxNumberOfProcessors )
      {
        RefCount = v5->RefCount;
        v8 = ndisMaxNumberOfProcessors;
        do
        {
          v9 = (unsigned int *)((char *)v5->RefCountSlot + v4);
          v4 += 4096LL;
          *RefCount++ = v9;
          --v8;
        }
        while ( v8 );
      }
    }
    else
    {
      ExFreePoolWithTag(v5, 0);
      return 0LL;
    }
  }
  return v5;
}
