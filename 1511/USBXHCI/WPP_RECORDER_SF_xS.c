/*
 * XREFs of WPP_RECORDER_SF_xS @ 0x1C0008D18
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0008A30 (Controller_PopulateDeviceFlagsFromKse.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_xS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        _WORD *a7)
{
  _WORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  const wchar_t *v14; // rcx
  int v15; // [rsp+20h] [rbp-48h]

  v7 = a7;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
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
    (*(void (__fastcall **)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, const wchar_t *, __int64, _QWORD))&WPP_MAIN_CB.Dpc.TargetInfoAsUlong)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
      a4,
      &a6,
      8LL,
      v14,
      v12,
      0LL);
  }
  if ( v7 && *v7 )
  {
    do
      ++v8;
    while ( v7[v8] );
  }
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, 4LL, 3LL, &WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v15, &a6);
}
