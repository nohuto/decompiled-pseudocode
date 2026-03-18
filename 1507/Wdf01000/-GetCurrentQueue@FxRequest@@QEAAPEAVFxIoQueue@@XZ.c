/*
 * XREFs of ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C00203D8
 * Callers:
 *     imp_WdfRequestUnmarkCancelable @ 0x1C00083C0 (imp_WdfRequestUnmarkCancelable.c)
 *     imp_WdfRequestGetIoQueue @ 0x1C00232C0 (imp_WdfRequestGetIoQueue.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1C00233E0 (imp_WdfRequestMarkCancelableEx.c)
 *     imp_WdfRequestMarkCancelable @ 0x1C00238C0 (imp_WdfRequestMarkCancelable.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C006E500 (imp_WdfRequestForwardToIoQueue.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x1C006E660 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 *     imp_WdfRequestRequeue @ 0x1C006F0F0 (imp_WdfRequestRequeue.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00978DC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     imp_VfWdfIoQueueRetrieveFoundRequest @ 0x1C00CB520 (imp_VfWdfIoQueueRetrieveFoundRequest.c)
 *     imp_VfWdfIoQueueRetrieveNextRequest @ 0x1C00CB6A0 (imp_VfWdfIoQueueRetrieveNextRequest.c)
 *     imp_VfWdfIoQueueRetrieveRequestByFileObject @ 0x1C00CB830 (imp_VfWdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_VfWdfRequestComplete @ 0x1C00CC610 (imp_VfWdfRequestComplete.c)
 *     imp_VfWdfRequestCompleteWithInformation @ 0x1C00CC7B0 (imp_VfWdfRequestCompleteWithInformation.c)
 *     imp_VfWdfRequestCompleteWithPriorityBoost @ 0x1C00CC950 (imp_VfWdfRequestCompleteWithPriorityBoost.c)
 *     VfEvtIoDefault @ 0x1C00CF1B0 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00CF3E0 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00CF630 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00CF880 (VfEvtIoRead.c)
 *     VfEvtIoWrite @ 0x1C00CFE00 (VfEvtIoWrite.c)
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
