/*
 * XREFs of vUnmapFontCacheFile @ 0x1C013C5D4
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C01291F0 (GdiMultiUserFontCleanup.c)
 *     CloseFNTCache @ 0x1C013B9F0 (CloseFNTCache.c)
 *     InitFNTCache @ 0x1C013D3F0 (InitFNTCache.c)
 *     bReAllocCacheFile @ 0x1C015A00C (bReAllocCacheFile.c)
 *     bInitCacheTable @ 0x1C015B4F8 (bInitCacheTable.c)
 * Callees:
 *     vUnmapFile @ 0x1C013C61C (vUnmapFile.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void *vUnmapFontCacheFile()
{
  _QWORD *v0; // rbx
  void *result; // rax

  if ( *(_QWORD *)(qword_1C0323DF0 + 128) )
  {
    if ( *(_QWORD *)qword_1C0323DF0 )
    {
      vUnmapFile((struct _FILEVIEW *)(qword_1C0323DF0 + 96));
      v0 = (_QWORD *)qword_1C0323DF0;
      result = memset((void *)(qword_1C0323DF0 + 96), 0, 0x50uLL);
      *v0 = 0LL;
    }
  }
  return result;
}
