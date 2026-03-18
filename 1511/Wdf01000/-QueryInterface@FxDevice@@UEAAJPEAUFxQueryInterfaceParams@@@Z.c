/*
 * XREFs of ?QueryInterface@FxDevice@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0002B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevice::QueryInterface(FxDevice *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Type; // ax
  __int64 result; // rax
  IFxHasCallbacks *v4; // r8

  Type = Params->Type;
  switch ( Type )
  {
    case 0x1002u:
      *Params->Object = this;
      return 0LL;
    case 0x1030u:
LABEL_5:
      *Params->Object = this;
      return 0LL;
    case 0x1503u:
      result = 0LL;
      if ( this )
        v4 = &this->IFxHasCallbacks;
      else
        v4 = 0LL;
      *Params->Object = v4;
      break;
    case 0x1000u:
      goto LABEL_5;
    default:
      return 3221226169LL;
  }
  return result;
}
