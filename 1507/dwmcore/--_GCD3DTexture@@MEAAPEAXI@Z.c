/*
 * XREFs of ??_GCD3DTexture@@MEAAPEAXI@Z @ 0x180133780
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DTexture@@MEAA@XZ @ 0x180084D38 (--1CD3DTexture@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CD3DTexture *__fastcall CD3DTexture::`scalar deleting destructor'(CD3DTexture *this, char a2)
{
  CD3DTexture::~CD3DTexture(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DTexture *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
