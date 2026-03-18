/*
 * XREFs of WPP_RECORDER_SF_DSd @ 0x1C00DA9B4
 * Callers:
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C000C5D0 (RIMRegisterForDeviceChangeNotifications.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DSd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rdi
  const wchar_t *v6; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  const wchar_t *v11; // r8
  __int64 v12; // rbx
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const wchar_t *v17; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, const wchar_t *);
  v5 = (__int64)v17;
  v6 = L"NULL";
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( v17 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v17[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = L"NULL";
    if ( v17 )
      v11 = v17;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
      45LL,
      (__int64 *)va,
      4LL,
      v11,
      2 * v10,
      va1,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    do
      ++v8;
    while ( *(_WORD *)(v5 + 2 * v8) );
    v12 = v8 + 1;
  }
  else
  {
    v12 = 5LL;
  }
  if ( v5 )
    v6 = (const wchar_t *)v5;
  LOWORD(v14) = 45;
  return WppAutoLogTrace(
           a1,
           3LL,
           4LL,
           &WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
           v14,
           (__int64 *)va,
           4LL,
           v6,
           2 * v12,
           va1,
           4LL);
}
