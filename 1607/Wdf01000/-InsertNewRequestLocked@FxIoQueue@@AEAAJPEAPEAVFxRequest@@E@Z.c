/*
 * XREFs of ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000BAF8
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004C90 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00057E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001AFB0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C006347C (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C0012268 (-CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C00124FC (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C001B8C4 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 */

__int64 __fastcall FxIoQueue::InsertNewRequestLocked(FxIoQueue *this, FxRequest **Request, unsigned int *PreviousIrql)
{
  unsigned __int8 v5; // bp
  int inserted; // esi
  FxRequest *v7; // rcx
  unsigned __int8 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = (unsigned __int8)PreviousIrql;
  v5 = (unsigned __int8)PreviousIrql;
  inserted = FxRequest::InsertTailIrpQueue(*Request, &this->m_Queue, PreviousIrql);
  if ( inserted >= 0 )
  {
    (*Request)->m_IoQueue = this;
    FxIoQueue::CheckTransitionFromEmpty(this);
  }
  else
  {
    FxNonPagedObject::Unlock(this, v5);
    v7 = *Request;
    (*Request)->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxRequest::Complete(v7, inserted);
    (*Request)->Release(
      *Request,
      (void *)1886220099,
      2633,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &v9);
  }
  *Request = 0LL;
  return (unsigned int)inserted;
}
