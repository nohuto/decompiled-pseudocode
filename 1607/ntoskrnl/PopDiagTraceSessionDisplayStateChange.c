/*
 * XREFs of PopDiagTraceSessionDisplayStateChange @ 0x140126714
 * Callers:
 *     PopPowerInformationInternal @ 0x140500704 (PopPowerInformationInternal.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceSessionDisplayStateChange(char a1, int a2, int a3, int a4)
{
  const EVENT_DESCRIPTOR *v4; // rbx
  const EVENT_DESCRIPTOR *v5; // rax
  REGHANDLE v6; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  int *v9; // [rsp+40h] [rbp-30h]
  int v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+4Ch] [rbp-24h]
  int *v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]
  int v15; // [rsp+98h] [rbp+28h] BYREF
  int v16; // [rsp+A0h] [rbp+30h] BYREF
  int v17; // [rsp+A8h] [rbp+38h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v4 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_SESSION_DISPLAY_OFF;
  v5 = &POP_ETW_EVENT_SESSION_DISPLAY_ON;
  if ( !a1 )
    v4 = &POP_ETW_EVENT_SESSION_DISPLAY_ON;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, v4);
    if ( (_BYTE)v5 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      UserData.Ptr = (ULONGLONG)&v15;
      UserData.Size = 4;
      v9 = &v16;
      v10 = 4;
      v12 = &v17;
      v13 = 4;
      LOBYTE(v5) = EtwWrite(v6, v4, 0LL, 3u, &UserData);
    }
  }
  return (char)v5;
}
