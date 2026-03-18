/*
 * XREFs of GdiMultiUserFontCleanup @ 0x1C01291F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?MultiUserGreCleanupAllFonts@@YAXXZ @ 0x1C0129240 (-MultiUserGreCleanupAllFonts@@YAXXZ.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C012AAA4 (-CleanUpEUDC@@YAXXZ.c)
 *     vUnmapFontCacheFile @ 0x1C013C5D4 (vUnmapFontCacheFile.c)
 */

void GdiMultiUserFontCleanup()
{
  __int64 v0; // rcx
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  CleanUpEUDC();
  MultiUserGreCleanupAllFonts();
  if ( ghsemFntCache )
  {
    v1 = ghsemFntCache;
    GreAcquireSemaphore(ghsemFntCache);
    v0 = qword_1C0323DF0;
    if ( qword_1C0323DF0 )
    {
      if ( *(_QWORD *)qword_1C0323DF0 )
      {
        vUnmapFontCacheFile();
        v0 = qword_1C0323DF0;
      }
      Win32FreePool(v0);
      qword_1C0323DF0 = 0LL;
    }
    dword_1C03234B8 = 0;
    SEMOBJ::vUnlock((SEMOBJ *)&v1);
  }
}
