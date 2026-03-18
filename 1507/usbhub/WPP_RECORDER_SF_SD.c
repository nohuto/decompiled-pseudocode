/*
 * XREFs of WPP_RECORDER_SF_Sd @ 0x1C0051F54
 * Callers:
 *     UsbhBuildDeviceID @ 0x1C00086EC (UsbhBuildDeviceID.c)
 *     UsbhBuildClassCompatibleID @ 0x1C0008844 (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildHardwareID @ 0x1C0008A88 (UsbhBuildHardwareID.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0057AA4 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sd(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        ...)
{
  const wchar_t *v6; // rsi
  __int64 v7; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  const wchar_t *v13; // rcx
  int v15; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = L"<NULL>";
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a6 )
    {
      if ( *a6 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( a6[v12] );
        v11 = 2 * v12 + 2;
      }
      else
      {
        v11 = 14LL;
      }
    }
    else
    {
      v11 = 10LL;
    }
    if ( a6 )
    {
      v13 = L"<NULL>";
      if ( *a6 )
        v13 = a6;
    }
    else
    {
      v13 = L"NULL";
    }
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      v13,
      v11,
      va,
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
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, a2, 1LL, a5, v15, v6);
}
