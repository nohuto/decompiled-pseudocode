/*
 * XREFs of FsRtlpOplockRHIrpCancelRoutine @ 0x1400C91E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FsRtlpOplockRHIrpCancelRoutine(__int64 a1, __int64 a2)
{
  FsRtlpCancelOplockRHIrp(a2, 0, 1);
}
