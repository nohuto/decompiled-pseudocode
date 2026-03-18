/*
 * XREFs of WPP_RECORDER_SF_Sqd @ 0x1C005203C
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C00069A4 (UsbhUpdateUxdSettings.c)
 *     UsbhBuildDeviceID @ 0x1C0007730 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C0007ACC (UsbhBuildHardwareID.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
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
  __int64 v7; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  const wchar_t *v12; // rcx
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v15 = va_arg(va1, _QWORD);
  v6 = L"<NULL>";
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
  {
    if ( a6 )
    {
      if ( *a6 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( a6[v11] );
        v10 = 2 * v11 + 2;
      }
      else
      {
        v10 = 14LL;
      }
    }
    else
    {
      v10 = 10LL;
    }
    if ( a6 )
    {
      v12 = L"<NULL>";
      if ( *a6 )
        v12 = a6;
    }
    else
    {
      v12 = L"NULL";
    }
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, const wchar_t *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      v12,
      v10,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
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
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, a5, v14, v6);
}
