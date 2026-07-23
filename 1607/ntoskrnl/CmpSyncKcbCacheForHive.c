/*
 * XREFs of CmpSyncKcbCacheForHive @ 0x140601A44
 * Callers:
 *     <none>
 * Callees:
 *     CmpRebuildKcbCache @ 0x1403FC920 (CmpRebuildKcbCache.c)
 *     CmpIsKeyDeleted @ 0x140403EF0 (CmpIsKeyDeleted.c)
 */

__int64 __fastcall CmpSyncKcbCacheForHive(ULONG_PTR a1, __int64 a2)
{
  if ( (!a2 || *(_QWORD *)(a1 + 24) == a2)
    && !(unsigned __int8)CmpIsKeyDeleted(a1, 0LL)
    && *(_QWORD *)(a1 + 24)
    && (*(_BYTE *)(a1 + 178) & 0x10) == 0 )
  {
    CmpRebuildKcbCache(a1);
  }
  return 0LL;
}
