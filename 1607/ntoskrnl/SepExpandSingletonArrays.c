/*
 * XREFs of SepExpandSingletonArrays @ 0x14011258C
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14046D1AC (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 SepExpandSingletonArrays()
{
  PVOID PoolWithTag; // rax
  void *v1; // rbx
  KIRQL v2; // si
  _QWORD *v3; // rax
  _QWORD *v4; // r14
  PEX_SPIN_LOCK v5; // rdi
  void *v6; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x600uLL, 0x74446553u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x600uLL);
    v2 = ExAcquireSpinLockExclusive(SepSingletonGlobal);
    v3 = ExAllocatePoolWithTag(
           NonPagedPoolNx,
           8LL * (unsigned int)(*((_DWORD *)SepSingletonGlobal + 1) + 1),
           0x74446553u);
    v4 = v3;
    if ( v3 )
    {
      v5 = SepSingletonGlobal;
      memmove(v3, *((const void **)SepSingletonGlobal + 1), 8LL * *((unsigned int *)SepSingletonGlobal + 1));
      v4[*((unsigned int *)v5 + 1)] = v1;
      v6 = (void *)*((_QWORD *)v5 + 1);
      ++*((_DWORD *)v5 + 1);
      *((_QWORD *)v5 + 1) = v4;
      ExReleaseSpinLockExclusive(v5, v2);
      ExFreePoolWithTag(v6, 0x74446553u);
      return 0LL;
    }
    ExReleaseSpinLockExclusive(SepSingletonGlobal, v2);
    ExFreePoolWithTag(v1, 0x74446553u);
  }
  return 3221225495LL;
}
