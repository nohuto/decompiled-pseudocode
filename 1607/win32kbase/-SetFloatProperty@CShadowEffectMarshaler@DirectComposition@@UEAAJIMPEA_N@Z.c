/*
 * XREFs of ?SetFloatProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0003AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CShadowEffectMarshaler::SetFloatProperty(
        DirectComposition::CShadowEffectMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  bool v4; // al
  int v6; // edx
  int v7; // edx
  int v8; // edx

  v4 = 0;
  if ( !a2 )
  {
    if ( *((float *)this + 24) == a3 )
    {
LABEL_5:
      *a4 = v4;
      return 0LL;
    }
    *((float *)this + 24) = a3;
LABEL_4:
    v4 = 1;
    goto LABEL_5;
  }
  v6 = a2 - 2;
  if ( !v6 )
  {
    if ( *((float *)this + 25) == a3 )
      goto LABEL_5;
    *((float *)this + 25) = a3;
    goto LABEL_4;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 26) == a3 )
      goto LABEL_5;
    *((float *)this + 26) = a3;
    goto LABEL_4;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((float *)this + 27) == a3 )
      goto LABEL_5;
    *((float *)this + 27) = a3;
    goto LABEL_4;
  }
  if ( v8 == 1 )
  {
    if ( *((float *)this + 28) == a3 )
      goto LABEL_5;
    *((float *)this + 28) = a3;
    goto LABEL_4;
  }
  return 3221225485LL;
}
