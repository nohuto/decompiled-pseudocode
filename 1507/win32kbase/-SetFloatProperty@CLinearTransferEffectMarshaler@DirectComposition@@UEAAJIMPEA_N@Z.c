/*
 * XREFs of ?SetFloatProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00DCE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffectMarshaler::SetFloatProperty(
        DirectComposition::CLinearTransferEffectMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  bool v4; // al
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx

  v4 = 0;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 2;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 2;
              if ( v10 )
              {
                if ( v10 != 1 )
                  return 3221225485LL;
                if ( *((float *)this + 31) != a3 )
                {
                  *((float *)this + 31) = a3;
LABEL_26:
                  v4 = 1;
                }
              }
              else if ( *((float *)this + 30) != a3 )
              {
                *((float *)this + 30) = a3;
                goto LABEL_26;
              }
            }
            else if ( *((float *)this + 29) != a3 )
            {
              *((float *)this + 29) = a3;
              goto LABEL_26;
            }
          }
          else if ( *((float *)this + 28) != a3 )
          {
            *((float *)this + 28) = a3;
            goto LABEL_26;
          }
        }
        else if ( *((float *)this + 27) != a3 )
        {
          *((float *)this + 27) = a3;
          goto LABEL_26;
        }
      }
      else if ( *((float *)this + 26) != a3 )
      {
        *((float *)this + 26) = a3;
        goto LABEL_26;
      }
    }
    else if ( *((float *)this + 25) != a3 )
    {
      *((float *)this + 25) = a3;
      goto LABEL_26;
    }
  }
  else if ( *((float *)this + 24) != a3 )
  {
    *((float *)this + 24) = a3;
    goto LABEL_26;
  }
  *a4 = v4;
  return 0LL;
}
