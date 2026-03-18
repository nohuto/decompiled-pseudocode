/*
 * XREFs of ?QueryInterface@FxIoQueue@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0096690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxIoQueue::QueryInterface(FxIoQueue *this, FxQueryInterfaceParams *Params)
{
  int Type; // edx
  IFxHasCallbacks *v5; // rdx

  Type = Params->Type;
  if ( Type == 4099 )
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
