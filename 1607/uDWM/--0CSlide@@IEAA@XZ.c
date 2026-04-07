/*
 * XREFs of ??0CSlide@@IEAA@XZ @ 0x180040C80
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180009838 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CSlideIn@@QEAA@XZ @ 0x18004099C (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x180040C4C (--0CSlideOut@@QEAA@XZ.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x180091AB4 (--0CPanelAnimation@@QEAA@XZ.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x18000F61C (--0CStoryboard@@IEAA@_N@Z.c)
 */

CSlide *__fastcall CSlide::CSlide(CSlide *this)
{
  __int64 v1; // rcx
  CSlide *result; // rax

  CStoryboard::CStoryboard(this, 0);
  *(_DWORD *)(v1 + 120) = 0;
  *(_QWORD *)(v1 + 16) = &CSlide::`vftable'{for `IAnimationListener'};
  result = (CSlide *)v1;
  *(_QWORD *)v1 = &CSlide::`vftable'{for `CBaseObject'};
  return result;
}
