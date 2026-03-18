/*
 * XREFs of MiWaitForRotateToComplete @ 0x1401036B0
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 */

__int64 __fastcall MiWaitForRotateToComplete(unsigned __int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v4; // r8
  _KPROCESS *Process; // rbx
  _QWORD *i; // rdx
  __int64 v7; // rdi

  CurrentThread = KeGetCurrentThread();
  v4 = a1 >> 12;
  Process = CurrentThread->ApcState.Process;
  for ( i = (_QWORD *)Process[1].Affinity.Bitmap[9]; ; i = (_QWORD *)*i )
  {
    if ( !i )
      return 0LL;
    v7 = i[1];
    if ( v4 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
      && v4 <= (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
    {
      break;
    }
  }
  if ( (struct _KTHREAD *)i[2] == CurrentThread )
    return 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 36));
  LOBYTE(i) = a2;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], (__int64)i, v4);
  MiLockVad((__int64)CurrentThread, v7);
  MiUnlockAndDereferenceVad((PVOID)v7);
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  return 1LL;
}
