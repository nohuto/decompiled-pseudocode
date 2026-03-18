/*
 * XREFs of ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C01FEBB0
 * Callers:
 *     LoadWallpaperFilenameFromRegistry @ 0x1C0152530 (LoadWallpaperFilenameFromRegistry.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C01D1A68 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall GetDefaultWallpaperName(char *a1, unsigned int a2)
{
  __int64 v2; // rbx
  wchar_t *v4; // r8

  v2 = a2;
  v4 = L"winnt";
  if ( MEMORY[0xFFFFF78000000264] != 1 )
    v4 = (wchar_t *)L"lanmannt";
  RtlStringCchCopyW(a1, a2, (char *)v4);
  if ( *(unsigned __int8 *)(gpsi + 7288LL) * *(unsigned __int8 *)(gpsi + 7289LL) > 4 )
    RtlStringCchCatW((unsigned __int16 *)a1, v2, (char *)L"256");
}
