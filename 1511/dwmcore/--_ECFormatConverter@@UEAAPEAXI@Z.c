/*
 * XREFs of ??_ECFormatConverter@@UEAAPEAXI@Z @ 0x180154050
 * Callers:
 *     ??_ECFormatConverter@@WBA@EAAPEAXI@Z @ 0x1800BE620 (--_ECFormatConverter@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CFormatConverter@@UEAA@XZ @ 0x180153F0C (--1CFormatConverter@@UEAA@XZ.c)
 */

CFormatConverter *__fastcall CFormatConverter::`vector deleting destructor'(CFormatConverter *this, char a2)
{
  CFormatConverter::~CFormatConverter(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CFormatConverter *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
