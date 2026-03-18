/*
 * XREFs of Template_pqqqqqqqqppp @ 0x1C001BEDC
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C00062E4 (VidSchiCreateContextInternal.c)
 *     VidSchTerminateContext @ 0x1C002E1C0 (VidSchTerminateContext.c)
 *     VidSchReportAdapter @ 0x1C0078CD0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00790E0 (VidSchReportDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 */

NTSTATUS Template_pqqqqqqqqppp(
        _DWORD a1,
        const EVENT_DESCRIPTOR *a2,
        _DWORD a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        ...)
{
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  char *v15; // [rsp+50h] [rbp-B0h]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  char *v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-98h]
  char *v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  char *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  char *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  char *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  char *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  char *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  va_list v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  __int64 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  va_list v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  __int64 v37; // [rsp+138h] [rbp+38h] BYREF
  __int64 v38; // [rsp+180h] [rbp+80h] BYREF
  va_list va; // [rsp+180h] [rbp+80h]
  __int64 v40; // [rsp+188h] [rbp+88h]
  va_list va1; // [rsp+190h] [rbp+90h] BYREF

  va_start(va1, a12);
  va_start(va, a12);
  v38 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, _QWORD);
  v37 = a4;
  UserData.Ptr = (ULONGLONG)&v37;
  v13 = 0LL;
  v15 = &a5;
  *(_QWORD *)&UserData.Size = 8LL;
  v17 = &a6;
  v16 = 4LL;
  v19 = &a7;
  v21 = &a8;
  v23 = &a9;
  v25 = &a10;
  v27 = &a11;
  v29 = &a12;
  va_copy(v31, va);
  v33 = &v13;
  va_copy(v35, va1);
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 8LL;
  v34 = 8LL;
  v36 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 0xCu, &UserData);
}
