/*
 * XREFs of ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C001B8B0
 * Callers:
 *     imp_WdfRequestGetIoQueue @ 0x1C00116F0 (imp_WdfRequestGetIoQueue.c)
 *     imp_WdfRequestUnmarkCancelable @ 0x1C0014220 (imp_WdfRequestUnmarkCancelable.c)
 *     imp_WdfRequestMarkCancelable @ 0x1C002F480 (imp_WdfRequestMarkCancelable.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1C0038100 (imp_WdfRequestMarkCancelableEx.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x1C0075010 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 *     imp_WdfRequestRequeue @ 0x1C0075570 (imp_WdfRequestRequeue.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0090FDC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     imp_VfWdfIoQueueRetrieveFoundRequest @ 0x1C00C4540 (imp_VfWdfIoQueueRetrieveFoundRequest.c)
 *     imp_VfWdfIoQueueRetrieveNextRequest @ 0x1C00C4690 (imp_VfWdfIoQueueRetrieveNextRequest.c)
 *     imp_VfWdfIoQueueRetrieveRequestByFileObject @ 0x1C00C47E0 (imp_VfWdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_VfWdfRequestComplete @ 0x1C00C5590 (imp_VfWdfRequestComplete.c)
 *     imp_VfWdfRequestCompleteWithInformation @ 0x1C00C56E0 (imp_VfWdfRequestCompleteWithInformation.c)
 *     imp_VfWdfRequestCompleteWithPriorityBoost @ 0x1C00C5840 (imp_VfWdfRequestCompleteWithPriorityBoost.c)
 *     VfEvtIoDefault @ 0x1C00C7980 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00C7B30 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00C7CF0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00C7EB0 (VfEvtIoRead.c)
 *     VfEvtIoWrite @ 0x1C00C81D0 (VfEvtIoWrite.c)
 * Callees:
 *     <none>
 */

FxIoQueue *__fastcall FxRequest::GetCurrentQueue(FxRequest *this)
{
  if ( this->m_Completed )
    return 0LL;
  else
    return this->m_IoQueue;
}
