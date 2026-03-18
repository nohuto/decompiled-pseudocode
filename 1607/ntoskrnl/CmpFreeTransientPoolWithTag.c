/*
 * XREFs of CmpFreeTransientPoolWithTag @ 0x14002D218
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x1403E1950 (CmRealKCBToVirtualPath.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FCD98 (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmpQueryKeyName @ 0x1404044D0 (CmpQueryKeyName.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140436E10 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x1404375A0 (CmpFreeKeyControlBlock.c)
 *     CmQueryKey @ 0x14043A810 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmLoadDifferencingKey @ 0x14049B648 (CmLoadDifferencingKey.c)
 *     CmpLinkHiveToMaster @ 0x1404A10B4 (CmpLinkHiveToMaster.c)
 *     CmAddLogForAction @ 0x1404A1450 (CmAddLogForAction.c)
 *     CmCallbackReleaseKeyObjectIDEx @ 0x1404DD060 (CmCallbackReleaseKeyObjectIDEx.c)
 *     CmpConstructAndCacheName @ 0x1404E2780 (CmpConstructAndCacheName.c)
 *     CmEtwRunDown @ 0x1405FB640 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1405FB920 (CmpEtwDumpKcb.c)
 *     CmpTraceHiveSaveStart @ 0x1405FC0AC (CmpTraceHiveSaveStart.c)
 *     CmpDumpKeyBodyList @ 0x1405FF578 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x14060035C (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140602880 (CmpReportAuditVirtualizationEvent.c)
 *     CmpLoadHiveVolatile @ 0x14060D2DC (CmpLoadHiveVolatile.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall CmpFreeTransientPoolWithTag(PVOID P, ULONG Tag)
{
  ExFreePoolWithTag(P, Tag);
}
