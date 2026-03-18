/*
 * XREFs of ??_ECVisualTree@@UEAAPEAXI@Z @ 0x1800B85E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x18004FCF0 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18006185C (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800B8674 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CVisualTree *__fastcall CVisualTree::`vector deleting destructor'(CVisual **this, char a2)
{
  CVisual *v4; // rcx
  CVisual *v5; // rcx

  *this = (CVisual *)&CVisualTree::`vftable';
  CVisualTree::ReleaseTreeDatas((CVisualTree *)this);
  v4 = this[3];
  if ( v4 )
  {
    CVisual::SetVisualTreeNoRef(v4, 0LL);
    v5 = this[3];
    if ( v5 )
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)(this + 106));
  CPreComputeContext::~CPreComputeContext((CPreComputeContext *)(this + 8));
  *this = (CVisual *)&CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CVisual **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return (CVisualTree *)this;
}
