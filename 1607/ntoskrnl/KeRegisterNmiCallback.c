/*
 * XREFs of KeRegisterNmiCallback @ 0x1401D2914
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x1401C07CC (HvlpInitializeHvCrashdump.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
