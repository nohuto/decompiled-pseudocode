/*
 * XREFs of Template_qcccqccccccqxq @ 0x1C00394D4
 * Callers:
 *     StorpTelemetrySendUnitErrorData @ 0x1C0038584 (StorpTelemetrySendUnitErrorData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccqccccccqxq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  char *v19; // [rsp+40h] [rbp-C0h]
  __int64 v20; // [rsp+48h] [rbp-B8h]
  char *v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  char *v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  char *v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  char *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  char *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  char *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  char *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  char *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  char *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  char *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  char *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  char *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  int v45; // [rsp+148h] [rbp+48h] BYREF

  v45 = a4;
  UserData.Ptr = (unsigned __int64)&v45;
  *(_QWORD *)&UserData.Size = 4LL;
  v19 = &a5;
  v20 = 1LL;
  v21 = &a6;
  v22 = 1LL;
  v23 = &a7;
  v25 = &a8;
  v27 = &a9;
  v29 = &a10;
  v31 = &a11;
  v33 = &a12;
  v35 = &a13;
  v37 = &a14;
  v39 = &a15;
  v41 = &a16;
  v43 = &a17;
  v24 = 1LL;
  v26 = 4LL;
  v28 = 1LL;
  v30 = 1LL;
  v32 = 1LL;
  v34 = 1LL;
  v36 = 1LL;
  v38 = 1LL;
  v40 = 4LL;
  v42 = 8LL;
  v44 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitPeriodicUniqueError, 0LL, 0xEu, &UserData);
}
