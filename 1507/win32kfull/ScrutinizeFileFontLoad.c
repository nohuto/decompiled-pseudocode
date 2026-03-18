/*
 * XREFs of ScrutinizeFileFontLoad @ 0x1C025E158
 * Callers:
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00AE1DC (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ScrutinizeFileFontLoad(const unsigned __int16 *a1)
{
  return ScrutinizeFontLoad(0, a1);
}
