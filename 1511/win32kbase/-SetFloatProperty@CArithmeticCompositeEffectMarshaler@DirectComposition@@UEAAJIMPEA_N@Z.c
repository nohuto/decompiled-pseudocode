/*
 * XREFs of ?SetFloatProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00DDFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::SetFloatProperty(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v5; // edx
  int v6; // edx
  int v7; // edx
  bool v8; // al

  v4 = 0;
  v5 = a2 - 2;
  if ( !v5 )
  {
    if ( *((float *)this + 22) != a3 )
    {
      *((float *)this + 22) = a3;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 23) != a3 )
    {
      *((float *)this + 23) = a3;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 24) != a3 )
    {
      *((float *)this + 24) = a3;
      goto LABEL_15;
    }
LABEL_13:
    v8 = 0;
LABEL_16:
    *a4 = v8;
    return v4;
  }
  if ( v7 == 1 )
  {
    if ( *((float *)this + 25) != a3 )
    {
      *((float *)this + 25) = a3;
LABEL_15:
      v8 = 1;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  return (unsigned int)-1073741811;
}
