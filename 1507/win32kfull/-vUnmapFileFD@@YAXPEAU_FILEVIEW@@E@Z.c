/*
 * XREFs of ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C00F195C
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1C00B1728 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00B18E0 (EngUnmapFontFileFD.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00F19B0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z @ 0x1C02B9930 (-MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z.c)
 */

void __fastcall vUnmapFileFD(struct _FILEVIEW *a1, char a2)
{
  if ( (*((_DWORD *)a1 + 10) & 0x20) != 0 )
    UmfdHostLifeTimeManager::MmUnmapViewOfSection(*((void **)a1 + 2), *((_QWORD *)a1 + 9));
  else
    MmUnmapViewOfSection(gpepCSRSS, *((_QWORD *)a1 + 2));
  if ( !*((_QWORD *)a1 + 1) && a2 )
    vUnreferenceFileviewSection(a1);
  *((_DWORD *)a1 + 10) &= ~1u;
}
