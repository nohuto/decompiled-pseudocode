/*
 * XREFs of ?Remove@FxIoTargetRemote@@UEAAXXZ @ 0x1C002E5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxIoTargetRemote::Remove(FxIoTargetRemote *this)
{
  FxIoTargetRemote::Close(this, FxIoTargetRemoteCloseReasonDelete);
}
