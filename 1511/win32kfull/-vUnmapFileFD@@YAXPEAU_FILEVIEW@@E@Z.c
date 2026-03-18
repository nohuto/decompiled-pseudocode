/*
 * XREFs of ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C00D8FD4
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1C00A9F68 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00AA120 (EngUnmapFontFileFD.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00D9028 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z @ 0x1C02B8D0C (-MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z.c)
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
