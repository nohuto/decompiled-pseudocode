/*
 * XREFs of ??_GCComposeTop@@UEAAPEAXI@Z @ 0x1801069D0
 * Callers:
 *     ?DeleteComposeTopContent@CDesktopRenderTarget@@UEAAXXZ @ 0x180074F90 (-DeleteComposeTopContent@CDesktopRenderTarget@@UEAAXXZ.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180075320 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801068E0 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CComposeTop@@UEAA@XZ @ 0x180106848 (--1CComposeTop@@UEAA@XZ.c)
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
