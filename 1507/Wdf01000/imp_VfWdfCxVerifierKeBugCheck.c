/*
 * XREFs of imp_VfWdfCxVerifierKeBugCheck @ 0x1C00CA3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfCxVerifierKeBugCheck(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        void *Object,
        __int64 BugCheckCode,
        unsigned __int64 BugCheckParameter1,
        unsigned __int64 BugCheckParameter2,
        unsigned __int64 BugCheckParameter3,
        unsigned __int64 BugCheckParameter4)
{
  WdfVersion.Functions.pfnWdfCxVerifierKeBugCheck(
    DriverGlobals,
    Object,
    BugCheckCode,
    BugCheckParameter1,
    BugCheckParameter2,
    BugCheckParameter3,
    BugCheckParameter4);
}
