/*
 * XREFs of VerifierFsRtlNotifyFullReportChange @ 0x1406C060C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierFsRtlNotifyFullReportChange(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PSTRING FullTargetName,
        USHORT TargetNameOffset,
        PSTRING StreamName,
        PSTRING NormalizedParentName,
        ULONG FilterMatch,
        ULONG Action,
        PVOID TargetContext)
{
  pXdvFsRtlNotifyFullReportChange(
    NotifySync,
    NotifyList,
    FullTargetName,
    TargetNameOffset,
    StreamName,
    NormalizedParentName,
    FilterMatch,
    Action,
    TargetContext);
}
