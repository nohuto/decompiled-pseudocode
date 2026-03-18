/*
 * XREFs of WPP_RECORDER_SF_dxS @ 0x1C0009370
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0008FA0 (Controller_PopulateDeviceFlagsFromKse.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
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
  __int64 v13; // r8
  __int64 v14; // r8
  const wchar_t *v15; // rdx
  int v16; // [rsp+20h] [rbp-58h]

  v8 = (__int64)a8;
  v10 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a8 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a8[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a8;
    if ( !a8 )
      v15 = L"NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      8LL,
      v15,
      2 * v14,
      0LL);
  }
  if ( v8 )
  {
    do
      ++v10;
    while ( *(_WORD *)(v8 + 2 * v10) );
  }
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 4LL, 3LL, &WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v16, &a6);
}
