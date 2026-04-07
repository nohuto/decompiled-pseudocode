/*
 * XREFs of ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x180099814
 * Callers:
 *     ?Create@CVirtualDesktopThumbnail@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18007F4B8 (-Create@CVirtualDesktopThumbnail@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnail@@KAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180099BD0 (-Create@CDesktopThumbnail@@KAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180022088 (--0CVisual@@IEAA@XZ.c)
 */

CDesktopThumbnailBase *__fastcall CDesktopThumbnailBase::CDesktopThumbnailBase(CDesktopThumbnailBase *this)
{
  __int64 v1; // rcx
  CDesktopThumbnailBase *result; // rax

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CDesktopThumbnailBase::`vftable';
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_DWORD *)(v1 + 288) = 0;
  result = (CDesktopThumbnailBase *)v1;
  *(_QWORD *)(v1 + 296) = -1LL;
  return result;
}
