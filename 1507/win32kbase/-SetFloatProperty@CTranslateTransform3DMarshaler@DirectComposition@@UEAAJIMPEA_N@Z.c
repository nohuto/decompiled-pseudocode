/*
 * XREFs of ?SetFloatProperty@CTranslateTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0003080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTranslateTransform3DMarshaler::SetFloatProperty(
        DirectComposition::CTranslateTransform3DMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v5; // edx
  bool v6; // al

  v4 = 0;
  if ( !a2 )
  {
    if ( *((float *)this + 10) == a3 )
      goto LABEL_4;
    *((float *)this + 10) = a3;
LABEL_13:
    v6 = 1;
    goto LABEL_5;
  }
  v5 = a2 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      return (unsigned int)-1073741811;
    if ( *((float *)this + 12) == a3 )
      goto LABEL_4;
    *((float *)this + 12) = a3;
    goto LABEL_13;
  }
  if ( *((float *)this + 11) != a3 )
  {
    *((float *)this + 11) = a3;
    goto LABEL_13;
  }
LABEL_4:
  v6 = 0;
LABEL_5:
  *a4 = v6;
  return v4;
}
