/*
 * XREFs of ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C01FEFB0
 * Callers:
 *     LoadWallpaperFilenameFromRegistry @ 0x1C010D380 (LoadWallpaperFilenameFromRegistry.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C01D351C (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
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
