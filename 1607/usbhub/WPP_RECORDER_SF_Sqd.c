/*
 * XREFs of WPP_RECORDER_SF_Sqd @ 0x1C00526A0
 * Callers:
 *     UsbhBuildDeviceID @ 0x1C00065D8 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C0006978 (UsbhBuildHardwareID.c)
 *     UsbhUpdateUxdSettings @ 0x1C0007FDC (UsbhUpdateUxdSettings.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sqd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        ...)
{
  const wchar_t *v6; // rsi
  __int64 v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  const wchar_t *v12; // r8
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v15 = va_arg(va1, _QWORD);
  v6 = L"NULL";
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
  {
    if ( a6 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a6[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = L"NULL";
    if ( a6 )
      v12 = a6;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, const wchar_t *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      v12,
      2 * v11,
      (__int64 *)va,
      8LL,
      va1,
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
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, a5, v14, v6);
}
