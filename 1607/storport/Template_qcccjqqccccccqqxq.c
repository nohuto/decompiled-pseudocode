/*
 * XREFs of Template_qcccjqqccccccqqxq @ 0x1C0042430
 * Callers:
 *     StorpTelemetrySendUnitErrorData @ 0x1C0040640 (StorpTelemetrySendUnitErrorData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

NTSTATUS Template_qcccjqqccccccqqxq(
        _DWORD a1,
        _DWORD a2,
        _DWORD a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  char *v20; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+48h] [rbp-B8h]
  char *v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  char *v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  char *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  char *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  char *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  char *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  char *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  char *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  char *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  char *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  char *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  va_list v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  va_list v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  int v52; // [rsp+178h] [rbp+78h] BYREF
  __int64 v53; // [rsp+1F0h] [rbp+F0h] BYREF
  va_list va; // [rsp+1F0h] [rbp+F0h]
  va_list va1; // [rsp+1F8h] [rbp+F8h] BYREF

  va_start(va1, a18);
  va_start(va, a18);
  v53 = va_arg(va1, _QWORD);
  v52 = a4;
  UserData.Ptr = (unsigned __int64)&v52;
  *(_QWORD *)&UserData.Size = 4LL;
  v20 = &a5;
  v21 = 1LL;
  v22 = &a6;
  v23 = 1LL;
  v24 = &a7;
  v26 = a8;
  v28 = &a9;
  v30 = &a10;
  v32 = &a11;
  v34 = &a12;
  v36 = &a13;
  v38 = &a14;
  v40 = &a15;
  v42 = &a16;
  v44 = &a17;
  v46 = &a18;
  va_copy(v48, va);
  va_copy(v50, va1);
  v25 = 1LL;
  v27 = 16LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 1LL;
  v35 = 1LL;
  v37 = 1LL;
  v39 = 1LL;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 4LL;
  v47 = 4LL;
  v49 = 8LL;
  v51 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitPeriodicUniqueError, 0LL, 0x11u, &UserData);
}
