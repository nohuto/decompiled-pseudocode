/*
 * XREFs of Template_psqzq @ 0x1C0025670
 * Callers:
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x1C001C5B0 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 */

NTSTATUS Template_psqzq(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ecx
  const char *v7; // rax
  int v8; // r8d
  const wchar_t *v9; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-39h] BYREF
  const char *v12; // [rsp+40h] [rbp-29h]
  int v13; // [rsp+48h] [rbp-21h]
  int v14; // [rsp+4Ch] [rbp-1Dh]
  va_list v15; // [rsp+50h] [rbp-19h]
  __int64 v16; // [rsp+58h] [rbp-11h]
  const wchar_t *v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+6Ch] [rbp+3h]
  va_list v20; // [rsp+70h] [rbp+7h]
  __int64 v21; // [rsp+78h] [rbp+Fh]
  __int64 v22; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  const char *v24; // [rsp+D0h] [rbp+67h]
  __int64 v25; // [rsp+D8h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+D8h] [rbp+6Fh]
  const wchar_t *v27; // [rsp+E0h] [rbp+77h]
  va_list va2; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v25 = va_arg(va2, _QWORD);
  v27 = va_arg(va2, const wchar_t *);
  va_copy((va_list)UserData.Ptr, va);
  v4 = -1LL;
  *(_QWORD *)&UserData.Size = 8LL;
  if ( v24 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v24[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5;
  }
  v13 = v6;
  v7 = "NULL";
  if ( v24 )
    v7 = v24;
  v14 = 0;
  v12 = v7;
  va_copy(v15, va1);
  v16 = 4LL;
  if ( v27 )
  {
    do
      ++v4;
    while ( v27[v4] );
    v8 = 2 * v4 + 2;
  }
  else
  {
    v8 = 10;
  }
  v18 = v8;
  v19 = 0;
  v9 = L"NULL";
  if ( v27 )
    v9 = v27;
  v21 = 4LL;
  v17 = v9;
  va_copy(v20, va2);
  return EtwWrite(
           Microsoft_Windows_USB_USBHUB3Handle,
           &USBHUB3_ETW_EVENT_USBENUM_SERIAL_MISMATCH_ON_RENUMERATION,
           a3,
           5u,
           &UserData);
}
