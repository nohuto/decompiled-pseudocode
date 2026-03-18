/*
 * XREFs of bReAllocCacheFile @ 0x14031B914
 * Callers:
 *     EngFntCacheAllocInternal @ 0x14029054C (EngFntCacheAllocInternal.c)
 * Callees:
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x1401C676C (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 *     vUnmapFontCacheFile @ 0x14031BA80 (vUnmapFontCacheFile.c)
 */

__int64 __fastcall bReAllocCacheFile(int a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v7; // rdx
  int v8; // esi
  unsigned int v9; // r15d
  unsigned int v10; // ebp
  int v11; // r14d
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx

  v3 = 0;
  v4 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v5 = *(_QWORD *)(v4 + 19592);
  if ( (*(_DWORD *)(v5 + 24) & 4) != 0 )
    return 0LL;
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_DWORD *)(v7 + 20);
  v9 = ((a1 + 7 + *(_DWORD *)(v5 + 40) - *(_DWORD *)(v5 + 48)) & 0xFFFFFFF8) + 0x2000;
  v10 = *(_DWORD *)(v5 + 32) - v7;
  v11 = v8 + v9;
  if ( v7 )
    vUnmapFontCacheFile();
  v12 = bMapFileRetainHandle(**(unsigned __int16 ***)(v4 + 19592), *(_QWORD *)(v4 + 19592) + 56LL, v11);
  v13 = *(_QWORD *)(v4 + 19592);
  if ( v12 )
  {
    v3 = 1;
    *(_QWORD *)(v13 + 8) = *(_QWORD *)(v13 + 64);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 19592) + 8LL) + 20LL) = v11;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 19592) + 8LL) + 28LL) += v9;
    v14 = *(_QWORD *)(v4 + 19592);
    v15 = (unsigned int)(*(_DWORD *)(v14 + 40) - *(_DWORD *)(v14 + 32));
    *(_QWORD *)(v14 + 32) = *(_QWORD *)(v14 + 8) + v10;
    *(_QWORD *)(*(_QWORD *)(v4 + 19592) + 40LL) = *(_QWORD *)(*(_QWORD *)(v4 + 19592) + 32LL) + v15;
    *(_QWORD *)(*(_QWORD *)(v4 + 19592) + 48LL) = *(_QWORD *)(*(_QWORD *)(v4 + 19592) + 32LL)
                                                + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v4 + 19592) + 8LL) + 24LL)
                                                + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v4 + 19592)
                                                                                                + 8LL)
                                                                                    + 28LL);
  }
  else
  {
    v16 = bMapFileRetainHandle(*(unsigned __int16 **)v13, v13 + 56, v8);
    v17 = *(_QWORD *)(v4 + 19592);
    if ( v16 )
    {
      *(_QWORD *)(v17 + 8) = *(_QWORD *)(v17 + 64);
      *(_DWORD *)(*(_QWORD *)(v4 + 19592) + 28LL) = 1;
      *(_DWORD *)(*(_QWORD *)(v4 + 19592) + 24LL) |= 6u;
    }
    else
    {
      *(_DWORD *)(v17 + 24) |= 1u;
    }
  }
  return v3;
}
