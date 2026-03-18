/*
 * XREFs of ?PnpEventFdoRemovedOverload@FxPkgFdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C008A830
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C0085560 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgFdo::PnpEventFdoRemovedOverload(
        FxPkgFdo *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  FxPkgPnp::PnpEventRemovedCommonCode(this, a2, a3, a4);
  return 309LL;
}
