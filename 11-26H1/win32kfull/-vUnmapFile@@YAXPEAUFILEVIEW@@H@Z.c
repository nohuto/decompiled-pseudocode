/*
 * XREFs of ?vUnmapFile@@YAXPEAUFILEVIEW@@H@Z @ 0x140265250
 * Callers:
 *     vUnmapFontCacheFile @ 0x14031BA80 (vUnmapFontCacheFile.c)
 *     EngFreeModule @ 0x14031C020 (EngFreeModule.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x14031CB80 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     EngUnmapFontFile @ 0x14031D6F0 (EngUnmapFontFile.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x1400D3DA0 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 */

void __fastcall vUnmapFile(struct FILEVIEW *a1)
{
  struct NETWORKED_FONT_FILE_NODE *v2; // rdx
  _QWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+40h] [rbp-18h]

  v3[0] = 0LL;
  v3[1] = 0LL;
  v3[2] = *((_QWORD *)a1 + 1);
  v3[3] = 0LL;
  v4 = 3;
  Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v3);
  if ( !*((_QWORD *)a1 + 2) )
    vUnreferenceFileviewSection(a1, v2);
  *((_DWORD *)a1 + 10) &= ~1u;
  if ( v4 != 6 )
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v3);
}
