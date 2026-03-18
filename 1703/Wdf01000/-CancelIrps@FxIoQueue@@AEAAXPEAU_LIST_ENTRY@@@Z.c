/*
 * XREFs of ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D6AC
 * Callers:
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001D8A0 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C009496C (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoQueue::CancelIrps(FxIoQueue *this, _LIST_ENTRY *IrpListHead)
{
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v4; // rax
  _IRP *p_Blink; // rcx

  while ( 1 )
  {
    Flink = IrpListHead->Flink;
    if ( IrpListHead->Flink == IrpListHead )
      break;
    v4 = Flink->Flink;
    if ( Flink->Blink != IrpListHead || v4->Blink != Flink )
      __fastfail(3u);
    IrpListHead->Flink = v4;
    p_Blink = (_IRP *)&Flink[-11].Blink;
    v4->Blink = IrpListHead;
    p_Blink->IoStatus.Information = 0LL;
    p_Blink->IoStatus.Status = -1073741536;
    IofCompleteRequest(p_Blink, 0);
  }
}
