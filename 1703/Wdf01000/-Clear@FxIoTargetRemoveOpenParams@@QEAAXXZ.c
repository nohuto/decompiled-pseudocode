/*
 * XREFs of ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C002F330
 * Callers:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C002EA58 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002ECB4 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxIoTargetRemoveOpenParams::Clear(FxIoTargetRemoveOpenParams *this)
{
  _QWORD *EaBuffer; // rcx
  wchar_t *Buffer; // rcx

  EaBuffer = this->EaBuffer;
  if ( EaBuffer )
    FxPoolFree(EaBuffer);
  Buffer = this->TargetDeviceName.Buffer;
  if ( Buffer )
    FxPoolFree(Buffer);
  memset(this, 0, sizeof(FxIoTargetRemoveOpenParams));
}
