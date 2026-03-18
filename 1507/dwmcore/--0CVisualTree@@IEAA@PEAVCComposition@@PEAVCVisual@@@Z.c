/*
 * XREFs of ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x180040444
 * Callers:
 *     ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18005FBC0 (-Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CPreComputeContext@@IEAA@PEAVCComposition@@@Z @ 0x180039490 (--0CPreComputeContext@@IEAA@PEAVCComposition@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CVisualTree *__fastcall CVisualTree::CVisualTree(CVisualTree *this, struct CComposition *a2, struct CVisual *a3)
{
  __int64 v5; // r8

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CVisualTree::`vftable';
  CPreComputeContext::CPreComputeContext((CVisualTree *)((char *)this + 64), a2);
  *((_DWORD *)this + 182) = 0;
  *((_QWORD *)this + 88) = (char *)this + 736;
  *((_QWORD *)this + 89) = (char *)this + 736;
  *((_DWORD *)this + 180) = 1;
  *((_DWORD *)this + 181) = 1;
  *((_QWORD *)this + 3) = v5;
  if ( v5 )
    (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v5 + 8LL))(a3);
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  return this;
}
