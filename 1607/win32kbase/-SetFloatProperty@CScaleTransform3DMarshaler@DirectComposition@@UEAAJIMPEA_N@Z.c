/*
 * XREFs of ?SetFloatProperty@CScaleTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00EF380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransform3DMarshaler::SetFloatProperty(
        DirectComposition::CScaleTransform3DMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  bool v9; // al

  v4 = 0;
  if ( !a2 )
  {
    if ( *((float *)this + 14) != a3 )
    {
      *((float *)this + 14) = a3;
      goto LABEL_21;
    }
    goto LABEL_19;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( *((float *)this + 15) != a3 )
    {
      *((float *)this + 15) = a3;
      goto LABEL_21;
    }
    goto LABEL_19;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 16) != a3 )
    {
      *((float *)this + 16) = a3;
      goto LABEL_21;
    }
    goto LABEL_19;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 17) != a3 )
    {
      *((float *)this + 17) = a3;
      goto LABEL_21;
    }
    goto LABEL_19;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((float *)this + 18) != a3 )
    {
      *((float *)this + 18) = a3;
      goto LABEL_21;
    }
LABEL_19:
    v9 = 0;
LABEL_22:
    *a4 = v9;
    return v4;
  }
  if ( v8 == 1 )
  {
    if ( *((float *)this + 19) != a3 )
    {
      *((float *)this + 19) = a3;
LABEL_21:
      v9 = 1;
      goto LABEL_22;
    }
    goto LABEL_19;
  }
  return (unsigned int)-1073741811;
}
