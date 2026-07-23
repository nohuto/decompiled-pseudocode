/*
 * XREFs of CcInsertIntoCleanSharedCacheMapList @ 0x1400C9B88
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x1400C9C60 (CcAcquireByteRangeForWrite.c)
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 *     CcInitializeCacheMapEx @ 0x1400E62E0 (CcInitializeCacheMapEx.c)
 * Callees:
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 */

_QWORD *__fastcall CcInsertIntoCleanSharedCacheMapList(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *result; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx

  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && !*(_DWORD *)(a1 + 4) && !*(_DWORD *)(a1 + 112) )
  {
    DbgPrint("CC: SharedCacheMap->OpenCount == 0 && DirtyPages == 0 && going onto CleanList!\n");
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 )
  {
    v2 = (_QWORD *)(a1 + 120);
    v3 = *(_QWORD *)(a1 + 120);
    v4 = *(_QWORD **)(a1 + 128);
    if ( *(_QWORD *)(v3 + 8) != a1 + 120 || (_QWORD *)*v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = (_QWORD *)qword_140322FB8;
    if ( *(__int64 **)qword_140322FB8 != &CcCleanSharedCacheMapWithLogHandleList )
      __fastfail(3u);
    *v2 = &CcCleanSharedCacheMapWithLogHandleList;
    *(_QWORD *)(a1 + 128) = v5;
    *v5 = v2;
    qword_140322FB8 = a1 + 120;
  }
  result = (_QWORD *)(a1 + 136);
  v7 = *(_QWORD *)(a1 + 136);
  v8 = *(_QWORD **)(a1 + 144);
  if ( *(_QWORD *)(v7 + 8) != a1 + 136 || (_QWORD *)*v8 != result )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  v9 = (_QWORD *)qword_140322FC8;
  if ( *(__int64 **)qword_140322FC8 != &CcCleanSharedCacheMapList )
    __fastfail(3u);
  *result = &CcCleanSharedCacheMapList;
  *(_QWORD *)(a1 + 144) = v9;
  *v9 = result;
  qword_140322FC8 = a1 + 136;
  return result;
}
