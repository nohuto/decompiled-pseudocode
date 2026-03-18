/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0020A84
 * Callers:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_s(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, const char *a6)
{
  const char *v6; // rsi
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  const char *v11; // rdx
  int v13; // [rsp+20h] [rbp-28h]

  v6 = "NULL";
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a6[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = "NULL";
    if ( a6 )
      v11 = a6;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_30b8102214563469b125fcb27e814bad_Traceguids,
      221LL,
      v11,
      v10,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
  }
  if ( a6 )
    v6 = a6;
  LOWORD(v13) = 221;
  return WppAutoLogTrace(a1, 2LL, 3LL, &WPP_30b8102214563469b125fcb27e814bad_Traceguids, v13, v6);
}
