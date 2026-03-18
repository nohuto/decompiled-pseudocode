/*
 * XREFs of ?QueryForPowerThread@FxPkgPdo@@EEAAJXZ @ 0x1C00925F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall FxPkgPdo::QueryForPowerThread(FxPkgPdo *this)
{
  return FxPkgPnp::CreatePowerThread(this);
}
