/*
 * XREFs of ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x18008BC80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisual@@MEAA@XZ @ 0x18001F3D0 (--1CVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CTouchVisual *__fastcall CTouchVisual::`scalar deleting destructor'(CTouchVisual *this, char a2)
{
  *(_QWORD *)this = &CTouchVisual::`vftable';
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTouchVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
