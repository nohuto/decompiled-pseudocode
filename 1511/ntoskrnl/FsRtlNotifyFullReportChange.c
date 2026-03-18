/*
 * XREFs of FsRtlNotifyFullReportChange @ 0x1405F5A58
 * Callers:
 *     VerifierFsRtlNotifyFullReportChange @ 0x1406C060C (VerifierFsRtlNotifyFullReportChange.c)
 * Callees:
 *     FsRtlNotifyFilterReportChange @ 0x14048CA00 (FsRtlNotifyFilterReportChange.c)
 */

void __stdcall FsRtlNotifyFullReportChange(
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
  FsRtlNotifyFilterReportChange(
    NotifySync,
    NotifyList,
    FullTargetName,
    TargetNameOffset,
    StreamName,
    NormalizedParentName,
    FilterMatch,
    Action,
    TargetContext,
    0LL);
}
