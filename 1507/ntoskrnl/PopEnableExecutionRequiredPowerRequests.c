/*
 * XREFs of PopEnableExecutionRequiredPowerRequests @ 0x1405C0FA4
 * Callers:
 *     PopExecutionRequiredSettingCallback @ 0x1405C0E88 (PopExecutionRequiredSettingCallback.c)
 *     PopCheckExecutionRequiredPowerRequests @ 0x1406B0A3C (PopCheckExecutionRequiredPowerRequests.c)
 *     PopCsStateChanged @ 0x1406B0B3C (PopCsStateChanged.c)
 * Callees:
 *     PopDisablePowerExecutionRequest @ 0x1404E61DC (PopDisablePowerExecutionRequest.c)
 *     PopEnablePowerExecutionRequest @ 0x140556B0C (PopEnablePowerExecutionRequest.c)
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
