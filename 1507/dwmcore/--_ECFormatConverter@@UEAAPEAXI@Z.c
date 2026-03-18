/*
 * XREFs of ??_ECFormatConverter@@UEAAPEAXI@Z @ 0x180145E70
 * Callers:
 *     ??_ECFormatConverter@@WBA@EAAPEAXI@Z @ 0x18009B870 (--_ECFormatConverter@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CFormatConverter@@UEAA@XZ @ 0x180145D2C (--1CFormatConverter@@UEAA@XZ.c)
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
