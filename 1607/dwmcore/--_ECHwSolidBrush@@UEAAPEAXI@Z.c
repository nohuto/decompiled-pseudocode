/*
 * XREFs of ??_ECHwSolidBrush@@UEAAPEAXI@Z @ 0x1800AAE30
 * Callers:
 *     ??1CHwBrushPool@@QEAA@XZ @ 0x18002F798 (--1CHwBrushPool@@QEAA@XZ.c)
 *     ??_ECHwSolidBrush@@WBA@EAAPEAXI@Z @ 0x1800C1B00 (--_ECHwSolidBrush@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwConstantColorSource@@MEAA@XZ @ 0x1800AB054 (--1CHwConstantColorSource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CHwSolidBrush *__fastcall CHwSolidBrush::`vector deleting destructor'(CHwSolidBrush *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CHwSolidBrush::`vftable'{for `CHwBrush'};
  *((_QWORD *)this + 2) = &CHwSolidBrush::`vftable'{for `CHwConstantMilColorFColorSource'};
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CHwConstantColorSource::~CHwConstantColorSource((CHwSolidBrush *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwSolidBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
