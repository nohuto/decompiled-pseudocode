/*
 * XREFs of vUnmapFile @ 0x1C013C61C
 * Callers:
 *     vUnmapFontCacheFile @ 0x1C013C5D4 (vUnmapFontCacheFile.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C027DEF4 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     EngFreeModule @ 0x1C027EA70 (EngFreeModule.c)
 *     EngUnmapFontFile @ 0x1C027EC70 (EngUnmapFontFile.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00F19B0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     Win32UnmapViewInSessionSpace @ 0x1C01E85C0 (Win32UnmapViewInSessionSpace.c)
 */

void __fastcall vUnmapFile(PVOID *a1)
{
  Win32UnmapViewInSessionSpace(a1[1]);
  if ( !a1[2] )
    vUnreferenceFileviewSection((struct _FILEVIEW *)a1);
  *((_DWORD *)a1 + 10) &= ~1u;
}
