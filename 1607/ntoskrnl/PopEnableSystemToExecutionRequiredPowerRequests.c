/*
 * XREFs of PopEnableSystemToExecutionRequiredPowerRequests @ 0x14066AAD8
 * Callers:
 *     PopPowerRequestPowerSourceSettingCallback @ 0x1405817AC (PopPowerRequestPowerSourceSettingCallback.c)
 * Callees:
 *     PopEnablePowerExecutionRequest @ 0x1405011B0 (PopEnablePowerExecutionRequest.c)
 *     PopDisablePowerExecutionRequest @ 0x140503888 (PopDisablePowerExecutionRequest.c)
 */

__int64 __fastcall PopEnableSystemToExecutionRequiredPowerRequests(char a1)
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = PopPowerRequestObjectList; (__int64 *)i != &PopPowerRequestObjectList; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 108) )
    {
      if ( a1 )
        result = PopEnablePowerExecutionRequest(i, 0);
      else
        result = PopDisablePowerExecutionRequest(i, 1, 0);
    }
  }
  return result;
}
