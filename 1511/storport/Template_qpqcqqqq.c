/*
 * XREFs of Template_qpqcqqqq @ 0x1C0030024
 * Callers:
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0008184 (RaidAdapterSetDevicePowerIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qpqcqqqq(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  int v11; // [rsp+30h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-71h] BYREF
  char *v13; // [rsp+50h] [rbp-61h]
  __int64 v14; // [rsp+58h] [rbp-59h]
  char *v15; // [rsp+60h] [rbp-51h]
  __int64 v16; // [rsp+68h] [rbp-49h]
  char *v17; // [rsp+70h] [rbp-41h]
  __int64 v18; // [rsp+78h] [rbp-39h]
  char *v19; // [rsp+80h] [rbp-31h]
  __int64 v20; // [rsp+88h] [rbp-29h]
  char *v21; // [rsp+90h] [rbp-21h]
  __int64 v22; // [rsp+98h] [rbp-19h]
  char *v23; // [rsp+A0h] [rbp-11h]
  __int64 v24; // [rsp+A8h] [rbp-9h]
  int *v25; // [rsp+B0h] [rbp-1h]
  __int64 v26; // [rsp+B8h] [rbp+7h]
  int v27; // [rsp+F8h] [rbp+47h] BYREF

  v27 = a4;
  UserData.Ptr = (unsigned __int64)&v27;
  *(_QWORD *)&UserData.Size = 4LL;
  v11 = 0;
  v13 = &a5;
  v15 = &a6;
  v17 = &a7;
  v14 = 8LL;
  v19 = &a8;
  v21 = &a9;
  v23 = &a10;
  v25 = &v11;
  v16 = 4LL;
  v18 = 1LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventAdapterPowerRequest, a3, 8u, &UserData);
}
