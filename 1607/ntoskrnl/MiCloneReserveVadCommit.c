/*
 * XREFs of MiCloneReserveVadCommit @ 0x14010A8B8
 * Callers:
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
 * Callees:
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400298C0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14002BAD0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiCommitPageTablesForVad @ 0x14042F900 (MiCommitPageTablesForVad.c)
 */

__int64 __fastcall MiCloneReserveVadCommit(__int64 a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // r13
  int v4; // r14d
  unsigned __int64 v5; // r8
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v12; // r9
  KIRQL v13; // si
  __int64 NextPageTable; // rdi
  __int64 v15; // rsi
  LONG *v16; // rbx
  int v18; // [rsp+30h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-80h]
  _KPROCESS *Process; // [rsp+40h] [rbp-78h]
  _BYTE v21[48]; // [rsp+48h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  BugCheckParameter1 = a2;
  Process = CurrentThread->ApcState.Process;
  v6 = (__int64)&Process[1].IdealNode[12];
  v7 = 8 * ((*(unsigned int *)(a1 + 24) | v5) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v8 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  while ( 1 )
  {
    v13 = v10;
    if ( v7 > v8 )
      break;
    LOBYTE(v12) = v10;
    NextPageTable = MiGetNextPageTable(v7, v8, 0LL, v12, 4, &v18);
    if ( !NextPageTable )
      break;
    LOBYTE(v11) = v13;
    MiUnlockWorkingSetExclusive(v6, v11);
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v21);
    v15 = (__int64)Process;
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)Process);
    v4 = MiCommitPageTablesForVad(a1, NextPageTable << 25 >> 16, NextPageTable << 25 >> 16);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v15);
    KiUnstackDetachProcess((struct _KTHREAD *)v21, 0);
    if ( v4 < 0 )
      return (unsigned int)v4;
    v16 = MiGetSharedVm(v6);
    v10 = ExAcquireSpinLockExclusive(v16);
    v16[1] = 0;
    v7 = (__int64)(((NextPageTable & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
  }
  LOBYTE(v11) = v13;
  MiUnlockWorkingSetExclusive(v6, v11);
  return (unsigned int)v4;
}
