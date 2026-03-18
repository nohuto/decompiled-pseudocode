/*
 * XREFs of bInitCacheTable @ 0x14031B73C
 * Callers:
 *     ?FNTCachepInit@@YAXPEBG@Z @ 0x1401C5E88 (-FNTCachepInit@@YAXPEBG@Z.c)
 * Callees:
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x1401C676C (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 *     vUnmapFontCacheFile @ 0x14031BA80 (vUnmapFontCacheFile.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bInitCacheTable(int a1, __int64 a2, _OWORD *a3, int a4)
{
  __int64 v4; // r15
  int v5; // r14d
  int v7; // ebp
  unsigned int v9; // edi
  int v10; // ebx
  __int64 v11; // rsi
  void *v12; // rcx
  __int64 v13; // rcx

  v4 = (unsigned int)(a1 + a2 + 200);
  v5 = (_DWORD)a2 << 11;
  v7 = 768 * a1;
  v9 = 0;
  v10 = 768 * a1 + ((_DWORD)a2 << 11) + ((80 * v4 + 327) & 0xFFFFFFF8);
  v11 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  if ( *(_QWORD *)(*(_QWORD *)(v11 + 19592) + 8LL) )
    vUnmapFontCacheFile();
  v12 = *(void **)(*(_QWORD *)(v11 + 19592) + 104LL);
  if ( v12 )
  {
    ZwClose(v12);
    *(_QWORD *)(*(_QWORD *)(v11 + 19592) + 104LL) = 0LL;
  }
  if ( (unsigned int)bMapFileRetainHandle(**(unsigned __int16 ***)(v11 + 19592), *(_QWORD *)(v11 + 19592) + 56LL, v10) )
  {
    *(_QWORD *)(*(_QWORD *)(v11 + 19592) + 8LL) = *(_QWORD *)(*(_QWORD *)(v11 + 19592) + 64LL);
    memset_0((void *)(*(_QWORD *)(*(_QWORD *)(v11 + 19592) + 8LL) + 72LL), 255, 0xF4uLL);
    memset_0((void *)(*(_QWORD *)(*(_QWORD *)(v11 + 19592) + 8LL) + 320LL), 0, 80 * v4);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 19592) + 8LL) + 4LL) = 1;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 19592) + 8LL) + 8LL) = a4;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 19592) + 8LL) + 12LL) = v4;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 19592) + 8LL) + 16LL) = 0;
    **(_DWORD **)(*(_QWORD *)(v11 + 19592) + 8LL) = 0;
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 19592) + 8LL);
    *(_OWORD *)(v13 + 40) = *a3;
    *(_OWORD *)(v13 + 56) = a3[1];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 19592) + 8LL) + 20LL) = v10;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 19592) + 8LL) + 24LL) = (unsigned int)(v5 + v7);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 19592) + 8LL) + 32LL) = 0;
    return 1;
  }
  return v9;
}
