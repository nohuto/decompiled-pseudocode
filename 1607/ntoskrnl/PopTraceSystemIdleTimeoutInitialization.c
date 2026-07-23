/*
 * XREFs of PopTraceSystemIdleTimeoutInitialization @ 0x1405451C4
 * Callers:
 *     PopInitSIdle @ 0x140545034 (PopInitSIdle.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopTraceSystemIdleTimeoutInitialization(unsigned __int8 a1, int a2, int a3, int a4, char a5, char a6)
{
  _UNKNOWN **v6; // rax
  REGHANDLE v8; // rbx
  int v10; // [rsp+38h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-39h] BYREF
  int *v12; // [rsp+58h] [rbp-29h]
  int v13; // [rsp+60h] [rbp-21h]
  int v14; // [rsp+64h] [rbp-1Dh]
  int *v15; // [rsp+68h] [rbp-19h]
  int v16; // [rsp+70h] [rbp-11h]
  int v17; // [rsp+74h] [rbp-Dh]
  int *v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+84h] [rbp+3h]
  char *v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+94h] [rbp+13h]
  char *v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+A0h] [rbp+1Fh]
  int v26; // [rsp+A4h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+4Fh] BYREF
  int v28; // [rsp+E0h] [rbp+5Fh] BYREF
  int v29; // [rsp+E8h] [rbp+67h] BYREF
  int v30; // [rsp+F0h] [rbp+6Fh] BYREF

  v6 = &retaddr;
  v30 = a4;
  v29 = a3;
  v28 = a2;
  if ( PopDiagHandleRegistered )
  {
    v8 = PopDiagHandle;
    LOBYTE(v6) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_TIMEOUT_INITIALIZED);
    if ( (_BYTE)v6 )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v10 = a1;
      UserData.Ptr = (ULONGLONG)&v10;
      v12 = &v28;
      v15 = &v29;
      v18 = &v30;
      v21 = &a5;
      v24 = &a6;
      UserData.Size = 4;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      LOBYTE(v6) = EtwWrite(v8, &POP_ETW_EVENT_SYSTEM_IDLE_TIMEOUT_INITIALIZED, 0LL, 6u, &UserData);
    }
  }
  return (char)v6;
}
