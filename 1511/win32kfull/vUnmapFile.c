/*
 * XREFs of vUnmapFile @ 0x1C00D8F10
 * Callers:
 *     vUnmapFontCacheFile @ 0x1C00D8EC8 (vUnmapFontCacheFile.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C027D8E4 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     EngFreeModule @ 0x1C027E460 (EngFreeModule.c)
 *     EngUnmapFontFile @ 0x1C027E660 (EngUnmapFontFile.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00D9028 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     Win32UnmapViewInSessionSpace @ 0x1C01E8BF0 (Win32UnmapViewInSessionSpace.c)
 */

void __fastcall vUnmapFile(PVOID *a1)
{
  Win32UnmapViewInSessionSpace(a1[1]);
  if ( !a1[2] )
    vUnreferenceFileviewSection((struct _FILEVIEW *)a1);
  *((_DWORD *)a1 + 10) &= ~1u;
}
