/*
 * XREFs of ??_GCBitmapResource@@MEAAPEAXI@Z @ 0x1800AEC40
 * Callers:
 *     ??_ECBitmapResource@@OBA@EAAPEAXI@Z @ 0x1800C02A0 (--_ECBitmapResource@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapResource@@MEAA@XZ @ 0x1800AEBFC (--1CBitmapResource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CBitmapResource *__fastcall CBitmapResource::`scalar deleting destructor'(CBitmapResource *this, char a2)
{
  CBitmapResource::~CBitmapResource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBitmapResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
