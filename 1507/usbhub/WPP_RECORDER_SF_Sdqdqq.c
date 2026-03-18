/*
 * XREFs of WPP_RECORDER_SF_Sdqdqq @ 0x1C004D254
 * Callers:
 *     UsbhQueryGlobalDeviceValue @ 0x1C00254D0 (UsbhQueryGlobalDeviceValue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sdqdqq(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rsi
  __int64 v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  const wchar_t *v11; // rcx
  int v13; // [rsp+20h] [rbp-88h]
  __int64 v14; // [rsp+E0h] [rbp+38h] BYREF
  va_list va; // [rsp+E0h] [rbp+38h]
  __int64 v16; // [rsp+E8h] [rbp+40h] BYREF
  va_list va1; // [rsp+E8h] [rbp+40h]
  __int64 v18; // [rsp+F0h] [rbp+48h] BYREF
  va_list va2; // [rsp+F0h] [rbp+48h]
  __int64 v20; // [rsp+F8h] [rbp+50h] BYREF
  va_list va3; // [rsp+F8h] [rbp+50h]
  va_list va4; // [rsp+100h] [rbp+58h] BYREF

  va_start(va4, a6);
  va_start(va3, a6);
  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v20 = va_arg(va4, _QWORD);
  v6 = L"<NULL>";
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
  {
    if ( a6 )
    {
      if ( *a6 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( a6[v10] );
        v9 = 2 * v10 + 2;
      }
      else
      {
        v9 = 14LL;
      }
    }
    else
    {
      v9 = 10LL;
    }
    if ( a6 )
    {
      v11 = L"<NULL>";
      if ( *a6 )
        v11 = a6;
    }
    else
    {
      v11 = L"NULL";
    }
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const wchar_t *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
      74LL,
      v11,
      v9,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      8LL,
      va4,
      8LL,
      0LL);
  }
  if ( a6 && *a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
  }
  if ( a6 )
  {
    if ( *a6 )
      v6 = a6;
  }
  else
  {
    v6 = L"NULL";
  }
  LOWORD(v13) = 74;
  return WppAutoLogTrace(a1, 0LL, 1LL, &WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids, v13, v6);
}
