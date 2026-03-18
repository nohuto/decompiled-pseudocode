/*
 * XREFs of KeRegisterNmiCallback @ 0x14020007C
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x1401EFA5C (HvlpInitializeHvCrashdump.c)
 *     VerifierKeRegisterNmiCallback @ 0x1407421C4 (VerifierKeRegisterNmiCallback.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  PVOID result; // rax
  PVOID *v5; // rbx
  unsigned __int8 CurrentIrql; // di
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x494D4E4Bu);
  v5 = (PVOID *)result;
  if ( result )
  {
    *((_QWORD *)result + 1) = CallbackRoutine;
    *((_QWORD *)result + 2) = Context;
    *((_QWORD *)result + 3) = result;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&KiNmiCallbackListLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiNmiCallbackListLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiNmiCallbackListLock);
    }
    *v5 = KiNmiCallbackListHead;
    KiNmiCallbackListHead = v5;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiNmiCallbackListLock, retaddr);
    else
      _InterlockedAnd64(&KiNmiCallbackListLock, 0LL);
    __writecr8(CurrentIrql);
    return v5[3];
  }
  return result;
}
