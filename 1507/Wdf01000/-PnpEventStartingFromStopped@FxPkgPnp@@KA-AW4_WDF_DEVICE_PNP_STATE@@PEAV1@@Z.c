/*
 * XREFs of ?PnpEventStartingFromStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C009A9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z @ 0x1C001A730 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventStartingFromStopped(FxPkgPnp *This)
{
  unsigned __int8 matched; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)FxPkgPnp::PnpPrepareHardware(This, &matched) >= 0 )
    return 280LL;
  else
    return 299 - (unsigned int)(matched != 0);
}
