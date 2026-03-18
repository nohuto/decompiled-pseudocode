/*
 * XREFs of ?QueryInterface@FxRequestMemory@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C007F4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall FxRequestMemory::QueryInterface(FxRequestMemory *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4146 )
    return FxMemoryBufferPreallocated::QueryInterface(this, Params);
  *Params->Object = this;
  return 0;
}
