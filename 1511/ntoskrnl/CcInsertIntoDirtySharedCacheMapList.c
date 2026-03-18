/*
 * XREFs of CcInsertIntoDirtySharedCacheMapList @ 0x1400AFA68
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14001FFA0 (CcSetDirtyPinnedData.c)
 *     CcUninitializeCacheMap @ 0x1400AEF70 (CcUninitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x1400B0530 (CcWriteBehindInternal.c)
 *     CcDecrementOpenCount @ 0x1400B0D78 (CcDecrementOpenCount.c)
 *     CcSetDirtyInMask @ 0x1400B2DE0 (CcSetDirtyInMask.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CcInsertIntoDirtySharedCacheMapList(__int64 a1)
{
  __int64 *v1; // rax
  __int64 *v2; // r8
  __int64 **v3; // rdx
  __int64 **v4; // rdx
  __int64 *result; // rax
  __int64 v6; // rdx
  __int64 **v7; // rcx
  __int64 **v8; // rcx

  if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 )
  {
    v1 = (__int64 *)(a1 + 120);
    v2 = *(__int64 **)(a1 + 120);
    v3 = *(__int64 ***)(a1 + 128);
    if ( v2[1] != a1 + 120 || *v3 != v1 )
      __fastfail(3u);
    *v3 = v2;
    v2[1] = (__int64)v3;
    v4 = (__int64 **)qword_1402FD998;
    *v1 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
    *(_QWORD *)(a1 + 128) = v4;
    if ( *v4 != &CcDirtySharedCacheMapWithLogHandleList )
      __fastfail(3u);
    *v4 = v1;
    qword_1402FD998 = a1 + 120;
  }
  result = (__int64 *)(a1 + 136);
  v6 = *(_QWORD *)(a1 + 136);
  v7 = *(__int64 ***)(a1 + 144);
  if ( *(__int64 **)(v6 + 8) != result || *v7 != result )
    __fastfail(3u);
  *v7 = (__int64 *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = (__int64 **)qword_1402FD9C8;
  *result = (__int64)&CcLazyWriterCursor;
  result[1] = (__int64)v8;
  if ( *v8 != &CcLazyWriterCursor )
    __fastfail(3u);
  *v8 = result;
  qword_1402FD9C8 = (__int64)result;
  return result;
}
