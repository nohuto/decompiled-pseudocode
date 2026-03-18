/*
 * XREFs of CmpSyncKcbCacheForHive @ 0x14065914C
 * Callers:
 *     <none>
 * Callees:
 *     CmpRebuildKcbCache @ 0x1404484A8 (CmpRebuildKcbCache.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140449F10 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpSyncKcbCacheForHive(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( a2 && *(_QWORD *)(a1 + 32) != a2
    || (*(_DWORD *)(a1 + 4) & 0x20000) != 0
    || !*(_QWORD *)(a1 + 32)
    || (*(_BYTE *)(a1 + 186) & 0x10) != 0
    || CmpRebuildKcbCache(a1) )
  {
    return 0LL;
  }
  CmpFlushNotifiesOnKeyBodyList(a1, 0LL, 0);
  v3 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 4) |= 0x20000u;
  CmpRemoveKeyHash(v3, (_DWORD *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = -1LL;
  result = 2LL;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
