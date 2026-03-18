/*
 * XREFs of MiCloneReserveVadCommit @ 0x14009AA54
 * Callers:
 *     MiAllocateChildVads @ 0x140461278 (MiAllocateChildVads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400610B0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140061118 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiCommitPageTablesForVad @ 0x140415350 (MiCommitPageTablesForVad.c)
 */

__int64 __fastcall MiCloneReserveVadCommit(__int64 a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // r13
  int v4; // ebp
  __int64 Process; // r12
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdi
  KIRQL v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  KIRQL v12; // bl
  __int64 NextPageTable; // rdi
  int v16; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v17[48]; // [rsp+40h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v6 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v7 = 8 * ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Process + 1280));
  while ( 1 )
  {
    v12 = v8;
    if ( v7 > v6 )
      break;
    LOBYTE(v11) = v8;
    NextPageTable = MiGetNextPageTable(v7, v6, 0LL, v11, 4, &v16);
    if ( !NextPageTable )
      break;
    LOBYTE(v9) = v12;
    MiUnlockWorkingSetExclusive(Process + 1280, v9, v10);
    KiStackAttachProcess(a2);
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    v4 = MiCommitPageTablesForVad(a1, NextPageTable << 25 >> 16);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    KiUnstackDetachProcess(v17, 0LL);
    if ( v4 < 0 )
      return (unsigned int)v4;
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Process + 1280));
    v7 = (__int64)(((NextPageTable & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
  }
  LOBYTE(v9) = v12;
  MiUnlockWorkingSetExclusive(Process + 1280, v9, v10);
  return (unsigned int)v4;
}
