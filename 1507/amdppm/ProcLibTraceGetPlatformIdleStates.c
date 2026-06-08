/*
 * XREFs of ProcLibTraceGetPlatformIdleStates @ 0x1C001405C
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00130D0 (ProcLibTraceControlCallback.c)
 *     InitPep @ 0x1C001C3EC (InitPep.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTraceGetPlatformIdleStates(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  v1 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_PLATFORM_IDLE_STATES;
  if ( a1 )
    v1 = &PPM_ETW_GET_PLATFORM_IDLE_STATES_RUNDOWN;
  result = EtwEventEnabled(ProcLibEtwHandle, v1);
  if ( result )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (unsigned __int64)&dword_1C0009868;
    UserData.Size = 4;
    return EtwWrite(ProcLibEtwHandle, v1, 0LL, 1u, &UserData);
  }
  return result;
}
