/*
 * XREFs of CmpConstructName @ 0x1404A1DCC
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x1403E1950 (CmRealKCBToVirtualPath.c)
 *     CmLoadAppKey @ 0x1403FC110 (CmLoadAppKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FCD98 (CmpSetSecurityDescriptorInfo.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpLinkHiveToMaster @ 0x1404A10B4 (CmpLinkHiveToMaster.c)
 *     CmAddLogForAction @ 0x1404A1450 (CmAddLogForAction.c)
 *     CmEtwRunDown @ 0x1405FB640 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1405FB920 (CmpEtwDumpKcb.c)
 *     CmpTraceHiveSaveStart @ 0x1405FC0AC (CmpTraceHiveSaveStart.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1405FEFD8 (CmpIsHiveAlreadyLoaded.c)
 *     CmpDumpKeyBodyList @ 0x1405FF578 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x14060035C (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140602880 (CmpReportAuditVirtualizationEvent.c)
 *     CmpLoadHiveVolatile @ 0x14060D2DC (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmpConstructNameWithStatus @ 0x140437710 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpConstructName(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  CmpConstructNameWithStatus(a1, &v2);
  return v2;
}
