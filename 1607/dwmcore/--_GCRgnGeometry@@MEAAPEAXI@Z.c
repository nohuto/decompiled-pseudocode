/*
 * XREFs of ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x18002FA20
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18008BE10 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x18008DDD0 (-Release@CResource@@UEAAKXZ.c)
 * Callees:
 *     ??1CGeometry@@MEAA@XZ @ 0x18002CB48 (--1CGeometry@@MEAA@XZ.c)
 *     ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x18002FC10 (-UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CRgnGeometry *__fastcall CRgnGeometry::`scalar deleting destructor'(CRgnGeometry *this, char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *(_QWORD *)this = &CRgnGeometry::`vftable';
  CRgnGeometry::UnRegisterNotifiers(this);
  CGeometry::~CGeometry((struct CResource **)this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CRgnGeometry *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
