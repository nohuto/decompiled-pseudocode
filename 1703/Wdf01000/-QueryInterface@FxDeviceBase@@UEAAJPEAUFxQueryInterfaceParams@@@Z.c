/*
 * XREFs of ?QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C003C6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDeviceBase::QueryInterface(FxDeviceBase *this, FxQueryInterfaceParams *Params)
{
  int Type; // eax

  Type = Params->Type;
  if ( Type == 5379 )
  {
    this = (FxDeviceBase *)((unsigned __int64)&this->IFxHasCallbacks & -(__int64)(this != 0LL));
  }
  else if ( Type != 4144 )
  {
    return FxObject::QueryInterface(this, Params);
  }
  *Params->Object = this;
  return 0LL;
}
