/*
 * XREFs of KeAttachProcess @ 0x1400C7800
 * Callers:
 *     KiCompleteKernelInit @ 0x1403A9A9C (KiCompleteKernelInit.c)
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x14002B0C0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiAttachProcess @ 0x1400C7960 (KiAttachProcess.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __stdcall KeAttachProcess(PRKPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _KPROCESS *v3; // r8
  unsigned __int8 ApcStateIndex; // cl
  int v5; // r8d
  char v6; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = CurrentThread->ApcState.Process;
  if ( v3 != Process )
  {
    ApcStateIndex = CurrentThread->ApcStateIndex;
    if ( ApcStateIndex || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(5u, (ULONG_PTR)Process, (ULONG_PTR)v3, ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
    KiAcquireThreadLockRaiseToDpc((__int64)CurrentThread, &v6);
    LOBYTE(v5) = v6;
    KiAttachProcess((_DWORD)CurrentThread, (_DWORD)Process, v5, 0, (__int64)&CurrentThread->600);
  }
}
