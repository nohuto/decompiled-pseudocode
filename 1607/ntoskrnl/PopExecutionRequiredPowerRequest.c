/*
 * XREFs of PopExecutionRequiredPowerRequest @ 0x1405039D8
 * Callers:
 *     PopSystemRequiredCallback @ 0x140503728 (PopSystemRequiredCallback.c)
 *     PopExecutionRequiredCallback @ 0x140503988 (PopExecutionRequiredCallback.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400C19B0 (RtlLookupElementGenericTableAvl.c)
 *     PopEnablePowerExecutionRequest @ 0x1405011B0 (PopEnablePowerExecutionRequest.c)
 */

__int64 *__fastcall PopExecutionRequiredPowerRequest(char a1, int a2)
{
  __int64 *result; // rax
  __int64 v4; // rcx
  _BYTE Buffer[8]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v6 = a2;
  result = (__int64 *)RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
  if ( result )
  {
    v4 = *result;
    if ( a1 )
      return (__int64 *)PopEnablePowerExecutionRequest(v4, 1);
    else
      return (__int64 *)PopDisablePowerExecutionRequest(v4, 1, 1);
  }
  return result;
}
