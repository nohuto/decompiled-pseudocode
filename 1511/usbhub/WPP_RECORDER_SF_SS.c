/*
 * XREFs of WPP_RECORDER_SF_SS @ 0x1C0057424
 * Callers:
 *     UsbhGetUxdDeviceKey @ 0x1C0056C6C (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C0056E94 (UsbhGetUxdPortKey.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rbp
  __int64 v8; // rsi
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  const wchar_t *v14; // r8
  __int64 v15; // rax
  const wchar_t *v16; // rcx
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-58h]

  v7 = L"<NULL>";
  v8 = -1LL;
  v11 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
  {
    if ( a7 )
    {
      if ( *a7 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( a7[v13] );
        v12 = 2 * v13 + 2;
      }
      else
      {
        v12 = 14LL;
      }
    }
    else
    {
      v12 = 10LL;
    }
    if ( a7 )
    {
      v14 = L"<NULL>";
      if ( *a7 )
        v14 = a7;
    }
    else
    {
      v14 = L"NULL";
    }
    if ( a6 )
    {
      if ( *a6 )
      {
        v15 = -1LL;
        do
          ++v15;
        while ( a6[v15] );
        v11 = 2 * v15 + 2;
      }
      else
      {
        v11 = 14LL;
      }
      v16 = L"<NULL>";
      if ( *a6 )
        v16 = a6;
    }
    else
    {
      v16 = L"NULL";
    }
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, const wchar_t *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids,
      a4,
      v16,
      v11,
      v14,
      v12,
      0LL);
  }
  if ( a7 && *a7 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a7[v17] );
  }
  if ( a6 && *a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
  }
  if ( a6 )
  {
    if ( *a6 )
      v7 = a6;
  }
  else
  {
    v7 = L"NULL";
  }
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, &WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids, v19, v7);
}
