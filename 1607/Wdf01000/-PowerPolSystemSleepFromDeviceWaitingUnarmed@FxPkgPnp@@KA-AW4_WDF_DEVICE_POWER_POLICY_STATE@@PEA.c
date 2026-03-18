/*
 * XREFs of ?PowerPolSystemSleepFromDeviceWaitingUnarmed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00126F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C0012E60 (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemSleepFromDeviceWaitingUnarmed(FxPkgPnp *This)
{
  __int64 v1; // r9
  __int64 result; // rax

  if ( !FxPkgPnp::PowerPolicyIsWakeEnabled(This) )
    return 1324LL;
  result = 1293LL;
  if ( ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1224) + 184LL) + 8LL) >> 8) & 0xF) > *(unsigned __int8 *)(v1 + 1009) )
    return 1324LL;
  return result;
}
