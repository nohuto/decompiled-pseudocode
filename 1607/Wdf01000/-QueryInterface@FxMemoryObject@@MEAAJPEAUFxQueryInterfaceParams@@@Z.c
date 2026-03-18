/*
 * XREFs of ?QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C000E6F0
 * Callers:
 *     ?QueryInterface@FxMemoryBufferPreallocated@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0011F40 (-QueryInterface@FxMemoryBufferPreallocated@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall FxMemoryObject::QueryInterface(FxMemoryObject *this, FxQueryInterfaceParams *Params)
{
  IFxMemory *v3; // rcx

  if ( Params->Type != 4106 )
    return FxObject::QueryInterface(this, Params);
  v3 = 0LL;
  if ( this )
    v3 = &this->IFxMemory;
  *Params->Object = v3;
  return 0;
}
