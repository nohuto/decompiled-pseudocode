/*
 * XREFs of RtlULongAdd @ 0x1401E04A8
 * Callers:
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404A6B90 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404A74B4 (FsRtlNotifyFilterReportChange.c)
 *     CmpCheckKey @ 0x1404C2C40 (CmpCheckKey.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404D2F6C (EtwpSetProviderTraitsCommon.c)
 *     EtwpGetTraceGuidInfo @ 0x14053DADC (EtwpGetTraceGuidInfo.c)
 *     IopGraftName @ 0x140548FF4 (IopGraftName.c)
 *     EtwpGetTraceGroupInfo @ 0x14054EAA8 (EtwpGetTraceGroupInfo.c)
 *     WmipProbeWnodeWorker @ 0x1405816EC (WmipProbeWnodeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongAdd(ULONG ulAugend, ULONG ulAddend, ULONG *pulResult)
{
  if ( ulAugend + ulAddend < ulAugend )
  {
    *pulResult = -1;
    return -1073741675;
  }
  else
  {
    *pulResult = ulAugend + ulAddend;
    return 0;
  }
}
