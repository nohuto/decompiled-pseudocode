/*
 * XREFs of EvaluateCurrentState @ 0x1401B8354
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x140076FCC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140077994 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400785F4 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x14007AA74 (FsRtlpOplockCleanup.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x14008CCB0 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlUninitializeOplock @ 0x1400A101C (FsRtlUninitializeOplock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400A2450 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400ACA8C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400ED7E0 (NtAssociateWaitCompletionPacket.c)
 *     IopFreeWaitCompletionPacket @ 0x1400EE378 (IopFreeWaitCompletionPacket.c)
 *     IopCloseWaitCompletionPacket @ 0x1400F0820 (IopCloseWaitCompletionPacket.c)
 *     IopDeleteIoCompletionInternal @ 0x1400F69B8 (IopDeleteIoCompletionInternal.c)
 *     NtCancelWaitCompletionPacket @ 0x1400F99A4 (NtCancelWaitCompletionPacket.c)
 *     IopCancelWaitCompletionPacket @ 0x1400F9B7C (IopCancelWaitCompletionPacket.c)
 *     RtlQueryAtomInAtomTable @ 0x140425460 (RtlQueryAtomInAtomTable.c)
 *     NtCreateWaitCompletionPacket @ 0x1404C2B8C (NtCreateWaitCompletionPacket.c)
 * Callees:
 *     EvaluateFeature @ 0x1401B83F4 (EvaluateFeature.c)
 */

_BOOL8 __fastcall EvaluateCurrentState(_DWORD **a1)
{
  EvaluateFeature();
  return **a1 != 1;
}
