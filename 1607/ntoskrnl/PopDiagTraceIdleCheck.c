/*
 * XREFs of PopDiagTraceIdleCheck @ 0x1400085E0
 * Callers:
 *     PopCheckForIdleness @ 0x1400086B0 (PopCheckForIdleness.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceIdleCheck(__int64 a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v4; // rbx
  int v6; // [rsp+38h] [rbp-49h] BYREF
  int v7; // [rsp+40h] [rbp-41h] BYREF
  BOOL v8; // [rsp+44h] [rbp-3Dh] BYREF
  BOOL v9; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-29h] BYREF
  int *v11; // [rsp+68h] [rbp-19h]
  int v12; // [rsp+70h] [rbp-11h]
  int v13; // [rsp+74h] [rbp-Dh]
  int *v14; // [rsp+78h] [rbp-9h]
  int v15; // [rsp+80h] [rbp-1h]
  int v16; // [rsp+84h] [rbp+3h]
  int *v17; // [rsp+88h] [rbp+7h]
  int v18; // [rsp+90h] [rbp+Fh]
  int v19; // [rsp+94h] [rbp+13h]
  int *v20; // [rsp+98h] [rbp+17h]
  int v21; // [rsp+A0h] [rbp+1Fh]
  int v22; // [rsp+A4h] [rbp+23h]
  BOOL *v23; // [rsp+A8h] [rbp+27h]
  int v24; // [rsp+B0h] [rbp+2Fh]
  int v25; // [rsp+B4h] [rbp+33h]
  BOOL *v26; // [rsp+B8h] [rbp+37h]
  int v27; // [rsp+C0h] [rbp+3Fh]
  int v28; // [rsp+C4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF
  int v30; // [rsp+F0h] [rbp+6Fh] BYREF
  int v31; // [rsp+F8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v31 = a3;
  v30 = a2;
  v6 = 0;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IDLE_CHECK);
    if ( (_BYTE)v3 )
    {
      v7 = 0;
      v8 = dword_1403032C8 >= (unsigned int)dword_1403032CC;
      UserData.Size = 4;
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v9 = dword_1402F26B0 != 0;
      UserData.Ptr = (ULONGLONG)&v6;
      v11 = &v30;
      v14 = &v31;
      v17 = &dword_1403032C8;
      v20 = &v7;
      v23 = &v8;
      v26 = &v9;
      v12 = 4;
      v15 = 4;
      v18 = 4;
      v21 = 4;
      v24 = 4;
      v27 = 4;
      LOBYTE(v3) = EtwWrite(v4, &POP_ETW_EVENT_IDLE_CHECK, 0LL, 7u, &UserData);
    }
  }
  return (char)v3;
}
