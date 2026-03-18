/*
 * XREFs of WPP_RECORDER_SF_SS @ 0x1C0057A54
 * Callers:
 *     UsbhGetUxdDeviceKey @ 0x1C005729C (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C00574C4 (UsbhGetUxdPortKey.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
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
  __int64 v8; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  const wchar_t *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  const wchar_t *v16; // r9
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-58h]

  v7 = L"NULL";
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = L"NULL";
    if ( a7 )
      v13 = a7;
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = L"NULL";
    if ( a6 )
      v16 = a6;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, const wchar_t *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5b132266348c32d7b0c29b24875d7db7_Traceguids,
      a4,
      v16,
      2 * v15,
      v13,
      2 * v12,
      0LL);
  }
  if ( a7 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a7[v17] );
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
  }
  if ( a6 )
    v7 = a6;
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, &WPP_5b132266348c32d7b0c29b24875d7db7_Traceguids, v19, v7);
}
