/*
 * XREFs of ?SetFloatProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00DA680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CComponentTransform3DMarshaler::SetFloatProperty(
        DirectComposition::CComponentTransform3DMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  bool v15; // cl

  result = 0LL;
  if ( a2 > 7 )
  {
    v10 = a2 - 8;
    if ( !v10 )
    {
      if ( *((float *)this + 18) != a3 )
      {
        *((float *)this + 18) = a3;
        goto LABEL_46;
      }
      goto LABEL_44;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      if ( *((float *)this + 19) != a3 )
      {
        *((float *)this + 19) = a3;
        goto LABEL_46;
      }
      goto LABEL_44;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      if ( *((float *)this + 20) != a3 )
      {
        *((float *)this + 20) = a3;
        goto LABEL_46;
      }
      goto LABEL_44;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( *((float *)this + 21) != a3 )
      {
        *((float *)this + 21) = a3;
        goto LABEL_46;
      }
      goto LABEL_44;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( *((float *)this + 22) != a3 )
      {
        *((float *)this + 22) = a3;
        goto LABEL_46;
      }
      goto LABEL_44;
    }
    if ( v14 == 1 )
    {
      if ( *((float *)this + 23) != a3 )
      {
        *((float *)this + 23) = a3;
        goto LABEL_46;
      }
      goto LABEL_44;
    }
    return 3221225485LL;
  }
  if ( a2 == 7 )
  {
    if ( *((float *)this + 17) != a3 )
    {
      *((float *)this + 17) = a3;
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  if ( !a2 )
  {
    if ( *((float *)this + 10) != a3 )
    {
      *((float *)this + 10) = a3;
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( *((float *)this + 11) != a3 )
    {
      *((float *)this + 11) = a3;
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 12) != a3 )
    {
      *((float *)this + 12) = a3;
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 13) != a3 )
    {
      *((float *)this + 13) = a3;
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((float *)this + 14) != a3 )
    {
      *((float *)this + 14) = a3;
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      if ( *((float *)this + 16) != a3 )
      {
        *((float *)this + 16) = a3;
LABEL_46:
        v15 = 1;
        goto LABEL_47;
      }
      goto LABEL_44;
    }
    return 3221225485LL;
  }
  if ( *((float *)this + 15) != a3 )
  {
    *((float *)this + 15) = a3;
    goto LABEL_46;
  }
LABEL_44:
  v15 = 0;
LABEL_47:
  *a4 = v15;
  *a4 = 1;
  return result;
}
