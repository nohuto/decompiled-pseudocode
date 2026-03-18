/*
 * XREFs of GdiMultiUserFontCleanup @ 0x1C0107B40
 * Callers:
 *     <none>
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C00EBBF4 (vUnmapFontCacheFile.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?MultiUserGreCleanupAllFonts@@YAXXZ @ 0x1C0107B90 (-MultiUserGreCleanupAllFonts@@YAXXZ.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C0107CD8 (-CleanUpEUDC@@YAXXZ.c)
 */

void GdiMultiUserFontCleanup()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  CleanUpEUDC();
  MultiUserGreCleanupAllFonts();
  if ( ghsemFntCache )
  {
    v3 = ghsemFntCache;
    GreAcquireSemaphore(ghsemFntCache);
    v2 = qword_1C0328CC8;
    if ( qword_1C0328CC8 )
    {
      if ( *(_QWORD *)qword_1C0328CC8 )
      {
        vUnmapFontCacheFile();
        v2 = qword_1C0328CC8;
      }
      Win32FreePool(v2, v0, v1);
      qword_1C0328CC8 = 0LL;
    }
    dword_1C0328CC0 = 0;
    SEMOBJ::vUnlock((SEMOBJ *)&v3);
  }
}
