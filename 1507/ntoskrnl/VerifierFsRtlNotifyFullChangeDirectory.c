/*
 * XREFs of VerifierFsRtlNotifyFullChangeDirectory @ 0x140741DF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierFsRtlNotifyFullChangeDirectory(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PVOID FsContext,
        PSTRING FullDirectoryName,
        BOOLEAN WatchTree,
        BOOLEAN IgnoreBuffer,
        ULONG CompletionFilter,
        PIRP NotifyIrp,
        PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
        PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  pXdvFsRtlNotifyFullChangeDirectory(
    NotifySync,
    NotifyList,
    FsContext,
    FullDirectoryName,
    WatchTree,
    IgnoreBuffer,
    CompletionFilter,
    NotifyIrp,
    TraverseCallback,
    SubjectContext);
}
