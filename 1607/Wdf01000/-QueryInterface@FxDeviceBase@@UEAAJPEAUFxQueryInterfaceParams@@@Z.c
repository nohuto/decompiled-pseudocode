/*
 * XREFs of ?QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0062DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDeviceBase::QueryInterface(FxDeviceBase *this, FxQueryInterfaceParams *Params)
{
  int Type; // edx
  IFxHasCallbacks *v5; // rdx

  Type = Params->Type;
  if ( Type == 4144 )
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
