/*
 * XREFs of imp_WdfVerifierKeBugCheck @ 0x1C0067D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall __noreturn imp_WdfVerifierKeBugCheck(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  DriverGlobals[-2].DriverName[7] = 1;
  KeBugCheckEx(BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
