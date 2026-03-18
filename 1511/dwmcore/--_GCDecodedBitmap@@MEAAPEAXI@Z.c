/*
 * XREFs of ??_GCDecodedBitmap@@MEAAPEAXI@Z @ 0x1801602E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CDecodedBitmap@@MEAA@XZ @ 0x180160248 (--1CDecodedBitmap@@MEAA@XZ.c)
 */

CDecodedBitmap *__fastcall CDecodedBitmap::`scalar deleting destructor'(CDecodedBitmap *this, char a2)
{
  CDecodedBitmap::~CDecodedBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDecodedBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
