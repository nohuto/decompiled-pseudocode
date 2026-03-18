/*
 * XREFs of ?RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C002D678
 * Callers:
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C00086B8 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0014698 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C002D644 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C002D6E4 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 */

_IRP *__fastcall FxIrpQueue::RemoveNextIrpFromQueue(
        FxIrpQueue *this,
        void *PeekContext,
        _IO_CSQ_IRP_CONTEXT **pCsqContext)
{
  void *v3; // r8
  _IRP *i; // rdx
  _IRP *IrpFromQueue; // rax
  FxIrpQueue *v6; // r11
  _IRP *result; // rax
  _QWORD *v8; // r10
  _QWORD *v9; // rcx
  FxIrp fxIrp; // [rsp+48h] [rbp+20h] BYREF

  v3 = PeekContext;
  for ( i = 0LL; ; i = fxIrp.m_Irp )
  {
    IrpFromQueue = FxIrpQueue::PeekNextIrpFromQueue(this, i, v3);
    fxIrp.m_Irp = IrpFromQueue;
    if ( !IrpFromQueue )
      return 0LL;
    this = v6;
    if ( _InterlockedExchange64((volatile __int64 *)&IrpFromQueue->CancelRoutine, 0LL) )
      break;
  }
  FxIrpQueue::RemoveIrpFromListEntry(v6, &fxIrp);
  result = fxIrp.m_Irp;
  v9 = fxIrp.m_Irp->Tail.Overlay.DriverContext[3];
  if ( *(_DWORD *)v9 == 1 )
    v9[1] = 0LL;
  if ( v8 )
    *v8 = v9;
  result->Tail.Overlay.DriverContext[3] = 0LL;
  return result;
}
