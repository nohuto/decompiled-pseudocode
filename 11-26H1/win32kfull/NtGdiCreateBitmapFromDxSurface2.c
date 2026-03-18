/*
 * XREFs of NtGdiCreateBitmapFromDxSurface2 @ 0x1401C2FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z @ 0x1401C306C (-GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z.c)
 */

HBITMAP __fastcall NtGdiCreateBitmapFromDxSurface2(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        void *a7)
{
  HBITMAP BitmapFromDxSurface; // rbx
  _QWORD v12[14]; // [rsp+40h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v12, a1);
  BitmapFromDxSurface = 0LL;
  if ( v12[0] )
    BitmapFromDxSurface = GrepCreateBitmapFromDxSurface((struct XDCOBJ *)v12, a2, a3, a4, a5, a6, a7);
  else
    EngSetLastError(0x57u);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
  return BitmapFromDxSurface;
}
