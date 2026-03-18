/*
 * XREFs of GdiMultiUserFontCleanup @ 0x1C000D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C000D930 (-CleanUpEUDC@@YAXXZ.c)
 *     ?MultiUserGreCleanupAllFonts@@YAXXZ @ 0x1C000DA2C (-MultiUserGreCleanupAllFonts@@YAXXZ.c)
 *     vUnmapFontCacheFile @ 0x1C00D8EC8 (vUnmapFontCacheFile.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
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
    v0 = qword_1C0323628;
    if ( qword_1C0323628 )
    {
      if ( *(_QWORD *)qword_1C0323628 )
      {
        vUnmapFontCacheFile();
        v0 = qword_1C0323628;
      }
      Win32FreePool(v0);
      qword_1C0323628 = 0LL;
    }
    dword_1C0323620 = 0;
    SEMOBJ::vUnlock((SEMOBJ *)&v1);
  }
}
