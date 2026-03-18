/*
 * XREFs of ?QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0011BA0
 * Callers:
 *     ?QueryInterface@FxMemoryBufferPreallocated@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0012280 (-QueryInterface@FxMemoryBufferPreallocated@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C001CCA0 (-QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

int __fastcall FxMemoryObject::QueryInterface(FxMemoryObject *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4106 )
    return FxObject::QueryInterface(this, Params);
  if ( this )
    this = (FxMemoryObject *)((char *)this + 104);
  *Params->Object = this;
  return 0;
}
