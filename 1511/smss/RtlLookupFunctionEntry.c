/*
 * XREFs of RtlLookupFunctionEntry @ 0x14000C308
 * Callers:
 *     __report_gsfailure @ 0x14000BFF0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry(
        DWORD64 ControlPc,
        PDWORD64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  return __imp_RtlLookupFunctionEntry(ControlPc, ImageBase, HistoryTable);
}
