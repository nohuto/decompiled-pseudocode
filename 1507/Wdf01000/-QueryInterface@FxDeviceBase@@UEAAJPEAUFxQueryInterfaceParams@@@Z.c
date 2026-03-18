/*
 * XREFs of ?QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0007920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall FxDeviceBase::QueryInterface(FxDeviceBase *this, FxQueryInterfaceParams *Params)
{
  int Type; // edx
  IFxHasCallbacks *v5; // rdx

  Type = Params->Type;
  if ( Type == 5379 )
  {
    v5 = 0LL;
    if ( this )
      v5 = &this->IFxHasCallbacks;
    *Params->Object = v5;
  }
  else
  {
    if ( Type != 4144 )
      return FxObject::QueryInterface(this, Params);
    *Params->Object = this;
  }
  return 0;
}
