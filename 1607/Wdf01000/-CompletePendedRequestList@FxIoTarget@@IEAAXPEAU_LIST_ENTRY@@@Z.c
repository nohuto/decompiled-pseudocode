/*
 * XREFs of ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00837AC
 * Callers:
 *     ?Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0083F90 (-Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?Remove@FxIoTarget@@UEAAXXZ @ 0x1C0084080 (-Remove@FxIoTarget@@UEAAXXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0084FF4 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C008C110 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 * Callees:
 *     ?FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z @ 0x1C0083858 (-FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z.c)
 */

void __fastcall FxIoTarget::CompletePendedRequestList(FxIoTarget *this, _LIST_ENTRY *RequestListHead)
{
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v5; // rax

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
    FxIoTarget::FailPendedRequest(this, (FxRequestBase *)&Flink[-8].Blink, -1071644154);
  }
}
