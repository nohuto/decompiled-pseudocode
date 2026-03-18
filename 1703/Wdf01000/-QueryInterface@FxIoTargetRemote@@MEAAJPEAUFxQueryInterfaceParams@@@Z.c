/*
 * XREFs of ?QueryInterface@FxIoTargetRemote@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C002E770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxIoTargetRemote::QueryInterface(FxIoTargetRemote *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4609 )
    return FxIoTarget::QueryInterface(this, Params);
  *Params->Object = this;
  return 0LL;
}
