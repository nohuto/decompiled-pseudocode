/*
 * XREFs of vUnmapFontCacheFile @ 0x14031BA80
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1401C6398 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bInitCacheTable @ 0x14031B73C (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x14031B914 (bReAllocCacheFile.c)
 * Callees:
 *     ?vUnmapFile@@YAXPEAUFILEVIEW@@H@Z @ 0x140265250 (-vUnmapFile@@YAXPEAUFILEVIEW@@H@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

_QWORD *__fastcall vUnmapFontCacheFile(int a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *result; // rax
  __int64 v4; // rbx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  result = *(_QWORD **)(v2 + 19592);
  if ( result[11] )
  {
    if ( result[1] )
    {
      v4 = result[13];
      result[13] = 0LL;
      vUnmapFile((struct FILEVIEW *)(*(_QWORD *)(v2 + 19592) + 56LL));
      memset_0((void *)(*(_QWORD *)(v2 + 19592) + 56LL), 0, 0x50uLL);
      *(_QWORD *)(*(_QWORD *)(v2 + 19592) + 104LL) = v4;
      result = *(_QWORD **)(v2 + 19592);
      result[1] = 0LL;
    }
  }
  return result;
}
