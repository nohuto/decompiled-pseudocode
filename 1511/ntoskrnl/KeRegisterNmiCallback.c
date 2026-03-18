/*
 * XREFs of KeRegisterNmiCallback @ 0x1401C3F40
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x1401B4B7C (HvlpInitializeHvCrashdump.c)
 *     VerifierKeRegisterNmiCallback @ 0x1406C09CC (VerifierKeRegisterNmiCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  PVOID result; // rax
  PVOID *v5; // rbx
  KIRQL v6; // al

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x494D4E4Bu);
  v5 = (PVOID *)result;
  if ( result )
  {
    *((_QWORD *)result + 1) = CallbackRoutine;
    *((_QWORD *)result + 2) = Context;
    *((_QWORD *)result + 3) = result;
    v6 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
    *v5 = KiNmiCallbackListHead;
    KiNmiCallbackListHead = v5;
    KeReleaseSpinLock(&KiNmiCallbackListLock, v6);
    return v5[3];
  }
  return result;
}
