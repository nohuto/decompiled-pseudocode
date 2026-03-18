/*
 * XREFs of EtwpReferenceGuidEntry @ 0x1404CE3DC
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x14012C584 (EtwGetProviderIdFromHandle.c)
 *     EtwpFindGuidEntryByGuid @ 0x1404CE270 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddUmRegEntry @ 0x1404CEB68 (EtwpAddUmRegEntry.c)
 *     EtwpGetNextGuidEntry @ 0x1404D0D3C (EtwpGetNextGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x1404D1618 (EtwpAddRegEntryToGroup.c)
 *     EtwpAddGuidEntry @ 0x1404D4348 (EtwpAddGuidEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1404D5F80 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 *     EtwpCreateUmReplyObject @ 0x14055B78C (EtwpCreateUmReplyObject.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
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
