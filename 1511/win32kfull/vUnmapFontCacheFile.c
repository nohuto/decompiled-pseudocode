/*
 * XREFs of vUnmapFontCacheFile @ 0x1C00D8EC8
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C000D8E0 (GdiMultiUserFontCleanup.c)
 *     InitFNTCache @ 0x1C00D4190 (InitFNTCache.c)
 *     CloseFNTCache @ 0x1C00D703C (CloseFNTCache.c)
 *     bReAllocCacheFile @ 0x1C01500F4 (bReAllocCacheFile.c)
 *     bInitCacheTable @ 0x1C0150CDC (bInitCacheTable.c)
 * Callees:
 *     vUnmapFile @ 0x1C00D8F10 (vUnmapFile.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void *vUnmapFontCacheFile()
{
  _QWORD *v0; // rbx
  void *result; // rax

  if ( *(_QWORD *)(qword_1C0323628 + 128) )
  {
    if ( *(_QWORD *)qword_1C0323628 )
    {
      vUnmapFile((struct _FILEVIEW *)(qword_1C0323628 + 96));
      v0 = (_QWORD *)qword_1C0323628;
      result = memset((void *)(qword_1C0323628 + 96), 0, 0x50uLL);
      *v0 = 0LL;
    }
  }
  return result;
}
