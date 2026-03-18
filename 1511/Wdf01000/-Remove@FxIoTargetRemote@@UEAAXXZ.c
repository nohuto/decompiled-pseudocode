/*
 * XREFs of ?Remove@FxIoTargetRemote@@UEAAXXZ @ 0x1C0077A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxIoTargetRemote::Remove(FxIoTargetRemote *this, __int64 a2, unsigned __int8 a3)
{
  FxIoTargetRemote::Close(this, 3, a3);
}
