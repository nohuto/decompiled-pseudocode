/*
 * XREFs of ?GetFloatAnimatableProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C00DCA00
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
  unsigned int v9; // edx
  int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx

  v3 = 0;
  if ( a2 > 8 )
  {
    v11 = a2 - 9;
    if ( !v11 )
    {
      *a3 = *((float *)this + 23);
      return v3;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v10 = *((_DWORD *)this + 24);
      goto LABEL_19;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v10 = *((_DWORD *)this + 25);
      goto LABEL_19;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v10 = *((_DWORD *)this + 26);
      goto LABEL_19;
    }
    v15 = v14 - 2;
    if ( !v15 )
    {
      v10 = *((_DWORD *)this + 27);
      goto LABEL_19;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v10 = *((_DWORD *)this + 28);
      goto LABEL_19;
    }
    if ( v16 == 1 )
    {
      v10 = *((_DWORD *)this + 29);
      goto LABEL_19;
    }
    return (unsigned int)-1073741811;
  }
  if ( a2 == 8 )
  {
    v10 = *((_DWORD *)this + 22);
    goto LABEL_19;
  }
  if ( !a2 )
  {
    v10 = *((_DWORD *)this + 14);
    goto LABEL_19;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v10 = *((_DWORD *)this + 15);
    goto LABEL_19;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v10 = *((_DWORD *)this + 16);
    goto LABEL_19;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v10 = *((_DWORD *)this + 17);
    goto LABEL_19;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = *((_DWORD *)this + 18);
    goto LABEL_19;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = *((_DWORD *)this + 19);
    goto LABEL_19;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = *((_DWORD *)this + 20);
    goto LABEL_19;
  }
  if ( v9 != 1 )
    return (unsigned int)-1073741811;
  v10 = *((_DWORD *)this + 21);
LABEL_19:
  *(_DWORD *)a3 = v10;
  return v3;
}
