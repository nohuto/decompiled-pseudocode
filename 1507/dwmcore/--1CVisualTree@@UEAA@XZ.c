/*
 * XREFs of ??1CVisualTree@@UEAA@XZ @ 0x1800403BC
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x1800402D0 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18003BFA0 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x180040328 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CVisualTree::~CVisualTree(void **this)
{
  _QWORD *v2; // rax
  void *v3; // rsi
  unsigned int v4; // edx

  *this = &CVisualTree::`vftable';
  CVisualTree::ReleaseTreeDatas((CVisualTree *)this);
  v2 = this[3];
  if ( v2 )
  {
    v2[40] = 0LL;
    v3 = this[3];
    if ( v3 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(this[3]);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 88);
  CPreComputeContext::~CPreComputeContext((CPreComputeContext *)(this + 8), v4);
  *this = &CMILRefCountBase::`vftable';
}
