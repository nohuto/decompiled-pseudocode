/*
 * XREFs of Template_qcccpqcqqqq @ 0x1C0032D98
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000A578 (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccpqcqqqq(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  int v14; // [rsp+30h] [rbp-C9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-B9h] BYREF
  char *v16; // [rsp+50h] [rbp-A9h]
  __int64 v17; // [rsp+58h] [rbp-A1h]
  char *v18; // [rsp+60h] [rbp-99h]
  __int64 v19; // [rsp+68h] [rbp-91h]
  char *v20; // [rsp+70h] [rbp-89h]
  __int64 v21; // [rsp+78h] [rbp-81h]
  char *v22; // [rsp+80h] [rbp-79h]
  __int64 v23; // [rsp+88h] [rbp-71h]
  char *v24; // [rsp+90h] [rbp-69h]
  __int64 v25; // [rsp+98h] [rbp-61h]
  char *v26; // [rsp+A0h] [rbp-59h]
  __int64 v27; // [rsp+A8h] [rbp-51h]
  char *v28; // [rsp+B0h] [rbp-49h]
  __int64 v29; // [rsp+B8h] [rbp-41h]
  char *v30; // [rsp+C0h] [rbp-39h]
  __int64 v31; // [rsp+C8h] [rbp-31h]
  char *v32; // [rsp+D0h] [rbp-29h]
  __int64 v33; // [rsp+D8h] [rbp-21h]
  int *v34; // [rsp+E0h] [rbp-19h]
  __int64 v35; // [rsp+E8h] [rbp-11h]
  int v36; // [rsp+128h] [rbp+2Fh] BYREF

  v36 = a4;
  UserData.Ptr = (unsigned __int64)&v36;
  *(_QWORD *)&UserData.Size = 4LL;
  v14 = 0;
  v16 = &a5;
  v18 = &a6;
  v20 = &a7;
  v17 = 1LL;
  v22 = &a8;
  v24 = &a9;
  v26 = &a10;
  v28 = &a11;
  v30 = &a12;
  v32 = &a13;
  v34 = &v14;
  v19 = 1LL;
  v21 = 1LL;
  v23 = 8LL;
  v25 = 4LL;
  v27 = 1LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitPowerRequest, a3, 0xBu, &UserData);
}
