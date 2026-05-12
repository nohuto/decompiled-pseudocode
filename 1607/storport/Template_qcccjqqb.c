/*
 * XREFs of Template_qcccjqqb @ 0x1C0042144
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00408B4 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccjqqb(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  int v12; // [rsp+30h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-71h] BYREF
  char *v14; // [rsp+50h] [rbp-61h]
  __int64 v15; // [rsp+58h] [rbp-59h]
  char *v16; // [rsp+60h] [rbp-51h]
  __int64 v17; // [rsp+68h] [rbp-49h]
  char *v18; // [rsp+70h] [rbp-41h]
  __int64 v19; // [rsp+78h] [rbp-39h]
  __int64 v20; // [rsp+80h] [rbp-31h]
  __int64 v21; // [rsp+88h] [rbp-29h]
  char *v22; // [rsp+90h] [rbp-21h]
  __int64 v23; // [rsp+98h] [rbp-19h]
  int *v24; // [rsp+A0h] [rbp-11h]
  __int64 v25; // [rsp+A8h] [rbp-9h]
  __int64 v26; // [rsp+B0h] [rbp-1h]
  __int64 v27; // [rsp+B8h] [rbp+7h]
  int v28; // [rsp+F8h] [rbp+47h] BYREF

  v28 = a4;
  UserData.Ptr = (unsigned __int64)&v28;
  *(_QWORD *)&UserData.Size = 4LL;
  v12 = 216;
  v14 = &a5;
  v15 = 1LL;
  v16 = &a6;
  v17 = 1LL;
  v18 = &a7;
  v20 = a8;
  v22 = &a9;
  v24 = &v12;
  v26 = a11;
  v19 = 1LL;
  v21 = 16LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 216LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitPeriodicNvmeHealthStatistics, 0LL, 8u, &UserData);
}
