/*
 * XREFs of ??_GCAnalogCompositor@@UEAAPEAXI@Z @ 0x180165220
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18008DF34 (--1CResource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CAnalogCompositor *__fastcall CAnalogCompositor::`scalar deleting destructor'(CAnalogCompositor *this, char a2)
{
  *(_QWORD *)this = &CAnalogCompositor::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogCompositor *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
