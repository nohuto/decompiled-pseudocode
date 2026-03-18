/*
 * XREFs of ?SetFloatProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00DCBB0
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
  unsigned int v15; // edx
  unsigned int v16; // edx
  bool v17; // cl

  result = 0LL;
  if ( a2 > 8 )
  {
    v11 = a2 - 9;
    if ( !v11 )
    {
      if ( *((float *)this + 23) != a3 )
      {
        *((float *)this + 23) = a3;
        goto LABEL_52;
      }
      goto LABEL_50;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      if ( *((float *)this + 24) != a3 )
      {
        *((float *)this + 24) = a3;
        goto LABEL_52;
      }
      goto LABEL_50;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( *((float *)this + 25) != a3 )
      {
        *((float *)this + 25) = a3;
        goto LABEL_52;
      }
      goto LABEL_50;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( *((float *)this + 26) != a3 )
      {
        *((float *)this + 26) = a3;
        goto LABEL_52;
      }
      goto LABEL_50;
    }
    v15 = v14 - 2;
    if ( !v15 )
    {
      if ( *((float *)this + 27) != a3 )
      {
        *((float *)this + 27) = a3;
        goto LABEL_52;
      }
      goto LABEL_50;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      if ( *((float *)this + 28) != a3 )
      {
        *((float *)this + 28) = a3;
        goto LABEL_52;
      }
      goto LABEL_50;
    }
    if ( v16 == 1 )
    {
      if ( *((float *)this + 29) != a3 )
      {
        *((float *)this + 29) = a3;
        goto LABEL_52;
      }
      goto LABEL_50;
    }
    return 3221225485LL;
  }
  if ( a2 == 8 )
  {
    if ( *((float *)this + 22) != a3 )
    {
      *((float *)this + 22) = a3;
      goto LABEL_52;
    }
    goto LABEL_50;
  }
  if ( !a2 )
  {
    if ( *((float *)this + 14) != a3 )
    {
      *((float *)this + 14) = a3;
      goto LABEL_52;
    }
    goto LABEL_50;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( *((float *)this + 15) != a3 )
    {
      *((float *)this + 15) = a3;
      goto LABEL_52;
    }
    goto LABEL_50;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 16) != a3 )
    {
      *((float *)this + 16) = a3;
      goto LABEL_52;
    }
    goto LABEL_50;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 17) != a3 )
    {
      *((float *)this + 17) = a3;
      goto LABEL_52;
    }
    goto LABEL_50;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((float *)this + 18) != a3 )
    {
      *((float *)this + 18) = a3;
      goto LABEL_52;
    }
    goto LABEL_50;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( *((float *)this + 19) != a3 )
    {
      *((float *)this + 19) = a3;
      goto LABEL_52;
    }
    goto LABEL_50;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      if ( *((float *)this + 21) != a3 )
      {
        *((float *)this + 21) = a3;
LABEL_52:
        v17 = 1;
        goto LABEL_53;
      }
      goto LABEL_50;
    }
    return 3221225485LL;
  }
  if ( *((float *)this + 20) != a3 )
  {
    *((float *)this + 20) = a3;
    goto LABEL_52;
  }
LABEL_50:
  v17 = 0;
LABEL_53:
  *a4 = v17;
  *a4 = 1;
  return result;
}
