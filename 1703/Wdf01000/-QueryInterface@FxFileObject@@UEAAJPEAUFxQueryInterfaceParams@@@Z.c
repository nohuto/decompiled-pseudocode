/*
 * XREFs of ?QueryInterface@FxFileObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C007DEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxFileObject::QueryInterface(FxFileObject *this, FxQueryInterfaceParams *Params)
{
  int Type; // eax

  Type = Params->Type;
  if ( Type == 4120 )
    goto LABEL_4;
  if ( Type == 5379 )
  {
    this = (FxFileObject *)((unsigned __int64)&this->IFxHasCallbacks & -(__int64)(this != 0LL));
LABEL_4:
    *Params->Object = this;
    return 0LL;
  }
  return FxObject::QueryInterface(this, Params);
}
