/*
 * XREFs of FsRtlNotifyFullReportChange @ 0x14066EB80
 * Callers:
 *     VerifierFsRtlNotifyFullReportChange @ 0x140741E00 (VerifierFsRtlNotifyFullReportChange.c)
 * Callees:
 *     FsRtlNotifyFilterReportChange @ 0x1404A74B4 (FsRtlNotifyFilterReportChange.c)
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
