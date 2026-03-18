/*
 * XREFs of CcInsertIntoCleanSharedCacheMapList @ 0x1400B0CB0
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14000DA70 (CcAcquireByteRangeForWrite.c)
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 * Callees:
 *     DbgPrint @ 0x1400E696C (DbgPrint.c)
 */

__int64 *__fastcall CcInsertIntoCleanSharedCacheMapList(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rdx
  __int64 **v4; // rcx
  __int64 **v5; // rcx
  __int64 *result; // rax
  __int64 *v7; // rdx
  __int64 **v8; // rcx
  __int64 **v9; // rcx

  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && !*(_DWORD *)(a1 + 4) && !*(_DWORD *)(a1 + 112) )
  {
    DbgPrint("CC: SharedCacheMap->OpenCount == 0 && DirtyPages == 0 && going onto CleanList!\n");
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 )
  {
    v2 = (__int64 *)(a1 + 120);
    v3 = *(__int64 **)(a1 + 120);
    v4 = *(__int64 ***)(a1 + 128);
    if ( v3[1] != a1 + 120 || *v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = (__int64)v4;
    v5 = (__int64 **)qword_1402FD978;
    *v2 = (__int64)&CcCleanSharedCacheMapWithLogHandleList;
    *(_QWORD *)(a1 + 128) = v5;
    if ( *v5 != &CcCleanSharedCacheMapWithLogHandleList )
      __fastfail(3u);
    *v5 = v2;
    qword_1402FD978 = a1 + 120;
  }
  result = (__int64 *)(a1 + 136);
  v7 = *(__int64 **)(a1 + 136);
  v8 = *(__int64 ***)(a1 + 144);
  if ( v7[1] != a1 + 136 || *v8 != result )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = (__int64)v8;
  v9 = (__int64 **)qword_1402FD988;
  *result = (__int64)&CcCleanSharedCacheMapList;
  *(_QWORD *)(a1 + 144) = v9;
  if ( *v9 != &CcCleanSharedCacheMapList )
    __fastfail(3u);
  *v9 = result;
  qword_1402FD988 = a1 + 136;
  return result;
}
