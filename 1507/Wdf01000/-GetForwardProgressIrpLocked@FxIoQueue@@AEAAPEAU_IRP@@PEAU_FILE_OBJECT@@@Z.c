/*
 * XREFs of ?GetForwardProgressIrpLocked@FxIoQueue@@AEAAPEAU_IRP@@PEAU_FILE_OBJECT@@@Z @ 0x1C000B600
 * Callers:
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C000B738 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0097FA0 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY **__fastcall FxIoQueue::GetForwardProgressIrpLocked(FxIoQueue *this, _FILE_OBJECT *FileObject)
{
  _LIST_ENTRY **p_Blink; // r8
  _LIST_ENTRY *p_m_PendedIrpList; // r10
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v6; // r9
  _LIST_ENTRY *Blink; // rax

  p_Blink = 0LL;
  p_m_PendedIrpList = &this->m_FwdProgContext->m_PendedIrpList;
  Flink = p_m_PendedIrpList->Flink;
  if ( p_m_PendedIrpList->Flink != p_m_PendedIrpList )
  {
    while ( 1 )
    {
      v6 = Flink->Flink;
      p_Blink = &Flink[-11].Blink;
      if ( !FileObject || FileObject == (_FILE_OBJECT *)p_Blink[23][3].Flink )
      {
        Blink = Flink->Blink;
        if ( v6->Blink != Flink || Blink->Flink != Flink )
          __fastfail(3u);
        Blink->Flink = v6;
        v6->Blink = Blink;
        Flink->Blink = Flink;
        Flink->Flink = Flink;
        if ( _InterlockedExchange64((volatile __int64 *)p_Blink + 13, 0LL) )
          break;
      }
      p_Blink = 0LL;
      Flink = v6;
      if ( v6 == p_m_PendedIrpList )
        return p_Blink;
    }
    p_Blink[18] = 0LL;
  }
  return p_Blink;
}
