/*
 * XREFs of ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C00953C0
 * Callers:
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C0012CF0 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 *     ?IndicateWakeStatus@FxChildList@@QEAAXJ@Z @ 0x1C006D798 (-IndicateWakeStatus@FxChildList@@QEAAXJ@Z.c)
 *     imp_WdfDeviceIndicateWakeStatus @ 0x1C0074440 (imp_WdfDeviceIndicateWakeStatus.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0092864 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0024450 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z @ 0x1C00955B4 (-PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerIndicateWaitWakeStatus(FxPkgPnp *this, int WaitWakeStatus)
{
  unsigned int v4; // edx

  if ( !FxPkgPnp::PowerMakeWakeRequestNonCancelable(this, WaitWakeStatus) )
    return 0;
  if ( WaitWakeStatus == -1073741536 )
  {
    v4 = 32;
  }
  else
  {
    v4 = 8;
    if ( WaitWakeStatus < 0 )
      v4 = 16;
  }
  FxPkgPnp::PowerProcessEvent(this, v4, 0);
  return 1;
}
