/*
 * XREFs of EvaluateCurrentState @ 0x1401B8EC0
 * Callers:
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14007704C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140077A14 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140078674 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x14007AAF4 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x14009F944 (FsRtlUninitializeOplock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400A0D78 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400AAFF4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     RtlQueryAtomInAtomTable @ 0x140424320 (RtlQueryAtomInAtomTable.c)
 *     SeValidSecurityDescriptor @ 0x140486C5C (SeValidSecurityDescriptor.c)
 *     EtwpWriteUserEvent @ 0x1404F38B0 (EtwpWriteUserEvent.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14063DA40 (PiDevCfgResetDeviceKeyCallback.c)
 *     WmipQueryAllDataMultiple @ 0x14069E570 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x14069E90C (WmipQuerySingleMultiple.c)
 * Callees:
 *     EvaluateFeature @ 0x1401B8F60 (EvaluateFeature.c)
 */

_BOOL8 __fastcall EvaluateCurrentState(_DWORD **a1)
{
  EvaluateFeature();
  return **a1 != 1;
}
