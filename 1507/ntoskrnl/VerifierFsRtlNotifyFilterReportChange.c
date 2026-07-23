/*
 * XREFs of VerifierFsRtlNotifyFilterReportChange @ 0x140741DA0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlNotifyFilterReportChange @ 0x1404A74B4 (FsRtlNotifyFilterReportChange.c)
 */

void __fastcall VerifierFsRtlNotifyFilterReportChange(
        struct _REAL_NOTIFY_SYNC *a1,
        _LIST_ENTRY *a2,
        STRING *a3,
        USHORT a4,
        STRING *a5,
        STRING *a6,
        ULONG FilterMatch,
        ULONG Action,
        void *a9,
        void *a10)
{
  pXdvFsRtlNotifyFilterReportChange(a1, a2, a3, a4, a5, a6, FilterMatch, Action, a9, a10);
}
