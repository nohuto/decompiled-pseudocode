/*
 * XREFs of xxxInvalidateWallpaperWindow @ 0x1C0113AC8
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 */

void xxxInvalidateWallpaperWindow()
{
  __int64 v0; // rax
  __int64 v1; // rax
  struct tagWND *v2; // rcx

  v0 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v0 )
  {
    v1 = *(_QWORD *)(v0 + 8);
    v2 = *(struct tagWND **)(v1 + 176);
    if ( v2 || (v2 = *(struct tagWND **)(v1 + 16)) != 0LL )
      xxxInternalInvalidate(v2, (HRGN)1, 0x405u);
  }
}
