/*
 * XREFs of Controller_EvtPrePoFxUnregisterDevice @ 0x1C001AC80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_EvtPrePoFxUnregisterDevice(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C0045318);
  *(_QWORD *)(*(_QWORD *)(result + 8) + 400LL) = 0LL;
  return result;
}
