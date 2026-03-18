/*
 * XREFs of ?SetFloatProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00EE6D0
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
  bool v11; // dl
  bool v12; // dl
  bool v13; // dl
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  bool v20; // dl
  bool v21; // dl
  bool v22; // dl

  result = 0LL;
  if ( a2 > 8 )
  {
    v14 = a2 - 9;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( !v17 )
          {
            if ( *((float *)this + 26) == a3 )
            {
              v21 = 0;
            }
            else
            {
              *((float *)this + 26) = a3;
              v21 = 1;
            }
            *a4 = v21;
            *((_DWORD *)this + 4) &= ~0x400u;
            goto LABEL_68;
          }
          v18 = v17 - 2;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              if ( v19 != 1 )
                return 3221225485LL;
              if ( *((float *)this + 29) == a3 )
                goto LABEL_47;
              *((float *)this + 29) = a3;
LABEL_49:
              v20 = 1;
              goto LABEL_50;
            }
            if ( *((float *)this + 28) != a3 )
            {
              *((float *)this + 28) = a3;
              goto LABEL_49;
            }
          }
          else if ( *((float *)this + 27) != a3 )
          {
            *((float *)this + 27) = a3;
            goto LABEL_49;
          }
LABEL_47:
          v20 = 0;
LABEL_50:
          *a4 = v20;
          *((_DWORD *)this + 4) &= ~0x1000u;
          goto LABEL_68;
        }
        if ( *((float *)this + 25) != a3 )
        {
          *((float *)this + 25) = a3;
LABEL_66:
          v22 = 1;
          goto LABEL_67;
        }
      }
      else if ( *((float *)this + 24) != a3 )
      {
        *((float *)this + 24) = a3;
        goto LABEL_66;
      }
    }
    else if ( *((float *)this + 23) != a3 )
    {
      *((float *)this + 23) = a3;
      goto LABEL_66;
    }
    v22 = 0;
LABEL_67:
    *a4 = v22;
    *((_DWORD *)this + 4) &= ~0x800u;
    goto LABEL_68;
  }
  if ( a2 == 8 )
  {
    if ( *((float *)this + 22) == a3 )
      goto LABEL_12;
    *((float *)this + 22) = a3;
    goto LABEL_14;
  }
  if ( !a2 )
  {
    if ( *((float *)this + 14) == a3 )
      goto LABEL_28;
    *((float *)this + 14) = a3;
    goto LABEL_30;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( *((float *)this + 15) == a3 )
      goto LABEL_28;
    *((float *)this + 15) = a3;
    goto LABEL_30;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 16) == a3 )
    {
LABEL_28:
      v13 = 0;
LABEL_31:
      *a4 = v13;
      *((_DWORD *)this + 4) &= ~0x80u;
      goto LABEL_68;
    }
    *((float *)this + 16) = a3;
LABEL_30:
    v13 = 1;
    goto LABEL_31;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 17) == a3 )
      goto LABEL_21;
    *((float *)this + 17) = a3;
    goto LABEL_23;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((float *)this + 18) == a3 )
    {
LABEL_21:
      v12 = 0;
LABEL_24:
      *a4 = v12;
      *((_DWORD *)this + 4) &= ~0x100u;
      goto LABEL_68;
    }
    *((float *)this + 18) = a3;
LABEL_23:
    v12 = 1;
    goto LABEL_24;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( *((float *)this + 19) == a3 )
      goto LABEL_12;
    *((float *)this + 19) = a3;
    goto LABEL_14;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( *((float *)this + 20) == a3 )
      goto LABEL_12;
    *((float *)this + 20) = a3;
LABEL_14:
    v11 = 1;
    goto LABEL_15;
  }
  if ( v10 != 1 )
    return 3221225485LL;
  if ( *((float *)this + 21) != a3 )
  {
    *((float *)this + 21) = a3;
    goto LABEL_14;
  }
LABEL_12:
  v11 = 0;
LABEL_15:
  *a4 = v11;
  *((_DWORD *)this + 4) &= ~0x200u;
LABEL_68:
  *a4 = 1;
  return result;
}
