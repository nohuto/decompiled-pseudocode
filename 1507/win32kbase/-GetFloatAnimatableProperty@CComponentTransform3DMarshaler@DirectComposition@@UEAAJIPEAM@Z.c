/*
 * XREFs of ?GetFloatAnimatableProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C00DA4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CComponentTransform3DMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CComponentTransform3DMarshaler *this,
        unsigned int a2,
        float *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx

  v3 = 0;
  if ( a2 > 7 )
  {
    v10 = a2 - 8;
    if ( !v10 )
    {
      *a3 = *((float *)this + 18);
      return v3;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v9 = *((_DWORD *)this + 19);
      goto LABEL_17;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v9 = *((_DWORD *)this + 20);
      goto LABEL_17;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v9 = *((_DWORD *)this + 21);
      goto LABEL_17;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v9 = *((_DWORD *)this + 22);
      goto LABEL_17;
    }
    if ( v14 == 1 )
    {
      v9 = *((_DWORD *)this + 23);
      goto LABEL_17;
    }
    return (unsigned int)-1073741811;
  }
  if ( a2 == 7 )
  {
    v9 = *((_DWORD *)this + 17);
    goto LABEL_17;
  }
  if ( !a2 )
  {
    v9 = *((_DWORD *)this + 10);
    goto LABEL_17;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v9 = *((_DWORD *)this + 11);
    goto LABEL_17;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v9 = *((_DWORD *)this + 12);
    goto LABEL_17;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = *((_DWORD *)this + 13);
    goto LABEL_17;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = *((_DWORD *)this + 14);
    goto LABEL_17;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *((_DWORD *)this + 15);
    goto LABEL_17;
  }
  if ( v8 != 1 )
    return (unsigned int)-1073741811;
  v9 = *((_DWORD *)this + 16);
LABEL_17:
  *(_DWORD *)a3 = v9;
  return v3;
}
