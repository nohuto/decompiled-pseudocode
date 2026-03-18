/*
 * XREFs of Template_pxzqq @ 0x1C002783C
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0024CF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0026540 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

NTSTATUS Template_pxzqq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  __int64 v4; // rax
  int v5; // edx
  const wchar_t *v6; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  va_list v9; // [rsp+40h] [rbp-19h]
  __int64 v10; // [rsp+48h] [rbp-11h]
  const wchar_t *v11; // [rsp+50h] [rbp-9h]
  int v12; // [rsp+58h] [rbp-1h]
  int v13; // [rsp+5Ch] [rbp+3h]
  va_list v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  va_list v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  __int64 v18; // [rsp+B8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+B8h] [rbp+5Fh]
  __int64 v20; // [rsp+C0h] [rbp+67h] BYREF
  va_list va1; // [rsp+C0h] [rbp+67h]
  const wchar_t *v22; // [rsp+C8h] [rbp+6Fh]
  __int64 v23; // [rsp+D0h] [rbp+77h] BYREF
  va_list va2; // [rsp+D0h] [rbp+77h]
  va_list va3; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  v22 = va_arg(va2, const wchar_t *);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v9, va1);
  *(_QWORD *)&UserData.Size = 8LL;
  v10 = 8LL;
  if ( v22 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v22[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v12 = v5;
  v6 = L"NULL";
  v13 = 0;
  if ( v22 )
    v6 = v22;
  v15 = 4LL;
  v11 = v6;
  v17 = 4LL;
  va_copy(v14, va2);
  va_copy(v16, va3);
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 5u, &UserData);
}
