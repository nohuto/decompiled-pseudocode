/*
 * XREFs of WPP_RECORDER_SF_DqqS @ 0x1C00DAB1C
 * Callers:
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DqqS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const wchar_t *a9)
{
  __int64 v9; // rdi
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  const wchar_t *v15; // rdx
  int v17; // [rsp+20h] [rbp-68h]

  v9 = (__int64)a9;
  v11 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a9 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a9[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = L"NULL";
    if ( a9 )
      v15 = a9;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, _QWORD, char *, __int64, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      8LL,
      &a8,
      8LL,
      v15,
      2 * v14,
      0LL);
  }
  if ( v9 )
  {
    do
      ++v11;
    while ( *(_WORD *)(v9 + 2 * v11) );
  }
  LOWORD(v17) = a4;
  return WppAutoLogTrace(
           a1,
           3LL,
           5LL,
           &WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
           v17,
           &a6,
           4LL,
           &a7,
           8LL,
           &a8,
           8LL);
}
