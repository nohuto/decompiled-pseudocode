/*
 * XREFs of imp_WdfVerifierKeBugCheck @ 0x1C0078690
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z @ 0x1C0080C2C (-FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z.c)
 */

void __fastcall __noreturn imp_WdfVerifierKeBugCheck(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        unsigned int BugCheckCode,
        unsigned __int64 BugCheckParameter1,
        unsigned __int64 BugCheckParameter2,
        unsigned __int64 BugCheckParameter3,
        unsigned __int64 BugCheckParameter4)
{
  HIBYTE(DriverGlobals[-1].WdfLogHeaderRefCount) = 1;
  FxVerifierDriverReportedBugcheck(
    DriverGlobals,
    BugCheckCode,
    BugCheckParameter1,
    BugCheckParameter2,
    BugCheckParameter3,
    BugCheckParameter4);
}
