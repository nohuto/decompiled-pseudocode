/*
 * XREFs of ??1CVisualTree@@UEAA@XZ @ 0x1800766F0
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180076780 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18004EB84 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x180075D50 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CVisualTree::~CVisualTree(CVisualTree *this)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned int v4; // edx

  *(_QWORD *)this = &CVisualTree::`vftable';
  CVisualTree::ReleaseTreeDatas(this);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 304) = 0LL;
    v3 = *((_QWORD *)this + 3);
    if ( v3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 3));
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 736);
  CPreComputeContext::~CPreComputeContext((CVisualTree *)((char *)this + 64), v4);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
