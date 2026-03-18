/*
 * XREFs of ??_ECSystemMemoryBitmap@@UEAAPEAXI@Z @ 0x180151AA0
 * Callers:
 *     ??_ECSystemMemoryBitmap@@WHA@EAAPEAXI@Z @ 0x1800BE4B0 (--_ECSystemMemoryBitmap@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x1800272C0 (--1CSystemMemoryBitmap@@UEAA@XZ.c)
 */

CSystemMemoryBitmap *__fastcall CSystemMemoryBitmap::`vector deleting destructor'(CSystemMemoryBitmap *this, char a2)
{
  CSystemMemoryBitmap::~CSystemMemoryBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSystemMemoryBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
