/*
 * XREFs of WPP_RECORDER_SF_qqS @ 0x1C007A9F0
 * Callers:
 *     rimOnPnpArrived @ 0x1C0010120 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        _WORD *a8)
{
  _WORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  const wchar_t *v15; // rcx
  int v16; // [rsp+20h] [rbp-58h]

  v8 = a8;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a8 )
    {
      if ( *a8 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( a8[v14] );
        v13 = 2 * v14 + 2;
      }
      else
      {
        v13 = 14LL;
      }
    }
    else
    {
      v13 = 10LL;
    }
    if ( a8 )
    {
      v15 = L"<NULL>";
      if ( *a8 )
        v15 = a8;
    }
    else
    {
      v15 = L"NULL";
    }
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, _QWORD, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
      a4,
      &a6,
      8LL,
      &a7,
      8LL,
      v15,
      v13,
      0LL);
  }
  if ( v8 && *v8 )
  {
    do
      ++v9;
    while ( v8[v9] );
  }
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 3LL, 5LL, &WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids, v16, &a6);
}
