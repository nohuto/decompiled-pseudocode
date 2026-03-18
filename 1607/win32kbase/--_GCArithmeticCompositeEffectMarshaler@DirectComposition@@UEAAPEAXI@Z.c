/*
 * XREFs of ??_GCArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00037F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0003BFC (--1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

DirectComposition::CArithmeticCompositeEffectMarshaler *__fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::`scalar deleting destructor'(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this,
        char a2)
{
  DirectComposition::CFilterEffectMarshaler::~CFilterEffectMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
