/*
 * XREFs of PopDiagTracePreSleepNotification @ 0x140534A60
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

int __fastcall PopDiagTracePreSleepNotification(int a1, int a2, int a3, int a4, char a5)
{
  _UNKNOWN **v5; // rax
  int v7; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  int *v9; // [rsp+58h] [rbp-1h]
  __int64 v10; // [rsp+60h] [rbp+7h]
  int *v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  int *v13; // [rsp+78h] [rbp+1Fh]
  __int64 v14; // [rsp+80h] [rbp+27h]
  char *v15; // [rsp+88h] [rbp+2Fh]
  __int64 v16; // [rsp+90h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  int v18; // [rsp+B8h] [rbp+5Fh] BYREF
  int v19; // [rsp+C0h] [rbp+67h] BYREF
  int v20; // [rsp+D0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v20 = a4;
  v19 = a2;
  v18 = a1;
  if ( PopDiagHandleRegistered )
  {
    UserData.Ptr = (ULONGLONG)&v18;
    v7 = a3;
    v9 = &v19;
    *(_QWORD *)&UserData.Size = 4LL;
    v11 = &v7;
    v10 = 4LL;
    v13 = &v20;
    v15 = &a5;
    v12 = 4LL;
    v14 = 4LL;
    v16 = 4LL;
    LODWORD(v5) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PRESLEEP_NOTIFICATION3, 0LL, 5u, &UserData);
  }
  return (int)v5;
}
