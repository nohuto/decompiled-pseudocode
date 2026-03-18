/*
 * XREFs of Controller_WdfEvtCleanupCallback @ 0x1C001FE00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_RemoveControllerFromGlobalControllerList @ 0x1C001F31C (Controller_RemoveControllerFromGlobalControllerList.c)
 *     Etw_ControllerDelete @ 0x1C0033C7C (Etw_ControllerDelete.c)
 */

__int64 __fastcall Controller_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0043318);
  v2 = *(_QWORD **)(v1 + 8);
  result = imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(v1 + 16));
  *(_QWORD *)(v1 + 16) = 0LL;
  if ( v2 )
  {
    Controller_RemoveControllerFromGlobalControllerList(v2);
    return Etw_ControllerDelete(v4, v2);
  }
  return result;
}
