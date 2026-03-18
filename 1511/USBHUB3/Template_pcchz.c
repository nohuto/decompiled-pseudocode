/*
 * XREFs of Template_pcchz @ 0x1C001F554
 * Callers:
 *     HUBDTX_LogBillboardEvent @ 0x1C00228F4 (HUBDTX_LogBillboardEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 */

NTSTATUS Template_pcchz(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  __int64 v3; // rax
  int v4; // ecx
  const wchar_t *v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  va_list v8; // [rsp+40h] [rbp-19h]
  __int64 v9; // [rsp+48h] [rbp-11h]
  va_list v10; // [rsp+50h] [rbp-9h]
  __int64 v11; // [rsp+58h] [rbp-1h]
  va_list v12; // [rsp+60h] [rbp+7h]
  __int64 v13; // [rsp+68h] [rbp+Fh]
  const wchar_t *v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+7Ch] [rbp+23h]
  __int64 v17; // [rsp+B8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+B8h] [rbp+5Fh]
  __int64 v19; // [rsp+C0h] [rbp+67h] BYREF
  va_list va1; // [rsp+C0h] [rbp+67h]
  __int64 v21; // [rsp+C8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+C8h] [rbp+6Fh]
  __int64 v23; // [rsp+D0h] [rbp+77h] BYREF
  va_list va3; // [rsp+D0h] [rbp+77h]
  const wchar_t *v25; // [rsp+D8h] [rbp+7Fh]
  va_list va4; // [rsp+E0h] [rbp+87h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v21 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v23 = va_arg(va4, _QWORD);
  v25 = va_arg(va4, const wchar_t *);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v8, va1);
  va_copy(v10, va2);
  va_copy(v12, va3);
  *(_QWORD *)&UserData.Size = 8LL;
  v9 = 1LL;
  v11 = 1LL;
  v13 = 2LL;
  if ( v25 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v25[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10;
  }
  v15 = v4;
  v16 = 0;
  v5 = L"NULL";
  if ( v25 )
    v5 = v25;
  v14 = v5;
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, &USBHUB3_ETW_EVENT_BILLBOARD, a3, 5u, &UserData);
}
