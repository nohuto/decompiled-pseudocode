/*
 * XREFs of ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x18012B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18012B8D8 (--1CKeyframeAnimation@@UEAA@XZ.c)
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::`scalar deleting destructor'(CKeyframeAnimation *this, char a2)
{
  CKeyframeAnimation::~CKeyframeAnimation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CKeyframeAnimation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
