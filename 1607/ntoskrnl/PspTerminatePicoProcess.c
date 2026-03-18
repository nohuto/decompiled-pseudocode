/*
 * XREFs of PspTerminatePicoProcess @ 0x140681B88
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     PspTerminateProcess @ 0x140507F68 (PspTerminateProcess.c)
 */

__int64 __fastcall PspTerminatePicoProcess(ULONG_PTR a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (__int64)CurrentThread, a2, 8);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v4, v5, v6);
  return v3;
}
