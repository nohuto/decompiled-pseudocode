/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x14052F6D4
 * Callers:
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x1407A4334 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x14052F710 (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap(&stru_1403270A8 + v0, 0LL) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
