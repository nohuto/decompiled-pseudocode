/*
 * XREFs of CmpFreeTransientPoolWithTag @ 0x14002CD98
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x1403E1950 (CmRealKCBToVirtualPath.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpQueryKeyName @ 0x140403390 (CmpQueryKeyName.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140435CE0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140436470 (CmpFreeKeyControlBlock.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 *     CmCallbackReleaseKeyObjectIDEx @ 0x1404C0664 (CmCallbackReleaseKeyObjectIDEx.c)
 *     CmpConstructAndCacheName @ 0x1404C56E4 (CmpConstructAndCacheName.c)
 *     CmpLinkHiveToMaster @ 0x1405194C0 (CmpLinkHiveToMaster.c)
 *     CmAddLogForAction @ 0x14051985C (CmAddLogForAction.c)
 *     CmEtwRunDown @ 0x1405FB6F4 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1405FB9D4 (CmpEtwDumpKcb.c)
 *     CmpTraceHiveSaveStart @ 0x1405FC160 (CmpTraceHiveSaveStart.c)
 *     CmpDumpKeyBodyList @ 0x1405FF62C (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x140600410 (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140602934 (CmpReportAuditVirtualizationEvent.c)
 *     CmpLoadHiveVolatile @ 0x14060D390 (CmpLoadHiveVolatile.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall CmpFreeTransientPoolWithTag(PVOID P, ULONG Tag)
{
  ExFreePoolWithTag(P, Tag);
}
