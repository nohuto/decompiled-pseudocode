/*
 * XREFs of ?QueryInterface@FxFileObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0076DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxFileObject::QueryInterface(FxFileObject *this, FxQueryInterfaceParams *Params)
{
  int Type; // edx
  IFxHasCallbacks *v5; // rdx

  Type = Params->Type;
  if ( Type == 4120 )
  {
    *Params->Object = this;
  }
  else
  {
    if ( Type != 5379 )
      return FxObject::QueryInterface(this, Params);
    v5 = 0LL;
    if ( this )
      v5 = &this->IFxHasCallbacks;
    *Params->Object = v5;
  }
  return 0LL;
}
