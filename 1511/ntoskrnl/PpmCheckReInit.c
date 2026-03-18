/*
 * XREFs of PpmCheckReInit @ 0x140537328
 * Callers:
 *     PopIntSteerSetMode @ 0x140138C14 (PopIntSteerSetMode.c)
 *     PpmParkSetLpiCap @ 0x1401F4644 (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140537218 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140077130 (KeIsEmptyAffinityEx.c)
 *     PpmCheckArmPeriod @ 0x1401393B0 (PpmCheckArmPeriod.c)
 *     PopInterruptSteeringEnabled @ 0x140139444 (PopInterruptSteeringEnabled.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x140537424 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmParkParkingAvailable @ 0x140537528 (PpmParkParkingAvailable.c)
 *     PpmPerfResetHistoryAll @ 0x140537958 (PpmPerfResetHistoryAll.c)
 */

__int64 (__fastcall ***PpmCheckReInit())()
{
  __int64 *v0; // rsi
  char v1; // bl
  __int64 v2; // rbp
  char v3; // di
  char v4; // al
  __int64 v5; // rcx
  __int64 (__fastcall ***result)(); // rax

  v0 = PpmCurrentProfile;
  v1 = 0;
  v2 = 174LL * dword_1402DE28C;
  v3 = 0;
  if ( !(unsigned int)KeIsEmptyAffinityEx(PpmPerfStatesRegistered) )
  {
    if ( (char *)&v0[v2 + 8] + 2 != (char *)&v0[v2 + 8] + 4 )
    {
      v1 = 1;
      v3 = 1;
    }
    v4 = v1;
    if ( PpmCheckPollForFeedback )
      v4 = 1;
    v1 = v4;
    if ( !PopEnergyEstimationDisabled )
      v1 = 1;
  }
  if ( (unsigned __int8)PpmParkParkingAvailable() )
  {
    v1 = 1;
    v3 = 1;
  }
  if ( PopInterruptSteeringEnabled() )
    v1 = 1;
  if ( v1 && !PpmCheckArmed )
    PpmPerfResetHistoryAll();
  LOBYTE(v5) = v3;
  PpmParkUpdateConcurrencyTracking(v5);
  if ( v1 )
  {
    PpmCheckArmPeriod();
  }
  else if ( PpmCheckArmed )
  {
    _InterlockedExchange64(&PpmCheckLastExecutionTime, 0LL);
    PpmCheckArmed = 0;
  }
  result = PpmCheckHomogeneousPipelines;
  PpmCheckPipelines = (__int64)PpmCheckHomogeneousPipelines;
  if ( PpmHeteroPolicy )
  {
    if ( v3 )
    {
      result = PpmCheckHeterogeneousPipelines;
      PpmCheckPipelines = (__int64)PpmCheckHeterogeneousPipelines;
    }
  }
  return result;
}
