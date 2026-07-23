/*
 * XREFs of PopDiagTraceCsDeepSleepWatchdog @ 0x1402078DC
 * Callers:
 *     PopDeepSleepWatchdogTakeAction @ 0x140675220 (PopDeepSleepWatchdogTakeAction.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsDeepSleepWatchdog(
        int a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        unsigned __int8 a6)
{
  _UNKNOWN **v6; // rax
  REGHANDLE v8; // rbx
  int v10; // [rsp+38h] [rbp-49h] BYREF
  int v11; // [rsp+3Ch] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-39h] BYREF
  int *v13; // [rsp+58h] [rbp-29h]
  int v14; // [rsp+60h] [rbp-21h]
  int v15; // [rsp+64h] [rbp-1Dh]
  int *v16; // [rsp+68h] [rbp-19h]
  int v17; // [rsp+70h] [rbp-11h]
  int v18; // [rsp+74h] [rbp-Dh]
  int *v19; // [rsp+78h] [rbp-9h]
  int v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+84h] [rbp+3h]
  char *v22; // [rsp+88h] [rbp+7h]
  int v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+94h] [rbp+13h]
  int *v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+A0h] [rbp+1Fh]
  int v27; // [rsp+A4h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+4Fh] BYREF
  int v29; // [rsp+D8h] [rbp+57h] BYREF
  int v30; // [rsp+E0h] [rbp+5Fh] BYREF
  int v31; // [rsp+E8h] [rbp+67h] BYREF

  v6 = &retaddr;
  v31 = a3;
  v30 = a2;
  v29 = a1;
  if ( PopDiagHandleRegistered )
  {
    v8 = PopDiagHandle;
    LOBYTE(v6) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DEEP_SLEEP_WATCHDOG);
    if ( (_BYTE)v6 )
    {
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v10 = a4;
      UserData.Ptr = (ULONGLONG)&v29;
      v13 = &v30;
      v16 = &v31;
      v19 = &v10;
      v22 = &a5;
      v11 = a6;
      v25 = &v11;
      UserData.Size = 4;
      v14 = 4;
      v17 = 4;
      v20 = 4;
      v26 = 4;
      v23 = 1;
      LOBYTE(v6) = EtwWrite(v8, &POP_ETW_EVENT_CS_DEEP_SLEEP_WATCHDOG, 0LL, 6u, &UserData);
    }
  }
  return (char)v6;
}
