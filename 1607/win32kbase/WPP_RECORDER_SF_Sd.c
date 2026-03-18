/*
 * XREFs of WPP_RECORDER_SF_Sd @ 0x1C00DADB8
 * Callers:
 *     RIMDeviceNotify @ 0x1C00DA6C0 (RIMDeviceNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sd(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  const wchar_t *v11; // r8
  __int64 v12; // rbx
  int v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+50h] [rbp-18h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = L"NULL";
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a6[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = L"NULL";
    if ( a6 )
      v11 = a6;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
      44LL,
      v11,
      2 * v10,
      va,
      4LL,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v12 = v8 + 1;
  }
  else
  {
    v12 = 5LL;
  }
  if ( a6 )
    v6 = a6;
  LOWORD(v14) = 44;
  return WppAutoLogTrace(
           a1,
           3LL,
           4LL,
           &WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
           v14,
           v6,
           2 * v12,
           va,
           4LL,
           0LL,
           v15);
}
