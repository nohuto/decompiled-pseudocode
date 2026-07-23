/*
 * XREFs of AlpcpWaitForSingleObject @ 0x14009F8C8
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x140446B10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReceiveMessagePort @ 0x14044BC40 (AlpcpReceiveMessagePort.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1404B14D0 (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     AlpcpLogUnwait @ 0x140656A48 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  unsigned int v9; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v11; // ebx

  KeLeaveCriticalRegion();
  v9 = KeWaitForSingleObject(Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  v11 = v9;
  --CurrentThread->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v9);
  return v11;
}
