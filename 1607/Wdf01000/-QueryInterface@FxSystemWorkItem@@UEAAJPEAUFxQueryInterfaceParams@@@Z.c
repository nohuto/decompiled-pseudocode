/*
 * XREFs of ?QueryInterface@FxSystemWorkItem@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C007B780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxSystemWorkItem::QueryInterface(FxSystemWorkItem *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4145 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0LL;
}
