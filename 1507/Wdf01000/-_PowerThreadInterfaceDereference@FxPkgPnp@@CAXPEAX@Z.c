/*
 * XREFs of ?_PowerThreadInterfaceDereference@FxPkgPnp@@CAXPEAX@Z @ 0x1C009EE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::_PowerThreadInterfaceDereference(void *Context)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 300, 0xFFFFFFFF) == 1 )
    KeSetEvent(*((PRKEVENT *)Context + 151), 0, 0);
}
