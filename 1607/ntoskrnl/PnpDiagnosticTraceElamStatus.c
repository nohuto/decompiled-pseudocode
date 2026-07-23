/*
 * XREFs of PnpDiagnosticTraceElamStatus @ 0x14013C770
 * Callers:
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x14079AAB4 (PnpNotifyEarlyLaunchStatusUpdate.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDiagnosticTraceElamStatus(PCEVENT_DESCRIPTOR EventDescriptor, int a2)
{
  REGHANDLE v2; // rdi
  unsigned int v3; // ebx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+68h] [rbp+10h] BYREF

  v7 = a2;
  v2 = PnpEtwHandle;
  v3 = 0;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v7;
    return (unsigned int)EtwWrite(v2, EventDescriptor, 0LL, 1u, &UserData);
  }
  return v3;
}
