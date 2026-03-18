/*
 * XREFs of WPP_RECORDER_SF_I @ 0x1C0004134
 * Callers:
 *     Controller_Start @ 0x1C0003FB0 (Controller_Start.c)
 *     Controller_D0EntryRestoreState @ 0x1C0014854 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C0014A64 (Controller_D0ExitSaveState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_I(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v9; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
    (*(void (__fastcall **)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, _QWORD))&WPP_MAIN_CB.Dpc.TargetInfoAsUlong)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, a2, 3LL, &WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v9, va);
}
