/*
 * XREFs of SepExpandSingletonArrays @ 0x1400F3EB4
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x1403C5868 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
