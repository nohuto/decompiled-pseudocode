/*
 * XREFs of Isoch_WdfEvtRingEmptyTimer @ 0x1C00288B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Isoch_WdfEvtRingEmptyTimer(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char result; // al

  v1 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 2568))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1);
  v2 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         v1,
         off_1C0040310);
  result = WPP_RECORDER_SF_(
             *(_QWORD *)(*(_QWORD *)(v2 + 56) + 80LL),
             4u,
             0xDu,
             0xBu,
             (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids);
  if ( *(_DWORD *)(v2 + 100) == 4 )
  {
    result = KdRefreshDebuggerNotPresent();
    if ( !result )
      __debugbreak();
  }
  return result;
}
