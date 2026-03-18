/*
 * XREFs of ?QueryInterface@FxDriver@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0021170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDriver::QueryInterface(FxDriver *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4097 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0LL;
}
