/*
 * XREFs of ??0CFade@@IEAA@XZ @ 0x1800012A4
 * Callers:
 *     ??0CFadeIn@@QEAA@XZ @ 0x180001278 (--0CFadeIn@@QEAA@XZ.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180010EA4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x180090184 (--0CFadeOut@@QEAA@XZ.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x18000FB48 (--0CStoryboard@@IEAA@_N@Z.c)
 */

CFade *__fastcall CFade::CFade(CFade *this)
{
  CFade *v1; // rcx
  CFade *result; // rax

  CStoryboard::CStoryboard(this, 0);
  *((_QWORD *)v1 + 2) = &CSlide::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CFade::`vftable'{for `CBaseObject'};
  return result;
}
