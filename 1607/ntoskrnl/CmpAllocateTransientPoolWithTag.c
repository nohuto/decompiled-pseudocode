/*
 * XREFs of CmpAllocateTransientPoolWithTag @ 0x140087418
 * Callers:
 *     CmpStartKcbStack @ 0x1404050C0 (CmpStartKcbStack.c)
 *     CmpConstructNameWithStatus @ 0x140437710 (CmpConstructNameWithStatus.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140438760 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpParseKey @ 0x14043BF00 (CmpParseKey.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpAddToHiveFileList @ 0x14049CE58 (CmpAddToHiveFileList.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140602B50 (CmpSnapshotKcbStackSecurity.c)
 *     CmpDoReadTxRBigLogRecord @ 0x140605378 (CmpDoReadTxRBigLogRecord.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14060A760 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpGetValueForAudit @ 0x14060B354 (CmpGetValueForAudit.c)
 *     CmpStartKeyNodeStack @ 0x14060BF6C (CmpStartKeyNodeStack.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CmpAllocateTransientPoolWithTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithTag(PagedPool, a2, a3);
}
