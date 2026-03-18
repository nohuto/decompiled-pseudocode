/*
 * XREFs of bInitCacheTable @ 0x1C015B4F8
 * Callers:
 *     InitFNTCache @ 0x1C013D3F0 (InitFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C013C5D4 (vUnmapFontCacheFile.c)
 *     bMapFile @ 0x1C013CA40 (bMapFile.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall bInitCacheTable(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v7; // r15d
  __int64 v9; // rdx
  unsigned int v10; // r15d
  int v11; // r14d
  unsigned int v12; // esi
  int v13; // ebp
  int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // rcx

  v7 = a2 + 200;
  v9 = qword_1C0323DF0;
  v10 = a1 + v7;
  v11 = 768 * a1;
  v12 = 0;
  v13 = a2 << 11;
  v14 = v13 + 768 * a1 + ((28 * v10 + 323) & 0xFFFFFFF8);
  if ( *(_QWORD *)qword_1C0323DF0 )
  {
    vUnmapFontCacheFile();
    v9 = qword_1C0323DF0;
  }
  if ( (unsigned int)bMapFile(L"\\SystemRoot\\system32\\FNTCACHE.DAT", (_OWORD *)(v9 + 96), v14, 0LL) )
  {
    v15 = qword_1C0323DF0;
    v16 = *(_QWORD *)(qword_1C0323DF0 + 104);
    *(_QWORD *)qword_1C0323DF0 = v16;
    memset((void *)(v16 + 72), 255, 0xF4uLL);
    memset((void *)(*(_QWORD *)v15 + 316LL), 0, 28LL * v10);
    *(_DWORD *)(*(_QWORD *)v15 + 12LL) = a7;
    *(_DWORD *)(*(_QWORD *)v15 + 16LL) = v10;
    *(_DWORD *)(*(_QWORD *)v15 + 20LL) = 0;
    **(_DWORD **)v15 = 0;
    *(_QWORD *)(*(_QWORD *)v15 + 56LL) = a3;
    *(_QWORD *)(*(_QWORD *)v15 + 64LL) = a4;
    *(_QWORD *)(*(_QWORD *)v15 + 40LL) = a5;
    *(_QWORD *)(*(_QWORD *)v15 + 48LL) = a6;
    *(_DWORD *)(*(_QWORD *)v15 + 24LL) = v14;
    *(_QWORD *)(*(_QWORD *)v15 + 28LL) = (unsigned int)(v11 + v13);
    *(_DWORD *)(*(_QWORD *)v15 + 36LL) = 0;
    return 1;
  }
  return v12;
}
