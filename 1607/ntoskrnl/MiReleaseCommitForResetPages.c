/*
 * XREFs of MiReleaseCommitForResetPages @ 0x1401E0934
 * Callers:
 *     MmOutSwapProcess @ 0x14009126C (MmOutSwapProcess.c)
 * Callees:
 *     MiUnlockVad @ 0x1400144A0 (MiUnlockVad.c)
 *     MiLockVad @ 0x14002BFB0 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002C390 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CFD0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     MiEnumerateLeafPtes @ 0x1400B9C10 (MiEnumerateLeafPtes.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1401DFA24 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1401DFCF4 (MiLogResetPagesCommitRelease.c)
 */

LONG __fastcall MiReleaseCommitForResetPages(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  LONG *SharedVm; // rax
  struct _KTHREAD *v5; // r12
  LONG *v6; // r13
  __int64 v7; // r14
  _QWORD *v8; // rax
  unsigned __int64 v9; // rsi
  LONG *v10; // rbx
  KIRQL v11; // al
  KIRQL v12; // di
  __int64 v13; // rdx
  _QWORD *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  int *v17; // rax
  LONG *v18; // rbx
  KIRQL v19; // al
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  struct _KEVENT *v22; // rbx
  ULONG_PTR v24; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-A0h]
  __int64 v26; // [rsp+40h] [rbp-98h]
  char v27; // [rsp+48h] [rbp-90h] BYREF
  __int64 v28; // [rsp+68h] [rbp-70h]
  _BYTE v29[48]; // [rsp+78h] [rbp-60h] BYREF

  CurrentThread = KeGetCurrentThread();
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, BugCheckParameter1, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 1, (__int64)v29);
  SharedVm = MiGetSharedVm(BugCheckParameter1 + 1280);
  v5 = KeGetCurrentThread();
  v6 = SharedVm;
  v7 = *((_QWORD *)SharedVm + 4);
  v25 = 0LL;
  v26 = 0LL;
  v24 = BugCheckParameter1 + 1280;
  if ( (*(_DWORD *)(v7 + 48) & 1) != 0 )
  {
    LOCK_ADDRESS_SPACE((__int64)v5, BugCheckParameter1);
    v8 = *(_QWORD **)(BugCheckParameter1 + 1568);
    v9 = 0LL;
    while ( v8 )
    {
      v9 = (unsigned __int64)v8;
      v8 = (_QWORD *)*v8;
    }
    while ( v9 )
    {
      MiLockVad((__int64)v5, v9);
      if ( MiIsVadEligibleForCommitRelease(v9) )
      {
        v10 = MiGetSharedVm(BugCheckParameter1 + 1280);
        v11 = ExAcquireSpinLockExclusive(v10);
        v10[1] = 0;
        LOBYTE(v25) = v11;
        v12 = v11;
        MiEnumerateLeafPtes(
          (((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32) | *(unsigned int *)(v9 + 24)) << 12,
          (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) << 12,
          (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiReleaseCommitForResetPageCallback,
          (__int64)&v24,
          0);
        LOBYTE(v13) = v12;
        MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v13);
      }
      MiUnlockVad((__int64)v5, v9);
      v14 = *(_QWORD **)(v9 + 8);
      v15 = v9;
      if ( v14 )
      {
        do
        {
          v9 = (unsigned __int64)v14;
          v14 = (_QWORD *)*v14;
        }
        while ( v14 );
      }
      else
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v9 || *(_QWORD *)v9 == v15 )
            break;
          v15 = v9;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE((__int64)v5, BugCheckParameter1);
  }
  v16 = _InterlockedExchange64((volatile __int64 *)(BugCheckParameter1 + 1488), 0LL);
  if ( v16 )
  {
    v17 = MiPartitionIdToPointer(*(_WORD *)(BugCheckParameter1 + 1444));
    MiReturnCommit((__int64)v17, v16);
  }
  v18 = MiGetSharedVm(BugCheckParameter1 + 1280);
  v19 = ExAcquireSpinLockExclusive(v18);
  v18[1] = 0;
  v21 = *(_QWORD *)(v7 + 32);
  v22 = *(struct _KEVENT **)(v7 + 40);
  *(_QWORD *)(v7 + 40) = 0LL;
  if ( v21 <= v16 )
    *(_QWORD *)(v7 + 32) = 0LL;
  else
    *(_QWORD *)(v7 + 32) = v21 - v16;
  *((_QWORD *)v6 + 1) += v16;
  LOBYTE(v20) = v19;
  MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v20);
  MiLogResetPagesCommitRelease();
  v28 = 0LL;
  KiUnstackDetachProcess((struct _KTHREAD *)&v27, 1);
  return KeSetEvent(v22, 0, 0);
}
