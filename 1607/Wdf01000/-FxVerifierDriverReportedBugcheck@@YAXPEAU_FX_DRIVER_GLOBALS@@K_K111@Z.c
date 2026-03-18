/*
 * XREFs of ?FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z @ 0x1C007C6F8
 * Callers:
 *     imp_WdfCxVerifierKeBugCheck @ 0x1C0074810 (imp_WdfCxVerifierKeBugCheck.c)
 *     imp_WdfVerifierKeBugCheck @ 0x1C0074890 (imp_WdfVerifierKeBugCheck.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn FxVerifierDriverReportedBugcheck(
        _FX_DRIVER_GLOBALS *BugCheckCode,
        ULONG BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR FxDriverGlobals)
{
  KeBugCheckEx(BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4, FxDriverGlobals);
}
