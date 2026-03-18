/*
 * XREFs of ??_ECClientMemoryBitmap@@UEAAPEAXI@Z @ 0x1800A3110
 * Callers:
 *     ??_ECClientMemoryBitmap@@WHA@EAAPEAXI@Z @ 0x1800BCB60 (--_ECClientMemoryBitmap@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CClientMemoryBitmap@@UEAA@XZ @ 0x1800A32FC (--1CClientMemoryBitmap@@UEAA@XZ.c)
 */

CClientMemoryBitmap *__fastcall CClientMemoryBitmap::`vector deleting destructor'(CClientMemoryBitmap *this, char a2)
{
  CClientMemoryBitmap::~CClientMemoryBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CClientMemoryBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
