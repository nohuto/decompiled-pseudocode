/*
 * XREFs of ??_GVisualCollection@@UEAAPEAXI@Z @ 0x18007F5E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??1VisualCollection@@UEAA@XZ @ 0x18007004C (--1VisualCollection@@UEAA@XZ.c)
 */

VisualCollection *__fastcall VisualCollection::`scalar deleting destructor'(VisualCollection *this, char a2)
{
  VisualCollection::~VisualCollection(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, VisualCollection *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
