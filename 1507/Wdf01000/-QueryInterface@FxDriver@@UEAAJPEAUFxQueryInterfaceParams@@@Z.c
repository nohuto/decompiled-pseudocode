/*
 * XREFs of ?QueryInterface@FxDriver@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0010680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall FxDriver::QueryInterface(FxDriver *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4097 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0;
}
