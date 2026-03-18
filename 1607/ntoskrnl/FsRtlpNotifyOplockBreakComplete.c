/*
 * XREFs of FsRtlpNotifyOplockBreakComplete @ 0x14061E698
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FsRtlpNotifyOplockBreakComplete(__int64 a1, IRP *a2)
{
  IofCompleteRequest(a2, 1);
}
