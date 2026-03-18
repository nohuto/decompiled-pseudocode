/*
 * XREFs of Controller_WdfEvtDeviceUsageNotification @ 0x1C00507D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qLD @ 0x1C00202F0 (WPP_RECORDER_SF_qLD.c)
 */

unsigned __int64 __fastcall Controller_WdfEvtDeviceUsageNotification(__int64 a1, char a2, char a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  unsigned __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h]

  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00412A0)
                 + 8);
  WPP_RECORDER_SF_qLD(*(_QWORD *)(v5 + 64), v6, v7, v8, v11);
  v9 = 1 << a2;
  if ( a3 )
  {
    *(_DWORD *)(v5 + 276) |= v9;
    return (unsigned __int64)MmLockPagableDataSection(Controller_WdfEvtDeviceAdd);
  }
  else
  {
    result = (unsigned int)~v9;
    *(_DWORD *)(v5 + 276) &= result;
  }
  return result;
}
