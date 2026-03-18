/*
 * XREFs of ?vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z @ 0x1400D3D14
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 * Callees:
 *     ?UnmapViewOfSectionFromFontDriverProcess@@YAXPEAUFILEVIEW@@@Z @ 0x1400D3D54 (-UnmapViewOfSectionFromFontDriverProcess@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x1400D3DA0 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 */

void __fastcall vUnmapFileFD(struct FILEVIEW *a1, char a2)
{
  UnmapViewOfSectionFromFontDriverProcess(a1);
  if ( !*((_QWORD *)a1 + 1) && a2 )
    vUnreferenceFileviewSection(a1);
  *((_DWORD *)a1 + 10) &= ~1u;
}
