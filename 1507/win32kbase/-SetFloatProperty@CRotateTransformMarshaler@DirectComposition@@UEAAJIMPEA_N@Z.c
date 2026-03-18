/*
 * XREFs of ?SetFloatProperty@CRotateTransformMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0013FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRotateTransformMarshaler::SetFloatProperty(
        DirectComposition::CRotateTransformMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v5; // edx
  bool v6; // al

  v4 = 0;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return (unsigned int)-1073741811;
      if ( *((float *)this + 12) == a3 )
        goto LABEL_5;
      *((float *)this + 12) = a3;
LABEL_14:
      v6 = 1;
      goto LABEL_6;
    }
    if ( *((float *)this + 11) != a3 )
    {
      *((float *)this + 11) = a3;
      goto LABEL_14;
    }
  }
  else if ( *((float *)this + 10) != a3 )
  {
    *((float *)this + 10) = a3;
    goto LABEL_14;
  }
LABEL_5:
  v6 = 0;
LABEL_6:
  *a4 = v6;
  return v4;
}
