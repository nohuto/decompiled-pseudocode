/*
 * XREFs of KiSynchronizePassiveInterruptExecution @ 0x1401D8D38
 * Callers:
 *     KeSynchronizeExecution @ 0x14015E940 (KeSynchronizeExecution.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 */

char __fastcall KiSynchronizePassiveInterruptExecution(__int64 a1, __int64 (__fastcall *a2)(__int64), __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
  LOBYTE(a3) = a2(a3);
  KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return a3;
}
