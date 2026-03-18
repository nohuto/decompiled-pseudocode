/*
 * XREFs of IopCheckHardErrorEmpty @ 0x1401F1EB8
 * Callers:
 *     IopHardErrorThread @ 0x1406718A8 (IopHardErrorThread.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

char IopCheckHardErrorEmpty()
{
  char v0; // bl
  unsigned __int8 CurrentIrql; // di
  void *retaddr; // [rsp+28h] [rbp+0h]

  v0 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&qword_14034BAF0);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034BAF0, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_14034BAF0);
  }
  IopCurrentHardError = 0LL;
  if ( (__int64 *)qword_14034BAE0 == &qword_14034BAE0 )
  {
    byte_14034BB18 = 0;
    v0 = 0;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_14034BAF0, retaddr);
  else
    _InterlockedAnd64(&qword_14034BAF0, 0LL);
  __writecr8(CurrentIrql);
  return v0;
}
