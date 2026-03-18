/*
 * XREFs of WPP_RECORDER_SF_dxS @ 0x1C0020824
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00076D0 (Controller_PopulateDeviceFlagsFromKse.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dxS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        const wchar_t *a8)
{
  __int64 v8; // rdi
  __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  const wchar_t *v14; // r8
  int v16; // [rsp+20h] [rbp-58h]

  v8 = (__int64)a8;
  v10 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a8[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = L"NULL";
    if ( a8 )
      v14 = a8;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_30b8102214563469b125fcb27e814bad_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      8LL,
      v14,
      2 * v13,
      0LL);
  }
  if ( v8 )
  {
    do
      ++v10;
    while ( *(_WORD *)(v8 + 2 * v10) );
  }
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 4LL, 3LL, &WPP_30b8102214563469b125fcb27e814bad_Traceguids, v16, &a6);
}
