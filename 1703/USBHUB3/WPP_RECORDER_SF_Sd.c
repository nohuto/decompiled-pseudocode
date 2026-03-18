/*
 * XREFs of WPP_RECORDER_SF_Sd @ 0x1C003553C
 * Callers:
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C00358D8 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rsi
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  const wchar_t *v12; // rdx
  int v14; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = L"NULL";
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
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
    v11 = 2 * v10;
    v12 = L"NULL";
    if ( a6 )
      v12 = a6;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
      26LL,
      v12,
      v11,
      va,
      4LL,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
  }
  if ( a6 )
    v6 = a6;
  LOWORD(v14) = 26;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids, v14, v6);
}
