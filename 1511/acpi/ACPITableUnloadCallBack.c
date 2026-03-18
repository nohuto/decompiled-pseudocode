/*
 * XREFs of ACPITableUnloadCallBack @ 0x1C0040840
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildIssueInvalidateRelations @ 0x1C0020390 (ACPIBuildIssueInvalidateRelations.c)
 */

__int64 __fastcall ACPITableUnloadCallBack(__int64 a1, __int64 a2)
{
  ACPIBuildIssueInvalidateRelations(a1, RootDeviceExtension);
  return AMLIRestartContext(a2);
}
