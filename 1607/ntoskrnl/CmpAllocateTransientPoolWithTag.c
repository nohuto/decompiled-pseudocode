/*
 * XREFs of CmpAllocateTransientPoolWithTag @ 0x1400B0B88
 * Callers:
 *     CmpStartKcbStack @ 0x140403F80 (CmpStartKcbStack.c)
 *     CmpConstructNameWithStatus @ 0x1404365E0 (CmpConstructNameWithStatus.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140437630 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpParseKey @ 0x14043ADD0 (CmpParseKey.c)
 *     CmQueryValueKey @ 0x14043E2F0 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpAddToHiveFileList @ 0x1404CD0D8 (CmpAddToHiveFileList.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140602C04 (CmpSnapshotKcbStackSecurity.c)
 *     CmpDoReadTxRBigLogRecord @ 0x14060542C (CmpDoReadTxRBigLogRecord.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14060A814 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpGetValueForAudit @ 0x14060B408 (CmpGetValueForAudit.c)
 *     CmpStartKeyNodeStack @ 0x14060C020 (CmpStartKeyNodeStack.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CmpAllocateTransientPoolWithTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithTag(PagedPool, a2, a3);
}
