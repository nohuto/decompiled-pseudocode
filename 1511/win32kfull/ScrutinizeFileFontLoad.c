/*
 * XREFs of ScrutinizeFileFontLoad @ 0x1C025DCA8
 * Callers:
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00A68E4 (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ScrutinizeFileFontLoad(const WCHAR *a1)
{
  return ScrutinizeFontLoad(0, a1);
}
