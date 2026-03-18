/*
 * XREFs of ??_ECHwSolidBrush@@UEAAPEAXI@Z @ 0x18008AA10
 * Callers:
 *     ??1CHwBrushPool@@QEAA@XZ @ 0x18008AAB4 (--1CHwBrushPool@@QEAA@XZ.c)
 *     ??_ECHwSolidBrush@@WBA@EAAPEAXI@Z @ 0x18009B5F0 (--_ECHwSolidBrush@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwConstantColorSource@@MEAA@XZ @ 0x18008A83C (--1CHwConstantColorSource@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CHwSolidBrush *__fastcall CHwSolidBrush::`vector deleting destructor'(CHwSolidBrush *this, char a2)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)this + 8);
  *(_QWORD *)this = &CHwSolidBrush::`vftable'{for `CHwBrush'};
  *((_QWORD *)this + 2) = &CHwSolidBrush::`vftable'{for `CHwConstantMilColorFColorSource'};
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CHwConstantColorSource::~CHwConstantColorSource((CHwSolidBrush *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwSolidBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
