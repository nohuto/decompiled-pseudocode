/*
 * XREFs of ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x1800B8704
 * Callers:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18004F7EC (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 * Callees:
 *     ??0CPreComputeContext@@IEAA@PEAVCComposition@@@Z @ 0x1800616D8 (--0CPreComputeContext@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CVisualTree *__fastcall CVisualTree::CVisualTree(CVisualTree *this, struct CComposition *a2, struct CVisual *a3)
{
  __int64 v4; // r9

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CVisualTree::`vftable';
  CPreComputeContext::CPreComputeContext((CVisualTree *)((char *)this + 64), a2);
  *((_DWORD *)this + 218) = 0;
  *((_QWORD *)this + 106) = (char *)this + 880;
  *((_QWORD *)this + 107) = (char *)this + 880;
  *((_DWORD *)this + 216) = 1;
  *((_DWORD *)this + 217) = 1;
  *((_QWORD *)this + 3) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  return this;
}
