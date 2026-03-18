/*
 * XREFs of PopDiagTraceSystemLatencyUpdate @ 0x1400ED4D4
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1400ED21C (PoFxSendSystemLatencyUpdate.c)
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSystemLatencyUpdate(char a1, int a2)
{
  REGHANDLE v3; // rbx
  const EVENT_DESCRIPTOR *v4; // rdx
  const EVENT_DESCRIPTOR *v5; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+68h] [rbp+10h] BYREF

  v7 = a2;
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    v4 = &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE;
    if ( a1 )
      v4 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_SYSTEM_LATENCY_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      v5 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_SYSTEM_LATENCY_RUNDOWN;
      UserData.Size = 4;
      if ( !a1 )
        v5 = &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE;
      EtwWrite(v3, v5, 0LL, 1u, &UserData);
    }
  }
}
