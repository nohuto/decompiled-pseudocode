/*
 * XREFs of ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C01F6734
 * Callers:
 *     LoadWallpaperFilenameFromRegistry @ 0x1C012E7F4 (LoadWallpaperFilenameFromRegistry.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C01CB81C (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall GetDefaultWallpaperName(char *a1, unsigned int a2)
{
  __int64 v3; // rbx
  wchar_t *v4; // r8
  _NT_PRODUCT_TYPE ProductType; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  RtlGetNtProductType(&ProductType);
  v4 = L"winnt";
  if ( ProductType != NtProductWinNt )
    v4 = (wchar_t *)L"lanmannt";
  RtlStringCchCopyW(a1, (unsigned int)v3, (char *)v4);
  if ( *(unsigned __int8 *)(gpsi + 8680LL) * *(unsigned __int8 *)(gpsi + 8681LL) > 4 )
    RtlStringCchCatW((unsigned __int16 *)a1, v3, (char *)L"256");
}
