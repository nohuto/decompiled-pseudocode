/*
 * XREFs of ?DeliverInput@MPCHFXInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180085F20
 * Callers:
 *     ?DeliverInput@MPCHFXInputTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x180086DE0 (-DeliverInput@MPCHFXInputTarget@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall MPCHFXInputTarget::DeliverInput(MPCHFXInputTarget *this, struct InputInfo *a2)
{
  return MPCHFXInputTarget::InternalDeliverInput(this, a2, 0);
}
