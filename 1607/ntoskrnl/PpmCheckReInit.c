/*
 * XREFs of PpmCheckReInit @ 0x14056A6F4
 * Callers:
 *     PopIntSteerSetMode @ 0x140143BA0 (PopIntSteerSetMode.c)
 *     PpmParkSetLpiCap @ 0x14020DF34 (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14056A310 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14056A4D0 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     PpmCheckArmPeriod @ 0x140144334 (PpmCheckArmPeriod.c)
 *     PopInterruptSteeringEnabled @ 0x1401443C8 (PopInterruptSteeringEnabled.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x14056A818 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmParkParkingAvailable @ 0x14056A91C (PpmParkParkingAvailable.c)
 *     PpmPerfResetHistoryAll @ 0x14056B160 (PpmPerfResetHistoryAll.c)
 */

__int64 (__fastcall ***PpmCheckReInit())()
{
  __int64 *v0; // rsi
  char v1; // bl
  __int64 v2; // rbp
  char v3; // di
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  char v6; // al
  __int64 v7; // rcx
  __int64 (__fastcall ***result)(); // rax

  v0 = PpmCurrentProfile;
  v1 = 0;
  v2 = 174LL * dword_140303D4C;
  v3 = 0;
  if ( !(unsigned int)KeIsEmptyAffinityEx(PpmPerfStatesRegistered) )
  {
    v4 = (char *)&v0[v2 + 8] + 2;
    v5 = 2LL;
    do
    {
      if ( *v4 != v4[2] )
      {
        v1 = 1;
        v3 = 1;
      }
      ++v4;
      --v5;
    }
    while ( v5 );
    v6 = v1;
    if ( PpmCheckPollForFeedback )
      v6 = 1;
    v1 = v6;
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
  LOBYTE(v7) = v3;
  PpmParkUpdateConcurrencyTracking(v7);
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
