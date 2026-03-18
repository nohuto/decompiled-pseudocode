/*
 * XREFs of ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C0075088
 * Callers:
 *     ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x1C0095FBC (-PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPE.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096948 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C005C174 (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 *     ?PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z @ 0x1C0078B9C (-PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z.c)
 */

int __fastcall FxRequest::PeekRequest(
        FxIrpQueue *IrpQueue,
        FxRequest *TagRequest,
        _FILE_OBJECT *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        FxRequest **ppOutRequest)
{
  $CBDB4BB9AD9093A4D765C5B3340F9886 *v5; // rax
  int result; // eax
  unsigned __int8 v8; // r8

  v5 = 0LL;
  if ( TagRequest )
    v5 = &TagRequest->120;
  result = FxIrpQueue::PeekRequest(IrpQueue, &v5->m_CsqContext, FileObject, ppOutRequest);
  if ( result >= 0 )
  {
    if ( Parameters )
      return FxRequest::GetParameters(*ppOutRequest, Parameters, v8);
  }
  return result;
}
