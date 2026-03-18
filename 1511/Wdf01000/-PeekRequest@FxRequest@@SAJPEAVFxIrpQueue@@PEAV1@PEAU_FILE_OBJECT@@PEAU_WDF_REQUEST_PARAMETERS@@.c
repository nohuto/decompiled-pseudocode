/*
 * XREFs of ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C0069E24
 * Callers:
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0082940 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C00228A0 (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 *     ?PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z @ 0x1C005746C (-PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxRequest::PeekRequest(
        FxIrpQueue *IrpQueue,
        FxRequest *TagRequest,
        _FILE_OBJECT *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        FxRequest **ppOutRequest)
{
  $62629F1B78C8AA6D0A69F9052F9E18D0 *v5; // rax
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
