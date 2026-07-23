/*
 * XREFs of PopEnableExecutionRequiredPowerRequests @ 0x14057F7D8
 * Callers:
 *     PopExecutionRequiredSettingCallback @ 0x14057F74C (PopExecutionRequiredSettingCallback.c)
 *     PopCheckExecutionRequiredPowerRequests @ 0x14066A94C (PopCheckExecutionRequiredPowerRequests.c)
 *     PopCsStateChanged @ 0x14066AA48 (PopCsStateChanged.c)
 * Callees:
 *     PopEnablePowerExecutionRequest @ 0x1405011B0 (PopEnablePowerExecutionRequest.c)
 *     PopDisablePowerExecutionRequest @ 0x140503888 (PopDisablePowerExecutionRequest.c)
 */

__int64 __fastcall PopEnableExecutionRequiredPowerRequests(char a1)
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = PopPowerRequestObjectList; (__int64 *)i != &PopPowerRequestObjectList; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 44) || *(_DWORD *)(i + 108) )
    {
      if ( a1 )
        result = PopEnablePowerExecutionRequest(i, 1);
      else
        result = PopDisablePowerExecutionRequest(i, 0, 0);
    }
  }
  return result;
}
