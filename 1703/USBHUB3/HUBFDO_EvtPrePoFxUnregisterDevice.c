/*
 * XREFs of HUBFDO_EvtPrePoFxUnregisterDevice @ 0x1C000C3D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtPrePoFxUnregisterDevice(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C005B0C0);
  *(_QWORD *)(result + 2576) = 0LL;
  return result;
}
