/*
 * XREFs of WPP_RECORDER_SF_Sdqdqq @ 0x1C004D964
 * Callers:
 *     UsbhQueryGlobalDeviceValue @ 0x1C0025CE0 (UsbhQueryGlobalDeviceValue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sdqdqq(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  const wchar_t *v11; // r8
  int v13; // [rsp+20h] [rbp-88h]
  __int64 v14; // [rsp+E0h] [rbp+38h] BYREF
  va_list va; // [rsp+E0h] [rbp+38h]
  __int64 v16; // [rsp+E8h] [rbp+40h] BYREF
  va_list va1; // [rsp+E8h] [rbp+40h]
  __int64 v18; // [rsp+F0h] [rbp+48h] BYREF
  va_list va2; // [rsp+F0h] [rbp+48h]
  va_list va3; // [rsp+F8h] [rbp+50h] BYREF

  va_start(va3, a6);
  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  v6 = L"NULL";
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
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
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      74LL,
      v11,
      2 * v10,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      4LL,
      va3);
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
  }
  if ( a6 )
    v6 = a6;
  LOWORD(v13) = 74;
  return WppAutoLogTrace(a1, 0LL, 1LL, &WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids, v13, v6);
}
