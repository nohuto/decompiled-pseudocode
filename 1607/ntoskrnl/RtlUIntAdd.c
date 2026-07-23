/*
 * XREFs of RtlUIntAdd @ 0x1400C1B78
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1404087F4 (EtwpSetProviderTraitsCommon.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     CmpCheckKey @ 0x14043C4E0 (CmpCheckKey.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     SeValidSecurityDescriptor @ 0x140486C5C (SeValidSecurityDescriptor.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404AAFC0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404ABA5C (FsRtlNotifyFilterReportChangeLite.c)
 *     EtwpGetTraceGuidInfo @ 0x1404CC1F8 (EtwpGetTraceGuidInfo.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     WmipProbeWnodeWorker @ 0x14052BA3C (WmipProbeWnodeWorker.c)
 *     VrpUpdateKeyInformation @ 0x140616C78 (VrpUpdateKeyInformation.c)
 *     EtwpGetTraceGroupInfo @ 0x1406A02C8 (EtwpGetTraceGroupInfo.c)
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
