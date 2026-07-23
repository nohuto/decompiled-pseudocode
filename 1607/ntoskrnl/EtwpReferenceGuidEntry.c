/*
 * XREFs of EtwpReferenceGuidEntry @ 0x14040D460
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x1400AE054 (EtwGetProviderIdFromHandle.c)
 *     EtwpGetNextGuidEntry @ 0x14040B164 (EtwpGetNextGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14040B73C (EtwpAddRegEntryToGroup.c)
 *     EtwpAddUmRegEntry @ 0x14040C99C (EtwpAddUmRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x14040D350 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddGuidEntry @ 0x14048E090 (EtwpAddGuidEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1404924A0 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddKmRegEntry @ 0x140492DF0 (EtwpAddKmRegEntry.c)
 *     EtwpCreateUmReplyObject @ 0x1404D182C (EtwpCreateUmReplyObject.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
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
