/*
 * XREFs of ?PowerCheckParentStateNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00864F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerCheckParentStateNP(FxPkgPnp *This)
{
  unsigned __int8 parentOn; // [rsp+30h] [rbp+8h] BYREF

  if ( This->PowerCheckParentOverload(This, &parentOn) >= 0 )
    return parentOn != 0 ? 33588 : 33584;
  else
    return 33623LL;
}
