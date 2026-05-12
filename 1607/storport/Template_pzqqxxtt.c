/*
 * XREFs of Template_pzqqxxtt @ 0x1C002AAA0
 * Callers:
 *     RaidpAdapterDpcRoutine @ 0x1C0005F40 (RaidpAdapterDpcRoutine.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x1C001A000 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidCompletionDpcRoutine @ 0x1C00297C0 (RaidCompletionDpcRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

NTSTATUS Template_pzqqxxtt(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rax
  int v4; // edx
  const wchar_t *v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-71h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-61h]
  int v9; // [rsp+48h] [rbp-59h]
  int v10; // [rsp+4Ch] [rbp-55h]
  va_list v11; // [rsp+50h] [rbp-51h]
  __int64 v12; // [rsp+58h] [rbp-49h]
  va_list v13; // [rsp+60h] [rbp-41h]
  __int64 v14; // [rsp+68h] [rbp-39h]
  va_list v15; // [rsp+70h] [rbp-31h]
  __int64 v16; // [rsp+78h] [rbp-29h]
  va_list v17; // [rsp+80h] [rbp-21h]
  __int64 v18; // [rsp+88h] [rbp-19h]
  va_list v19; // [rsp+90h] [rbp-11h]
  __int64 v20; // [rsp+98h] [rbp-9h]
  va_list v21; // [rsp+A0h] [rbp-1h]
  __int64 v22; // [rsp+A8h] [rbp+7h]
  __int64 v23; // [rsp+E8h] [rbp+47h] BYREF
  va_list va; // [rsp+E8h] [rbp+47h]
  const wchar_t *v25; // [rsp+F0h] [rbp+4Fh]
  __int64 v26; // [rsp+F8h] [rbp+57h] BYREF
  va_list va1; // [rsp+F8h] [rbp+57h]
  __int64 v28; // [rsp+100h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+100h] [rbp+5Fh]
  __int64 v30; // [rsp+108h] [rbp+67h] BYREF
  va_list va3; // [rsp+108h] [rbp+67h]
  __int64 v32; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+110h] [rbp+6Fh]
  __int64 v34; // [rsp+118h] [rbp+77h] BYREF
  va_list va5; // [rsp+118h] [rbp+77h]
  va_list va6; // [rsp+120h] [rbp+7Fh] BYREF

  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, const wchar_t *);
  va_copy(va2, va1);
  v26 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v28 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v30 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v32 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v34 = va_arg(va6, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
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
  v9 = v4;
  v5 = L"NULL";
  v10 = 0;
  if ( v25 )
    v5 = v25;
  v12 = 4LL;
  v8 = v5;
  v14 = 4LL;
  va_copy(v11, va1);
  v16 = 8LL;
  va_copy(v13, va2);
  va_copy(v15, va3);
  va_copy(v17, va4);
  va_copy(v19, va5);
  va_copy(v21, va6);
  v18 = 8LL;
  v20 = 4LL;
  v22 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventDpc, 0LL, 8u, &UserData);
}
