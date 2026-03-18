/*
 * XREFs of ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C002288C
 * Callers:
 *     imp_WdfRequestGetIoQueue @ 0x1C0003750 (imp_WdfRequestGetIoQueue.c)
 *     imp_WdfRequestUnmarkCancelable @ 0x1C000FCE0 (imp_WdfRequestUnmarkCancelable.c)
 *     imp_WdfRequestMarkCancelable @ 0x1C002A380 (imp_WdfRequestMarkCancelable.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1C002A450 (imp_WdfRequestMarkCancelableEx.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x1C0065120 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 *     imp_WdfRequestRequeue @ 0x1C0065680 (imp_WdfRequestRequeue.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C008306C (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     imp_VfWdfIoQueueRetrieveFoundRequest @ 0x1C00B5520 (imp_VfWdfIoQueueRetrieveFoundRequest.c)
 *     imp_VfWdfIoQueueRetrieveNextRequest @ 0x1C00B5670 (imp_VfWdfIoQueueRetrieveNextRequest.c)
 *     imp_VfWdfIoQueueRetrieveRequestByFileObject @ 0x1C00B57C0 (imp_VfWdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_VfWdfRequestComplete @ 0x1C00B6570 (imp_VfWdfRequestComplete.c)
 *     imp_VfWdfRequestCompleteWithInformation @ 0x1C00B66C0 (imp_VfWdfRequestCompleteWithInformation.c)
 *     imp_VfWdfRequestCompleteWithPriorityBoost @ 0x1C00B6820 (imp_VfWdfRequestCompleteWithPriorityBoost.c)
 *     VfEvtIoDefault @ 0x1C00B8960 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00B8B10 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00B8CD0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00B8E90 (VfEvtIoRead.c)
 *     VfEvtIoWrite @ 0x1C00B91B0 (VfEvtIoWrite.c)
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
