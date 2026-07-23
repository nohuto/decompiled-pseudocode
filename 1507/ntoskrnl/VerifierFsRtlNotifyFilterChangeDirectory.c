/*
 * XREFs of VerifierFsRtlNotifyFilterChangeDirectory @ 0x140741D3C
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlNotifyFilterChangeDirectory @ 0x1404A70C4 (FsRtlNotifyFilterChangeDirectory.c)
 */

void __fastcall VerifierFsRtlNotifyFilterChangeDirectory(
        struct _REAL_NOTIFY_SYNC *a1,
        _LIST_ENTRY *a2,
        void *a3,
        STRING *a4,
        BOOLEAN WatchTree,
        BOOLEAN IgnoreBuffer,
        ULONG CompletionFilter,
        IRP *a8,
        BOOLEAN (__stdcall *a9)(PVOID NotifyContext, PVOID TargetContext, PSECURITY_SUBJECT_CONTEXT SubjectContext),
        struct _SECURITY_SUBJECT_CONTEXT *a10,
        BOOLEAN (__stdcall *a11)(PVOID NotifyContext, PVOID FilterContext))
{
  pXdvFsRtlNotifyFilterChangeDirectory(a1, a2, a3, a4, WatchTree, IgnoreBuffer, CompletionFilter, a8, a9, a10, a11);
}
