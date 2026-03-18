/*
 * XREFs of ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C007861C
 * Callers:
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00908B0 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C001B638 (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 *     ?PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z @ 0x1C00643F0 (-PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxRequest::PeekRequest(
        FxIrpQueue *IrpQueue,
        FxRequest *TagRequest,
        _FILE_OBJECT *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        FxRequest **ppOutRequest)
{
  $8B26BD50DADCE63D5F5F71A785E147C5 *v5; // rax
  __int64 result; // rax
  unsigned __int8 v8; // r8

  v5 = 0LL;
  if ( TagRequest )
    v5 = &TagRequest->120;
  result = FxIrpQueue::PeekRequest(IrpQueue, &v5->m_CsqContext, FileObject, ppOutRequest);
  if ( (int)result >= 0 )
  {
    if ( Parameters )
      return FxRequest::GetParameters(*ppOutRequest, Parameters, v8);
  }
  return result;
}
