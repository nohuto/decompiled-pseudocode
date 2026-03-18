/*
 * XREFs of ?GetLegacyBitmapSource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180190430
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetLegacyBitmapSource@CD2DBitmapCache@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180132CC0 (-GetLegacyBitmapSource@CD2DBitmapCache@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x1801905D0 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetLegacyBitmapSource(
        CDxHandleStereoBitmapRealization *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  char *v3; // rcx
  __int64 v4; // rdx
  const struct BitmapSourceInfo *v5; // r9
  __int64 v6; // r10
  struct IBitmapSource **v7; // r11
  int LegacyBitmapSource; // eax
  unsigned int v9; // ebx
  int v10; // eax

  v3 = (char *)this - 16;
  if ( a3 )
    v4 = *((unsigned int *)a3 + 3);
  else
    v4 = 0LL;
  if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(v3, v4) )
  {
    LegacyBitmapSource = CD2DBitmapCache::GetLegacyBitmapSource((struct IUnknown **)v6, v7, v5);
    v9 = LegacyBitmapSource;
    if ( LegacyBitmapSource < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LegacyBitmapSource, 0x66u);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct IBitmapSource **, const struct BitmapSourceInfo *))(*(_QWORD *)(v6 + 440) + 72LL))(
            v6 + 440,
            v7,
            v5);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x6Bu);
  }
  return v9;
}
