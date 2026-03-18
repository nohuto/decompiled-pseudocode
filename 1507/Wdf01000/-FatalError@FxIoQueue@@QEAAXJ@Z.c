/*
 * XREFs of ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1C0095AA8
 * Callers:
 *     imp_WdfIoQueueDrain @ 0x1C0093830 (imp_WdfIoQueueDrain.c)
 *     imp_WdfIoQueueDrainSynchronously @ 0x1C00938F0 (imp_WdfIoQueueDrainSynchronously.c)
 *     imp_WdfIoQueuePurge @ 0x1C0093CF0 (imp_WdfIoQueuePurge.c)
 *     imp_WdfIoQueuePurgeSynchronously @ 0x1C0093DB0 (imp_WdfIoQueuePurgeSynchronously.c)
 *     imp_WdfIoQueueStop @ 0x1C0094390 (imp_WdfIoQueueStop.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x1C0094440 (imp_WdfIoQueueStopAndPurge.c)
 *     imp_WdfIoQueueStopAndPurgeSynchronously @ 0x1C00944F0 (imp_WdfIoQueueStopAndPurgeSynchronously.c)
 *     imp_WdfIoQueueStopSynchronously @ 0x1C0094610 (imp_WdfIoQueueStopSynchronously.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall __noreturn FxIoQueue::FatalError(FxIoQueue *this, int Status)
{
  WDFQUEUE__ *v2; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _WDF_QUEUE_FATAL_ERROR_DATA data; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  memset(&data, 0, sizeof(data));
  if ( this->m_ObjectSize )
    v2 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  m_Globals = this->m_Globals;
  data.Request = 0LL;
  data.Status = Status;
  data.Queue = v2;
  FxVerifierBugCheckWorker(m_Globals, WDF_QUEUE_FATAL_ERROR, (ULONG_PTR)&data, 0LL);
}
