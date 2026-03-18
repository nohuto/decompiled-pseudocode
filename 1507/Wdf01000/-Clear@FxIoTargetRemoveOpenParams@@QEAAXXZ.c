/*
 * XREFs of ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C0021410
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00210CC (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0085BB4 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxIoTargetRemoveOpenParams::Clear(FxIoTargetRemoveOpenParams *this)
{
  _QWORD *EaBuffer; // rcx
  unsigned __int16 *Buffer; // rcx

  EaBuffer = this->EaBuffer;
  if ( EaBuffer )
    FxPoolFree(EaBuffer);
  Buffer = this->TargetDeviceName.Buffer;
  if ( Buffer )
    FxPoolFree(Buffer);
  memset(this, 0, sizeof(FxIoTargetRemoveOpenParams));
}
