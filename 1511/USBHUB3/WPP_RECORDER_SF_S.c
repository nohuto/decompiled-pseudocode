/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0032380
 * Callers:
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C00328A0 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  const wchar_t *v11; // rcx
  int v13; // [rsp+20h] [rbp-38h]

  v6 = a6;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
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
      v11 = a6;
      if ( !*a6 )
        v11 = L"<NULL>";
    }
    else
    {
      v11 = L"NULL";
    }
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
      24LL,
      v11,
      v9,
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
    if ( !*a6 )
      v6 = L"<NULL>";
  }
  else
  {
    v6 = L"NULL";
  }
  LOWORD(v13) = 24;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids, v13, v6);
}
