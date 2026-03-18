/*
 * XREFs of PopDiagTraceAppPowerMessageEnd @ 0x140568EC0
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceAppPowerMessageEnd(int *a1)
{
  REGHANDLE v2; // rbx
  int v3; // eax
  int v4; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SUSPENDAPP_END) )
    {
      v3 = *a1;
      UserData.Reserved = 0;
      v4 = v3;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v4;
      EtwWrite(v2, &POP_ETW_EVENT_SUSPENDAPP_END, 0LL, 1u, &UserData);
    }
  }
}
