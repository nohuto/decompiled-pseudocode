/*
 * XREFs of ??_GCComposeTop@@UEAAPEAXI@Z @ 0x1800EAFA0
 * Callers:
 *     ?DeleteComposeTopContent@CDesktopRenderTarget@@UEAAXXZ @ 0x180049270 (-DeleteComposeTopContent@CDesktopRenderTarget@@UEAAXXZ.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180092890 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1800EAEC0 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CComposeTop@@UEAA@XZ @ 0x1800EAE28 (--1CComposeTop@@UEAA@XZ.c)
 */

CComposeTop *__fastcall CComposeTop::`scalar deleting destructor'(CComposeTop *this, char a2)
{
  CComposeTop::~CComposeTop(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CComposeTop *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
