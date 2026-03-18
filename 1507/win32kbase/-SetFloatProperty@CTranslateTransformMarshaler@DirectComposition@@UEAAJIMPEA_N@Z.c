/*
 * XREFs of ?SetFloatProperty@CTranslateTransformMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C002AF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTranslateTransformMarshaler::SetFloatProperty(
        DirectComposition::CTranslateTransformMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  bool v5; // al

  v4 = 0;
  if ( !a2 )
  {
    if ( *((float *)this + 10) != a3 )
    {
      *((float *)this + 10) = a3;
      goto LABEL_5;
    }
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  if ( a2 != 1 )
    return (unsigned int)-1073741811;
  if ( *((float *)this + 11) == a3 )
    goto LABEL_7;
  *((float *)this + 11) = a3;
LABEL_5:
  v5 = 1;
LABEL_8:
  *a4 = v5;
  return v4;
}
