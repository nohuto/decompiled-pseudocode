/*
 * XREFs of PpmCheckReInit @ 0x1405B0AB4
 * Callers:
 *     PopIntSteerSetMode @ 0x140167724 (PopIntSteerSetMode.c)
 *     PpmParkSetLpiCap @ 0x1402427F8 (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x1405AF60C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405AFF04 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PpmCheckArmPeriod @ 0x140167928 (PpmCheckArmPeriod.c)
 *     PopInterruptSteeringEnabled @ 0x1401679BC (PopInterruptSteeringEnabled.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x1405B0BBC (PpmParkUpdateConcurrencyTracking.c)
 *     PpmParkParkingAvailable @ 0x1405B0CC0 (PpmParkParkingAvailable.c)
 *     PpmPerfResetHistoryAll @ 0x1405B1174 (PpmPerfResetHistoryAll.c)
 */

__int64 (__fastcall ***PpmCheckReInit())()
{
  char v0; // bl
  char v1; // di
  __int64 v2; // r8
  __int64 *v3; // rcx
  char v4; // al
  __int64 v5; // rcx
  __int64 (__fastcall ***result)(); // rax

  v0 = 0;
  v1 = 0;
  v2 = 174LL * dword_14032E84C;
  v3 = 0LL;
  if ( PpmPerfStatesRegistered[0] )
  {
    while ( !qword_1403208E8[(unsigned __int16)v3] )
    {
      LOWORD(v3) = (_WORD)v3 + 1;
      if ( (unsigned __int16)v3 >= (unsigned int)PpmPerfStatesRegistered[0] )
        goto LABEL_9;
    }
    v3 = (__int64 *)((char *)&PpmCurrentProfile[v2 + 8] + 4);
    if ( (__int64 *)((char *)&PpmCurrentProfile[v2 + 8] + 2) != v3 )
    {
      v0 = 1;
      v1 = 1;
    }
    v4 = v0;
    if ( PpmCheckPollForFeedback )
      v4 = 1;
    v0 = v4;
    if ( !PopEnergyEstimationDisabled )
      v0 = 1;
  }
LABEL_9:
  if ( (unsigned __int8)PpmParkParkingAvailable(v3, PpmCurrentProfile, v2 * 8) )
  {
    v0 = 1;
    v1 = 1;
  }
  if ( PopInterruptSteeringEnabled() )
    v0 = 1;
  if ( v0 && !PpmCheckArmed )
    PpmPerfResetHistoryAll();
  LOBYTE(v5) = v1;
  PpmParkUpdateConcurrencyTracking(v5);
  if ( v0 )
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
    if ( v1 )
    {
      result = PpmCheckHeterogeneousPipelines;
      PpmCheckPipelines = (__int64)PpmCheckHeterogeneousPipelines;
    }
  }
  return result;
}
