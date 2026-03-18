/*
 * XREFs of PopEnableExecutionRequiredPowerRequests @ 0x14054A65C
 * Callers:
 *     PopExecutionRequiredSettingCallback @ 0x14054A5D0 (PopExecutionRequiredSettingCallback.c)
 *     PopCheckExecutionRequiredPowerRequests @ 0x140632414 (PopCheckExecutionRequiredPowerRequests.c)
 *     PopCsStateChanged @ 0x140632510 (PopCsStateChanged.c)
 * Callees:
 *     PopDisablePowerExecutionRequest @ 0x140455D84 (PopDisablePowerExecutionRequest.c)
 *     PopEnablePowerExecutionRequest @ 0x1404CFD58 (PopEnablePowerExecutionRequest.c)
 */

__int64 __fastcall PopEnableExecutionRequiredPowerRequests(char a1)
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = PopPowerRequestObjectList; (__int64 *)i != &PopPowerRequestObjectList; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 44) )
    {
      if ( a1 )
        result = PopEnablePowerExecutionRequest(i);
      else
        result = PopDisablePowerExecutionRequest(i, 0);
    }
  }
  return result;
}
