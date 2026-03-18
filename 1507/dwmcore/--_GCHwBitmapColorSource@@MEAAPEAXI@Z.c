/*
 * XREFs of ??_GCHwBitmapColorSource@@MEAAPEAXI@Z @ 0x18001D220
 * Callers:
 *     <none>
 * Callees:
 *     ??1CHwBitmapColorSource@@MEAA@XZ @ 0x18001D198 (--1CHwBitmapColorSource@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CHwBitmapColorSource *__fastcall CHwBitmapColorSource::`scalar deleting destructor'(
        CHwBitmapColorSource *this,
        char a2)
{
  CHwBitmapColorSource::~CHwBitmapColorSource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwBitmapColorSource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
