/*
 * XREFs of PopDiagTracePreSleepNotification @ 0x1404F72B0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

int __fastcall PopDiagTracePreSleepNotification(int a1, int a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  int v6; // [rsp+38h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *v8; // [rsp+58h] [rbp+17h]
  __int64 v9; // [rsp+60h] [rbp+1Fh]
  int *v10; // [rsp+68h] [rbp+27h]
  __int64 v11; // [rsp+70h] [rbp+2Fh]
  int *v12; // [rsp+78h] [rbp+37h]
  __int64 v13; // [rsp+80h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  int v15; // [rsp+A8h] [rbp+67h] BYREF
  int v16; // [rsp+B0h] [rbp+6Fh] BYREF
  int v17; // [rsp+C0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v17 = a4;
  v16 = a2;
  v15 = a1;
  if ( PopDiagHandleRegistered )
  {
    v6 = a3;
    UserData.Ptr = (ULONGLONG)&v15;
    *(_QWORD *)&UserData.Size = 4LL;
    v8 = &v16;
    v9 = 4LL;
    v10 = &v6;
    v12 = &v17;
    v11 = 4LL;
    v13 = 4LL;
    LODWORD(v4) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PRESLEEP_NOTIFICATION2, 0LL, 4u, &UserData);
  }
  return (int)v4;
}
