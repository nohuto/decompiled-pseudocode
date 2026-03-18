/*
 * XREFs of ??_GCArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D4EC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ??1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00D8B50 (--1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CArithmeticCompositeEffectMarshaler *__fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::`scalar deleting destructor'(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this,
        char a2)
{
  DirectComposition::CFilterEffectMarshaler::~CFilterEffectMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
