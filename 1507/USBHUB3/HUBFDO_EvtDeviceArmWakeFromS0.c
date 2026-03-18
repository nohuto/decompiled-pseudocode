/*
 * XREFs of HUBFDO_EvtDeviceArmWakeFromS0 @ 0x1C000A8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceArmWakeFromS0(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0057140);
  _InterlockedOr((volatile signed __int32 *)(v1 + 40), 0x200u);
  _InterlockedOr((volatile signed __int32 *)(v1 + 40), 0x400u);
  return 0LL;
}
