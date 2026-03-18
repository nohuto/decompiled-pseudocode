/*
 * XREFs of MiDeleteKernelStackPages @ 0x1400A16C8
 * Callers:
 *     MiDeleteKernelStack @ 0x1400A1598 (MiDeleteKernelStack.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001D05C (MiGetAnyMultiplexedVm.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteValidSystemPage @ 0x14004B6A0 (MiDeleteValidSystemPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteKernelStackPages(_QWORD *BugCheckParameter2, int a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 v5; // r14
  char *AnyMultiplexedVm; // rbp
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  __int64 v9; // rdx
  KIRQL v10; // r15

  v3 = BugCheckParameter2;
  v5 = (unsigned __int64)&BugCheckParameter2[a2];
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v8;
  while ( (unsigned __int64)v3 < v5 )
  {
    if ( (MI_READ_PTE_LOCK_FREE(v3) & 1) != 0 )
    {
      MiDeleteValidSystemPage(v3, 0, (__int64)a3);
      ++*a3;
    }
    ++v3;
  }
  LOBYTE(v9) = v10;
  return MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v9);
}
