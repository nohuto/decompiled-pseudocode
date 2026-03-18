/*
 * XREFs of bReAllocCacheFile @ 0x1C01500F4
 * Callers:
 *     EngFntCacheAlloc @ 0x1C014FE90 (EngFntCacheAlloc.c)
 * Callees:
 *     bMapFile @ 0x1C00D48C4 (bMapFile.c)
 *     vUnmapFontCacheFile @ 0x1C00D8EC8 (vUnmapFontCacheFile.c)
 */

__int64 __fastcall bReAllocCacheFile(int a1)
{
  __int64 v1; // r8
  unsigned int v2; // ebx
  int v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // ebp
  int v6; // r14d
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax

  v1 = qword_1C0323628;
  v2 = 0;
  if ( (*(_DWORD *)(qword_1C0323628 + 16) & 4) != 0 )
    return 0LL;
  v3 = *(_DWORD *)(*(_QWORD *)qword_1C0323628 + 24LL);
  v4 = ((*(_DWORD *)(qword_1C0323628 + 32) - *(_DWORD *)(qword_1C0323628 + 40) + a1 + 7) & 0xFFFFFFF8) + 0x2000;
  v5 = *(_DWORD *)(qword_1C0323628 + 24) - *(_QWORD *)qword_1C0323628;
  v6 = v4 + v3;
  if ( *(_QWORD *)qword_1C0323628 )
  {
    vUnmapFontCacheFile();
    v1 = qword_1C0323628;
  }
  if ( (unsigned int)bMapFile(L"\\SystemRoot\\system32\\FNTCACHE.DAT", (_OWORD *)(v1 + 96), v6, 0LL) )
  {
    v7 = qword_1C0323628;
    v2 = 1;
    v8 = *(_QWORD *)(qword_1C0323628 + 104);
    *(_QWORD *)qword_1C0323628 = v8;
    *(_DWORD *)(v8 + 24) = v6;
    *(_DWORD *)(*(_QWORD *)v7 + 32LL) += v4;
    v9 = *(_QWORD *)v7;
    v10 = *(_QWORD *)v7 + v5;
    v11 = v10 + (unsigned int)(*(_DWORD *)(v7 + 32) - *(_DWORD *)(v7 + 24));
    *(_QWORD *)(v7 + 24) = v10;
    *(_QWORD *)(v7 + 32) = v11;
    *(_QWORD *)(v7 + 40) = v10 + *(unsigned int *)(v9 + 32) + *(unsigned int *)(v9 + 28);
  }
  else
  {
    v13 = bMapFile(L"\\SystemRoot\\system32\\FNTCACHE.DAT", (_OWORD *)(qword_1C0323628 + 96), v3, 0LL);
    v14 = qword_1C0323628;
    if ( v13 )
    {
      v15 = *(_QWORD *)(qword_1C0323628 + 104);
      *(_DWORD *)(qword_1C0323628 + 16) |= 6u;
      *(_QWORD *)v14 = v15;
      *(_DWORD *)(v14 + 88) = 1;
    }
    else
    {
      *(_DWORD *)(qword_1C0323628 + 16) |= 1u;
    }
  }
  return v2;
}
