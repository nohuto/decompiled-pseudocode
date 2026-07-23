/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x1401E7CFC
 * Callers:
 *     MmGetDumpRange @ 0x1401E79D4 (MmGetDumpRange.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1403DB694 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MmRemoveSystemCacheFromDump(__int64 a1)
{
  char *AnyMultiplexedVm; // rsi
  __int64 v3; // rcx
  ULONG_PTR *SharedWorkingSetList; // r14
  LONG *SharedVm; // rbx
  KIRQL v6; // di
  unsigned __int64 v7; // rbp
  unsigned __int64 i; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  LONG *v12; // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  SharedWorkingSetList = MiGetSharedWorkingSetList((__int64)AnyMultiplexedVm);
  if ( (KiBugCheckActive & 3) != 0 || (struct _KTHREAD *)qword_140327098 == KeGetCurrentThread() )
  {
    v6 = 17;
  }
  else
  {
    SharedVm = MiGetSharedVm(v3);
    v6 = ExAcquireSpinLockShared(SharedVm);
    if ( SharedVm[1] )
      _InterlockedExchange(SharedVm + 1, 0);
  }
  v7 = SharedWorkingSetList[2];
  for ( i = 1LL; i <= v7; ++i )
  {
    v9 = *(_QWORD *)(SharedWorkingSetList[10] + i * *((unsigned int *)SharedWorkingSetList + 8));
    if ( (v9 & 1) != 0 )
    {
      v10 = (v9 & 0x800000000000LL) != 0 ? v9 | 0xFFFF000000000000uLL : v9 & 0xFFFFFFFFFFFFLL;
      v13 = MI_READ_PTE_LOCK_FREE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( (v13 & 1) != 0 )
      {
        v11 = MI_GET_PAGE_FRAME_FROM_PTE(&v13);
        if ( (*(_QWORD *)(48 * v11 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(a1 + 8))(a1, v11, 1LL, 2LL);
      }
    }
  }
  if ( v6 != 17 )
  {
    v12 = MiGetSharedVm((__int64)AnyMultiplexedVm);
    ExReleaseSpinLockShared(v12, v6);
  }
}
