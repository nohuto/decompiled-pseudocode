/*
 * XREFs of MiWaitForRotateToComplete @ 0x14010F2A0
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiWaitForRotateToComplete(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v3; // r9
  _KPROCESS *Process; // rax
  _QWORD *v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rbx
  LONG *SharedVm; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 >> 12;
  Process = CurrentThread->ApcState.Process;
  v5 = (_QWORD *)Process[1].Affinity.Bitmap[9];
  v6 = (__int64)&Process[1].IdealNode[12];
  while ( 1 )
  {
    if ( !v5 )
      return 0LL;
    v7 = v5[1];
    if ( v3 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
      && v3 <= (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
    {
      break;
    }
    v5 = (_QWORD *)*v5;
  }
  if ( (struct _KTHREAD *)v5[2] == CurrentThread )
    return 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 36));
  MiUnlockWorkingSetExclusive(v6, a2);
  MiLockVad((__int64)CurrentThread, v7);
  MiUnlockAndDereferenceVad((char *)v7);
  SharedVm = MiGetSharedVm(v6);
  ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  return 1LL;
}
