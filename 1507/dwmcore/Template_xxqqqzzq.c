/*
 * XREFs of Template_xxqqqzzq @ 0x1800E6B84
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180064118 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

ULONG Template_xxqqqzzq(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // rcx
  int v3; // r9d
  __int64 v4; // rax
  int v5; // edx
  const wchar_t *v6; // r10
  const wchar_t *v7; // rax
  bool v8; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-69h] BYREF
  va_list v11; // [rsp+30h] [rbp-59h]
  __int64 v12; // [rsp+38h] [rbp-51h]
  va_list v13; // [rsp+40h] [rbp-49h]
  __int64 v14; // [rsp+48h] [rbp-41h]
  va_list v15; // [rsp+50h] [rbp-39h]
  __int64 v16; // [rsp+58h] [rbp-31h]
  va_list v17; // [rsp+60h] [rbp-29h]
  __int64 v18; // [rsp+68h] [rbp-21h]
  const wchar_t *v19; // [rsp+70h] [rbp-19h]
  int v20; // [rsp+78h] [rbp-11h]
  int v21; // [rsp+7Ch] [rbp-Dh]
  const wchar_t *v22; // [rsp+80h] [rbp-9h]
  int v23; // [rsp+88h] [rbp-1h]
  int v24; // [rsp+8Ch] [rbp+3h]
  va_list v25; // [rsp+90h] [rbp+7h]
  __int64 v26; // [rsp+98h] [rbp+Fh]
  __int64 v27; // [rsp+D0h] [rbp+47h] BYREF
  va_list va; // [rsp+D0h] [rbp+47h]
  __int64 v29; // [rsp+D8h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+D8h] [rbp+4Fh]
  __int64 v31; // [rsp+E0h] [rbp+57h] BYREF
  va_list va2; // [rsp+E0h] [rbp+57h]
  __int64 v33; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list va3; // [rsp+E8h] [rbp+5Fh]
  __int64 v35; // [rsp+F0h] [rbp+67h] BYREF
  va_list va4; // [rsp+F0h] [rbp+67h]
  const wchar_t *v37; // [rsp+F8h] [rbp+6Fh]
  const wchar_t *v38; // [rsp+100h] [rbp+77h]
  va_list va5; // [rsp+108h] [rbp+7Fh] BYREF

  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v27 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v29 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v31 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v33 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v35 = va_arg(va5, _QWORD);
  v37 = va_arg(va5, const wchar_t *);
  v38 = va_arg(va5, const wchar_t *);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v11, va1);
  v2 = -1LL;
  v12 = 8LL;
  va_copy(v13, va2);
  va_copy(v15, va3);
  va_copy(v17, va4);
  v3 = 10;
  v14 = 4LL;
  v16 = 4LL;
  v18 = 4LL;
  if ( v37 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v37[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v20 = v5;
  v6 = L"NULL";
  v21 = 0;
  v7 = L"NULL";
  if ( v37 )
    v7 = v37;
  v19 = v7;
  v8 = v38 == 0LL;
  if ( v38 )
  {
    do
      ++v2;
    while ( v38[v2] );
    v3 = 2 * v2 + 2;
    v8 = v38 == 0LL;
  }
  if ( !v8 )
    v6 = v38;
  v23 = v3;
  v22 = v6;
  va_copy(v25, va5);
  v24 = 0;
  v26 = 4LL;
  return EventWrite(
           Microsoft_Windows_Dwm_CoreHandle,
           &EVTDESC_TELEMETRY_ANIMATION_PERFORMANCE_ANALYSIS_EVENT,
           8u,
           &UserData);
}
