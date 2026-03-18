/*
 * XREFs of IopRemoveHardErrorPacket @ 0x1401F29EC
 * Callers:
 *     IopHardErrorThread @ 0x1406718A8 (IopHardErrorThread.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  unsigned __int8 CurrentIrql; // di
  __int64 v1; // rbx
  __int64 v2; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

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
  v1 = qword_14034BAE0;
  v2 = *(_QWORD *)qword_14034BAE0;
  if ( *(__int64 **)(qword_14034BAE0 + 8) != &qword_14034BAE0 || *(_QWORD *)(v2 + 8) != qword_14034BAE0 )
    __fastfail(3u);
  qword_14034BAE0 = *(_QWORD *)qword_14034BAE0;
  *(_QWORD *)(v2 + 8) = &qword_14034BAE0;
  IopCurrentHardError = v1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_14034BAF0, retaddr);
  else
    _InterlockedAnd64(&qword_14034BAF0, 0LL);
  __writecr8(CurrentIrql);
  return v1;
}
