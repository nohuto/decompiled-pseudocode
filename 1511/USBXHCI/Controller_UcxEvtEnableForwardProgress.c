/*
 * XREFs of Controller_UcxEvtEnableForwardProgress @ 0x1C0050280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_UcxEvtEnableForwardProgress(__int64 a1)
{
  *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
               WdfDriverGlobals,
               a1,
               off_1C00410E8)
           + 272) = 1;
  return 0LL;
}
