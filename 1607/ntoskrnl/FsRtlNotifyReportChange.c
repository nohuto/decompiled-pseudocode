/*
 * XREFs of FsRtlNotifyReportChange @ 0x14061FF04
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlNotifyFilterReportChange @ 0x1404AAFC0 (FsRtlNotifyFilterReportChange.c)
 */

void __fastcall FsRtlNotifyReportChange(
        struct _REAL_NOTIFY_SYNC *a1,
        _LIST_ENTRY *a2,
        STRING *a3,
        _WORD *a4,
        ULONG FilterMatch)
{
  FsRtlNotifyFilterReportChange(a1, a2, a3, a3->Length - *a4, 0LL, 0LL, FilterMatch, 0, 0LL, 0LL);
}
