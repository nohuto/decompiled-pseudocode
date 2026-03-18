/*
 * XREFs of ?SetFloatProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00DC580
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
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v4 = 0;
  if ( a2 )
  {
    v5 = a2 - 2;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
            return 3221225485LL;
          if ( *((float *)this + 28) != a3 )
          {
            *((float *)this + 28) = a3;
LABEL_17:
            v4 = 1;
          }
        }
        else if ( *((float *)this + 27) != a3 )
        {
          *((float *)this + 27) = a3;
          goto LABEL_17;
        }
      }
      else if ( *((float *)this + 26) != a3 )
      {
        *((float *)this + 26) = a3;
        goto LABEL_17;
      }
    }
    else if ( *((float *)this + 25) != a3 )
    {
      *((float *)this + 25) = a3;
      goto LABEL_17;
    }
  }
  else if ( *((float *)this + 24) != a3 )
  {
    *((float *)this + 24) = a3;
    goto LABEL_17;
  }
  *a4 = v4;
  return 0LL;
}
