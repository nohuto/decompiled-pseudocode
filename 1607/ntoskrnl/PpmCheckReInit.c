/*
 * XREFs of PpmCheckReInit @ 0x14056A1B4
 * Callers:
 *     PopIntSteerSetMode @ 0x140143630 (PopIntSteerSetMode.c)
 *     PpmParkSetLpiCap @ 0x14020E108 (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x140569588 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140569DD0 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140569F90 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1400D4810 (KeIsEmptyAffinityEx.c)
 *     PpmCheckArmPeriod @ 0x140143DC4 (PpmCheckArmPeriod.c)
 *     PopInterruptSteeringEnabled @ 0x140143E58 (PopInterruptSteeringEnabled.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x14056A2D8 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmParkParkingAvailable @ 0x14056A3DC (PpmParkParkingAvailable.c)
 *     PpmPerfResetHistoryAll @ 0x14056AC20 (PpmPerfResetHistoryAll.c)
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
  v2 = 174LL * dword_140303E0C;
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
