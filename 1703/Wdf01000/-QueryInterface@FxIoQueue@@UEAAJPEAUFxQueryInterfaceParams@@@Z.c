/*
 * XREFs of ?QueryInterface@FxIoQueue@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0094830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxIoQueue::QueryInterface(FxIoQueue *this, FxQueryInterfaceParams *Params)
{
  int Type; // eax

  Type = Params->Type;
  if ( Type == 4099 )
    goto LABEL_4;
  if ( Type == 5379 )
  {
    this = (FxIoQueue *)((unsigned __int64)&this->IFxHasCallbacks & -(__int64)(this != 0LL));
LABEL_4:
    *Params->Object = this;
    return 0LL;
  }
  return FxObject::QueryInterface(this, Params);
}
