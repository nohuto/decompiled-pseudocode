/*
 * XREFs of Isoch_WdfEvtRingEmptyTimer @ 0x1C002CB60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Isoch_WdfEvtRingEmptyTimer(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char result; // al

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2568))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C00432F0);
  result = WPP_RECORDER_SF_(
             *(_QWORD *)(*(_QWORD *)(v2 + 56) + 80LL),
             4u,
             0xDu,
             0xBu,
             (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids);
  if ( *(_DWORD *)(v2 + 100) == 4 )
  {
    result = KdRefreshDebuggerNotPresent();
    if ( !result )
      __debugbreak();
  }
  return result;
}
