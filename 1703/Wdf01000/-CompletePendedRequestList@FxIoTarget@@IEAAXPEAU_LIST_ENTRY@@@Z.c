/*
 * XREFs of ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002AA48
 * Callers:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C002EA58 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0088230 (-Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?Remove@FxIoTarget@@UEAAXXZ @ 0x1C0088320 (-Remove@FxIoTarget@@UEAAXXZ.c)
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0090020 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 * Callees:
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0066E14 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::CompletePendedRequestList(FxIoTarget *this, _LIST_ENTRY *RequestListHead)
{
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v5; // rax
  FxRequestBase *p_Blink; // rdx

  while ( 1 )
  {
    Flink = RequestListHead->Flink;
    if ( RequestListHead->Flink == RequestListHead )
      break;
    v5 = Flink->Flink;
    if ( Flink->Blink != RequestListHead || v5->Blink != Flink )
      __fastfail(3u);
    RequestListHead->Flink = v5;
    v5->Blink = RequestListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    p_Blink = (FxRequestBase *)&Flink[-8].Blink;
    p_Blink->m_Irp.m_Irp->IoStatus.Status = -1071644154;
    p_Blink->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxIoTarget::RequestCompletionRoutine(this, p_Blink);
  }
}
