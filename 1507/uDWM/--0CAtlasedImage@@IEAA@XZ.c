/*
 * XREFs of ??0CAtlasedImage@@IEAA@XZ @ 0x1800293DC
 * Callers:
 *     ?Create@CAtlasButton@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800078A0 (-Create@CAtlasButton@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180035DD0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?Create@CAtlasedImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180074D34 (-Create@CAtlasedImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CAtlasedImage *__fastcall CAtlasedImage::CAtlasedImage(CAtlasedImage *this)
{
  CAtlasedImage *result; // rax

  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 17) = -1;
  *(_QWORD *)this = &CAtlasedImage::`vftable';
  *((_DWORD *)this + 13) = 0x80000000;
  *((_DWORD *)this + 12) = 0x80000000;
  result = this;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 8) = 0x7FFFFFFF;
  *((_DWORD *)this + 10) = 0x7FFFFFFF;
  *((_DWORD *)this + 9) = 0x7FFFFFFF;
  *((_DWORD *)this + 11) = 0x7FFFFFFF;
  *((_DWORD *)this + 15) = 0x7FFFFFFF;
  *((_DWORD *)this + 14) = 0x7FFFFFFF;
  *((_DWORD *)this + 33) = 22;
  return result;
}
