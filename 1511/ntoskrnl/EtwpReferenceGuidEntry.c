/*
 * XREFs of EtwpReferenceGuidEntry @ 0x140435FC0
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x140123884 (EtwGetProviderIdFromHandle.c)
 *     EtwpFindGuidEntryByGuid @ 0x140435E90 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddUmRegEntry @ 0x140438150 (EtwpAddUmRegEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     EtwpCreateUmReplyObject @ 0x1404C4A00 (EtwpCreateUmReplyObject.c)
 *     EtwpAddKmRegEntry @ 0x1404CCAA4 (EtwpAddKmRegEntry.c)
 *     EtwpGetNextGuidEntry @ 0x1404CCE6C (EtwpGetNextGuidEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1404CE9C4 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x1404CED18 (EtwpAddGuidEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

char __fastcall EtwpReferenceGuidEntry(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v1; // r8
  signed __int64 v2; // rax

  _m_prefetchw((const void *)(BugCheckParameter2 + 16));
  v1 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 16), v1 + 1, v1);
    if ( v1 == v2 )
      break;
    v1 = v2;
    if ( !v2 )
      return 0;
  }
  if ( v1 < 0 )
    KeBugCheckEx(0x11Du, 9uLL, BugCheckParameter2, 0LL, 0LL);
  return 1;
}
