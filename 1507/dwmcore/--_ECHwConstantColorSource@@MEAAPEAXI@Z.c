/*
 * XREFs of ??_ECHwConstantColorSource@@MEAAPEAXI@Z @ 0x180142180
 * Callers:
 *     <none>
 * Callees:
 *     ??1CHwConstantColorSource@@MEAA@XZ @ 0x18008A83C (--1CHwConstantColorSource@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CHwConstantColorSource *__fastcall CHwConstantColorSource::`vector deleting destructor'(
        CHwConstantColorSource *this,
        char a2)
{
  CHwConstantColorSource::~CHwConstantColorSource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwConstantColorSource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
