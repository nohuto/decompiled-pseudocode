/*
 * XREFs of Template_pqqz @ 0x1C001BD0C
 * Callers:
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C00BE5D0 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 */

NTSTATUS Template_pqqz(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rax
  int v4; // edx
  const wchar_t *v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  va_list v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  va_list v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  const wchar_t *v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]
  __int64 v15; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v17; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  __int64 v19; // [rsp+B8h] [rbp+38h] BYREF
  va_list va2; // [rsp+B8h] [rbp+38h]
  const wchar_t *v21; // [rsp+C0h] [rbp+40h]
  va_list va3; // [rsp+C8h] [rbp+48h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  v21 = va_arg(va3, const wchar_t *);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v8, va1);
  va_copy(v10, va2);
  *(_QWORD *)&UserData.Size = 8LL;
  v9 = 4LL;
  v11 = 4LL;
  if ( v21 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v21[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10;
  }
  v13 = v4;
  v5 = L"NULL";
  v14 = 0;
  if ( v21 )
    v5 = v21;
  v12 = v5;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventNodeMetadata, 0LL, 4u, &UserData);
}
