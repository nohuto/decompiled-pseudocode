/*
 * XREFs of __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x180044550
 * Callers:
 *     __imp_load_WinStationQueryEnforcementCore @ 0x180044530 (__imp_load_WinStationQueryEnforcementCore.c)
 *     __imp_load_WinStationIsSessionRemoteable @ 0x180044630 (__imp_load_WinStationIsSessionRemoteable.c)
 *     __imp_load_WinStationQueryInformationW @ 0x180044650 (__imp_load_WinStationQueryInformationW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180032270 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_session_winsta_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_session_winsta_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
