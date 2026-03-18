/*
 * XREFs of Template_phczc @ 0x1C001F6E0
 * Callers:
 *     HUBDTX_LogAlternateMode @ 0x1C0022A40 (HUBDTX_LogAlternateMode.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 */

NTSTATUS Template_phczc(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  __int64 v3; // rax
  int v4; // ecx
  const wchar_t *v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  va_list v8; // [rsp+40h] [rbp-19h]
  __int64 v9; // [rsp+48h] [rbp-11h]
  va_list v10; // [rsp+50h] [rbp-9h]
  __int64 v11; // [rsp+58h] [rbp-1h]
  const wchar_t *v12; // [rsp+60h] [rbp+7h]
  int v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+6Ch] [rbp+13h]
  va_list v15; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  __int64 v17; // [rsp+B8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+B8h] [rbp+5Fh]
  __int64 v19; // [rsp+C0h] [rbp+67h] BYREF
  va_list va1; // [rsp+C0h] [rbp+67h]
  __int64 v21; // [rsp+C8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+C8h] [rbp+6Fh]
  const wchar_t *v23; // [rsp+D0h] [rbp+77h]
  va_list va3; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v21 = va_arg(va3, _QWORD);
  v23 = va_arg(va3, const wchar_t *);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v8, va1);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v10, va2);
  v9 = 2LL;
  v11 = 1LL;
  if ( v23 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v23[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10;
  }
  v13 = v4;
  v14 = 0;
  v5 = L"NULL";
  if ( v23 )
    v5 = v23;
  v16 = 1LL;
  v12 = v5;
  va_copy(v15, va3);
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, a2, a3, 5u, &UserData);
}
