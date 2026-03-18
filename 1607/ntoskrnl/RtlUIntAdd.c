/*
 * XREFs of RtlUIntAdd @ 0x140089230
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x140409934 (EtwpSetProviderTraitsCommon.c)
 *     SepDuplicateToken @ 0x140412BD0 (SepDuplicateToken.c)
 *     CmpCheckKey @ 0x14043D610 (CmpCheckKey.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404BF290 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404BFD2C (FsRtlNotifyFilterReportChangeLite.c)
 *     EtwpGetTraceGuidInfo @ 0x1404EA104 (EtwpGetTraceGuidInfo.c)
 *     WmipProbeWnodeWorker @ 0x14052ADEC (WmipProbeWnodeWorker.c)
 *     VrpUpdateKeyInformation @ 0x140616BC4 (VrpUpdateKeyInformation.c)
 *     EtwpGetTraceGroupInfo @ 0x1406A0190 (EtwpGetTraceGroupInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  if ( uAugend + uAddend < uAugend )
  {
    *puResult = -1;
    return -1073741675;
  }
  else
  {
    *puResult = uAugend + uAddend;
    return 0;
  }
}
