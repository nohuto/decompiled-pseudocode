/*
 * XREFs of vUnmapFontCacheFile @ 0x1C00EBBF4
 * Callers:
 *     InitFNTCache @ 0x1C00BBB20 (InitFNTCache.c)
 *     CloseFNTCache @ 0x1C00EB248 (CloseFNTCache.c)
 *     GdiMultiUserFontCleanup @ 0x1C0107B40 (GdiMultiUserFontCleanup.c)
 *     bReAllocCacheFile @ 0x1C0157ED4 (bReAllocCacheFile.c)
 *     bInitCacheTable @ 0x1C01587D4 (bInitCacheTable.c)
 * Callees:
 *     vUnmapFile @ 0x1C00EBC3C (vUnmapFile.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

void *vUnmapFontCacheFile()
{
  _QWORD *v0; // rbx
  void *result; // rax

  if ( *(_QWORD *)(qword_1C0328CC8 + 128) )
  {
    if ( *(_QWORD *)qword_1C0328CC8 )
    {
      vUnmapFile((struct _FILEVIEW *)(qword_1C0328CC8 + 96));
      v0 = (_QWORD *)qword_1C0328CC8;
      result = memset((void *)(qword_1C0328CC8 + 96), 0, 0x50uLL);
      *v0 = 0LL;
    }
  }
  return result;
}
