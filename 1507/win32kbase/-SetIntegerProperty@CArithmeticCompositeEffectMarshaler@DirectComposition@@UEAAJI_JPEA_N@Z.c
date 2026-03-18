/*
 * XREFs of ?SetIntegerProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DD410
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D89A0 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::SetIntegerProperty(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( a2 == 1 )
  {
    *((_DWORD *)this + 28) = a3;
    *a4 = 1;
  }
  else
  {
    return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4);
  }
  return v4;
}
