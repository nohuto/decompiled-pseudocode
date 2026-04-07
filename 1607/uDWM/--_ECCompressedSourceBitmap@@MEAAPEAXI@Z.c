/*
 * XREFs of ??_ECCompressedSourceBitmap@@MEAAPEAXI@Z @ 0x1800434B0
 * Callers:
 *     ??_ECCompressedSourceBitmap@@OHA@EAAPEAXI@Z @ 0x180051310 (--_ECCompressedSourceBitmap@@OHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x1800439AC (--1CCompressedSourceBitmap@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CCompressedSourceBitmap *__fastcall CCompressedSourceBitmap::`vector deleting destructor'(
        CCompressedSourceBitmap *this,
        char a2)
{
  CCompressedSourceBitmap::~CCompressedSourceBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCompressedSourceBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
