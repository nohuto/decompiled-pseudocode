/*
 * XREFs of ACPITableUnloadCallBack @ 0x1C0040D90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildIssueInvalidateRelations @ 0x1C001FDC0 (ACPIBuildIssueInvalidateRelations.c)
 */

__int64 __fastcall ACPITableUnloadCallBack(__int64 a1, __int64 a2)
{
  ACPIBuildIssueInvalidateRelations(a1, RootDeviceExtension);
  return AMLIRestartContext(a2);
}
