/*
 * XREFs of ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0034C7C
 * Callers:
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00033A0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0004280 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000BFD0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0034C10 (-RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

_IRP *__fastcall FxIrpQueue::PeekNextIrpFromQueue(FxIrpQueue *this, _IRP *Irp, _FILE_OBJECT *PeekContext)
{
  _IRP *result; // rax
  FxIrpQueue *Flink; // rdx

  result = 0LL;
  if ( Irp )
    Flink = (FxIrpQueue *)Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = (FxIrpQueue *)this->m_Queue.Flink;
  for ( ; Flink != this; result = 0LL )
  {
    result = (_IRP *)&Flink[-5].m_RequestCount;
    if ( !PeekContext )
      break;
    if ( result->Tail.Overlay.CurrentStackLocation->FileObject == PeekContext )
      break;
    Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
  }
  return result;
}
