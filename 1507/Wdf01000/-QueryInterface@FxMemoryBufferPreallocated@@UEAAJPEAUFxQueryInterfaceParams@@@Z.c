/*
 * XREFs of ?QueryInterface@FxMemoryBufferPreallocated@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0077C30
 * Callers:
 *     ?QueryInterface@FxRequestMemory@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C00788D0 (-QueryInterface@FxRequestMemory@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall FxMemoryBufferPreallocated::QueryInterface(
        FxMemoryBufferPreallocated *this,
        FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4130 )
    return FxMemoryObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0;
}
