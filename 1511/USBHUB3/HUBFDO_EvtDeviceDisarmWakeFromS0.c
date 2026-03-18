/*
 * XREFs of HUBFDO_EvtDeviceDisarmWakeFromS0 @ 0x1C000AEB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceDisarmWakeFromS0(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C0057198);
  _InterlockedAnd((volatile signed __int32 *)(result + 40), 0xFFFFFDFF);
  _InterlockedAnd((volatile signed __int32 *)(result + 40), 0xFFFFFBFF);
  return result;
}
