/*
 * XREFs of ??0CMILBrushGradient@@IEAA@PEAVCMILFactory@@@Z @ 0x18014BBF8
 * Callers:
 *     ??0CLinearGradientBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800F89DC (--0CLinearGradientBrush@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CMILBrushWithCache@@QEAA@XZ @ 0x180057604 (--0CMILBrushWithCache@@QEAA@XZ.c)
 */

CMILBrushGradient *__fastcall CMILBrushGradient::CMILBrushGradient(CMILBrushGradient *this, struct CMILFactory *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  _QWORD *v4; // rcx
  CMILBrushGradient *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CMILObject::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  CMILBrushWithCache::CMILBrushWithCache((CMILBrushGradient *)((char *)this + 24));
  *(_DWORD *)(v3 + 128) = v2 + 1;
  *(_QWORD *)v3 = &CMILBrushGradient::`vftable'{for `CMILObject'};
  *v4 = &CMILBrush::`vftable';
  *(_QWORD *)(v3 + 56) = &CMILBrushGradient::`vftable'{for `CMILResourceCache'};
  *(_QWORD *)(v3 + 120) = &CMILBrushGradient::`vftable'{for `IMILBrushGradient'};
  *(_QWORD *)(v3 + 160) = v2;
  *(_QWORD *)(v3 + 168) = v2;
  *(_QWORD *)(v3 + 176) = v2;
  *(_DWORD *)(v3 + 184) = v2;
  *(_QWORD *)(v3 + 192) = v2;
  *(_QWORD *)(v3 + 200) = v2;
  *(_QWORD *)(v3 + 208) = v2;
  *(_DWORD *)(v3 + 216) = v2;
  *(_QWORD *)(v3 + 132) = 0LL;
  *(_QWORD *)(v3 + 140) = 0LL;
  *(_QWORD *)(v3 + 148) = 0LL;
  result = (CMILBrushGradient *)v3;
  *(_DWORD *)(v3 + 224) = v2;
  *(_DWORD *)(v3 + 228) = v2 + 1;
  return result;
}
