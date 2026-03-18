/*
 * XREFs of WPP_RECORDER_SF_dqqdS @ 0x1C0082064
 * Callers:
 *     RIMHandleTTMDeviceArrival @ 0x1C000C65C (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqqdS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        char a9,
        const wchar_t *a10)
{
  const wchar_t *v10; // rdi
  __int64 v11; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  const wchar_t *v16; // rcx
  int v17; // [rsp+20h] [rbp-88h]
  int v18; // [rsp+80h] [rbp-28h] BYREF
  void *v19; // [rsp+88h] [rbp-20h] BYREF

  v10 = a10;
  v19 = &gTTMDevCallbacks;
  v18 = 2;
  v11 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a10 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a10[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = L"NULL";
    if ( a10 )
      v16 = a10;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, int *, __int64, char *, __int64, void **, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_9f5bb04cded5391c7b821cb8780be1fa_Traceguids,
      10LL,
      &v18,
      4LL,
      &a7,
      8LL,
      &v19,
      8LL,
      &a9,
      4LL,
      v16,
      2 * v15,
      0LL);
  }
  if ( v10 )
  {
    do
      ++v11;
    while ( v10[v11] );
  }
  LOWORD(v17) = 10;
  return WppAutoLogTrace(
           a1,
           3LL,
           4LL,
           &WPP_9f5bb04cded5391c7b821cb8780be1fa_Traceguids,
           v17,
           &v18,
           4LL,
           &a7,
           8LL,
           &v19,
           8LL);
}
