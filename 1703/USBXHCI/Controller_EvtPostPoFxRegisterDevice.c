/*
 * XREFs of Controller_EvtPostPoFxRegisterDevice @ 0x1C001AC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_EvtPostPoFxRegisterDevice(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0045318)
                 + 8);
  result = 0LL;
  *(_QWORD *)(v3 + 400) = a2;
  return result;
}
