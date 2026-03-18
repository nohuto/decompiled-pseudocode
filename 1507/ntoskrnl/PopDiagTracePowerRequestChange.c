/*
 * XREFs of PopDiagTracePowerRequestChange @ 0x1400D1E04
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1400D1B8C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400D1CD0 (PoSetPowerRequestInternal.c)
 *     PopSetSpecialRequest @ 0x140409CAC (PopSetSpecialRequest.c)
 *     PopClearSpecialRequest @ 0x14040A1E8 (PopClearSpecialRequest.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTracePowerRequestChange(__int64 a1)
{
  _UNKNOWN **v1; // rax
  REGHANDLE v3; // rdi
  int v5; // [rsp+38h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  __int64 v7; // [rsp+58h] [rbp-19h]
  int v8; // [rsp+60h] [rbp-11h]
  int v9; // [rsp+64h] [rbp-Dh]
  __int64 v10; // [rsp+68h] [rbp-9h]
  int v11; // [rsp+70h] [rbp-1h]
  int v12; // [rsp+74h] [rbp+3h]
  __int64 v13; // [rsp+78h] [rbp+7h]
  int v14; // [rsp+80h] [rbp+Fh]
  int v15; // [rsp+84h] [rbp+13h]
  __int64 v16; // [rsp+88h] [rbp+17h]
  int v17; // [rsp+90h] [rbp+1Fh]
  int v18; // [rsp+94h] [rbp+23h]
  __int64 v19; // [rsp+98h] [rbp+27h]
  int v20; // [rsp+A0h] [rbp+2Fh]
  int v21; // [rsp+A4h] [rbp+33h]
  int *v22; // [rsp+A8h] [rbp+37h]
  int v23; // [rsp+B0h] [rbp+3Fh]
  int v24; // [rsp+B4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v26; // [rsp+D8h] [rbp+67h] BYREF

  v1 = &retaddr;
  v26 = a1;
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CHANGE_POWER_REQUEST);
    if ( (_BYTE)v1 )
    {
      v5 = 0;
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      UserData.Ptr = (ULONGLONG)&v26;
      v7 = a1 + 36;
      v10 = a1 + 32;
      v13 = a1 + 40;
      v16 = a1 + 44;
      v19 = a1 + 48;
      v22 = &v5;
      v8 = 4;
      v11 = 4;
      v14 = 4;
      v17 = 4;
      v20 = 4;
      v23 = 4;
      UserData.Size = 8;
      LOBYTE(v1) = EtwWrite(v3, &POP_ETW_EVENT_CHANGE_POWER_REQUEST, 0LL, 7u, &UserData);
    }
  }
  return (char)v1;
}
