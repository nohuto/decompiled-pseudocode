/*
 * XREFs of ?PowerCheckParentStateArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0013F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerCheckParentStateArmedForWake(FxPkgPnp *This)
{
  unsigned __int8 parentOn; // [rsp+30h] [rbp+8h] BYREF

  if ( This->PowerCheckParentOverload(This, &parentOn) < 0 )
    return 851LL;
  else
    return parentOn != 0 ? 792 : 809;
}
