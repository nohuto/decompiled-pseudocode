/*
 * XREFs of Template_pppqqQ6qqqqn @ 0x1C00332B0
 * Callers:
 *     Etw_DeviceCreate @ 0x1C0032984 (Etw_DeviceCreate.c)
 *     Etw_DeviceDelete @ 0x1C0032A1C (Etw_DeviceDelete.c)
 *     Etw_DeviceRundown @ 0x1C0032AB4 (Etw_DeviceRundown.c)
 *     Etw_DeviceUpdate @ 0x1C0032B68 (Etw_DeviceUpdate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 */

NTSTATUS Template_pppqqQ6qqqqn(
        _DWORD a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        char a11,
        char a12,
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-B9h] BYREF
  char *v14; // [rsp+40h] [rbp-A9h]
  __int64 v15; // [rsp+48h] [rbp-A1h]
  char *v16; // [rsp+50h] [rbp-99h]
  __int64 v17; // [rsp+58h] [rbp-91h]
  char *v18; // [rsp+60h] [rbp-89h]
  __int64 v19; // [rsp+68h] [rbp-81h]
  char *v20; // [rsp+70h] [rbp-79h]
  __int64 v21; // [rsp+78h] [rbp-71h]
  __int64 v22; // [rsp+80h] [rbp-69h]
  __int64 v23; // [rsp+88h] [rbp-61h]
  char *v24; // [rsp+90h] [rbp-59h]
  __int64 v25; // [rsp+98h] [rbp-51h]
  char *v26; // [rsp+A0h] [rbp-49h]
  __int64 v27; // [rsp+A8h] [rbp-41h]
  char *v28; // [rsp+B0h] [rbp-39h]
  __int64 v29; // [rsp+B8h] [rbp-31h]
  va_list v30; // [rsp+C0h] [rbp-29h]
  __int64 v31; // [rsp+C8h] [rbp-21h]
  __int64 v32; // [rsp+D0h] [rbp-19h]
  __int64 v33; // [rsp+D8h] [rbp-11h]
  __int64 v34; // [rsp+118h] [rbp+2Fh] BYREF
  __int64 v35; // [rsp+160h] [rbp+77h] BYREF
  va_list va; // [rsp+160h] [rbp+77h]
  __int64 v37; // [rsp+168h] [rbp+7Fh]
  __int64 v38; // [rsp+170h] [rbp+87h]
  va_list va1; // [rsp+178h] [rbp+8Fh] BYREF

  va_start(va1, a12);
  va_start(va, a12);
  v35 = va_arg(va1, _QWORD);
  v37 = va_arg(va1, _QWORD);
  v38 = va_arg(va1, _QWORD);
  v34 = a4;
  UserData.Ptr = (unsigned __int64)&v34;
  *(_QWORD *)&UserData.Size = 8LL;
  v14 = &a5;
  v16 = &a6;
  v18 = &a7;
  v20 = &a8;
  v22 = a9;
  v24 = &a10;
  v26 = &a11;
  v28 = &a12;
  va_copy(v30, va);
  v32 = v38;
  v15 = 8LL;
  v17 = 8LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 24LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 18LL;
  return EtwWrite((REGHANDLE)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink, a2, a3, 0xBu, &UserData);
}
