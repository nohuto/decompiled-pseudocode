/*
 * XREFs of ??_ECEffectGroup@@MEAAPEAXI@Z @ 0x180055F00
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18008BE10 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x18008DDD0 (-Release@CResource@@UEAAKXZ.c)
 * Callees:
 *     ??1CEffectGroup@@MEAA@XZ @ 0x1800560EC (--1CEffectGroup@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CEffectGroup *__fastcall CEffectGroup::`vector deleting destructor'(CEffectGroup *this, char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CEffectGroup::~CEffectGroup(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CEffectGroup *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
