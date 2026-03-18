/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x1C0016580
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0005E40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceDisarmWakeFromSx(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                     a1,
                     off_1C0040270)
                 + 8);
  result = WPP_RECORDER_SF_q(
             *(_QWORD *)(v2 + 64),
             4u,
             3u,
             0x5Au,
             (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
             a1);
  *(_BYTE *)(v2 + 348) = 0;
  return result;
}
