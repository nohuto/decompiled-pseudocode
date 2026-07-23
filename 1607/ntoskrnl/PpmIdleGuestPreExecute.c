/*
 * XREFs of PpmIdleGuestPreExecute @ 0x14020D5EC
 * Callers:
 *     <none>
 * Callees:
 *     HvlSetPlatformIdleState @ 0x1401BF3EC (HvlSetPlatformIdleState.c)
 */

__int64 __fastcall PpmIdleGuestPreExecute(__int64 a1, __int64 a2, int a3)
{
  int v4; // ebx

  if ( a3 == -1 )
  {
    return 0;
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(PpmPlatformStates + 24))(a1);
    if ( v4 >= 0 && KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorHvCounters && a3 == PpmDripsStateIndex )
      HvlSetPlatformIdleState();
  }
  return (unsigned int)v4;
}
