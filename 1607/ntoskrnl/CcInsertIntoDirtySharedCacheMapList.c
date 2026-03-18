/*
 * XREFs of CcInsertIntoDirtySharedCacheMapList @ 0x1400709A0
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14006F270 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14006F660 (CcSetDirtyInMask.c)
 *     CcUninitializeCacheMap @ 0x1400705C0 (CcUninitializeCacheMap.c)
 *     CcDecrementOpenCount @ 0x140073698 (CcDecrementOpenCount.c)
 *     CcWriteBehindInternal @ 0x1400E7F30 (CcWriteBehindInternal.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CcInsertIntoDirtySharedCacheMapList(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // r8
  _QWORD *v3; // rdx
  _QWORD *v4; // rdx
  _QWORD *result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx

  if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 )
  {
    v1 = (_QWORD *)(a1 + 120);
    v2 = *(_QWORD *)(a1 + 120);
    v3 = *(_QWORD **)(a1 + 128);
    if ( *(_QWORD *)(v2 + 8) != a1 + 120 || (_QWORD *)*v3 != v1 )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    v4 = (_QWORD *)qword_140322FB8;
    if ( *(__int64 **)qword_140322FB8 != &CcDirtySharedCacheMapWithLogHandleList )
      __fastfail(3u);
    *v1 = &CcDirtySharedCacheMapWithLogHandleList;
    *(_QWORD *)(a1 + 128) = v4;
    *v4 = v1;
    qword_140322FB8 = a1 + 120;
  }
  result = (_QWORD *)(a1 + 136);
  v6 = *(_QWORD *)(a1 + 136);
  v7 = *(_QWORD **)(a1 + 144);
  if ( *(_QWORD **)(v6 + 8) != result || (_QWORD *)*v7 != result )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = (_QWORD *)qword_140322FE8;
  if ( *(__int64 **)qword_140322FE8 != &CcLazyWriterCursor )
    __fastfail(3u);
  *result = &CcLazyWriterCursor;
  result[1] = v8;
  *v8 = result;
  qword_140322FE8 = (__int64)result;
  return result;
}
