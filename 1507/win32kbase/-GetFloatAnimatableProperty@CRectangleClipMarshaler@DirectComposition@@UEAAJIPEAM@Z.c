/*
 * XREFs of ?GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C00DB520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        unsigned int a2,
        float *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx

  v3 = 0;
  if ( a2 > 6 )
  {
    v9 = a2 - 7;
    if ( !v9 )
    {
      *a3 = *((float *)this + 19);
      return v3;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v8 = *((_DWORD *)this + 20);
      goto LABEL_15;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v8 = *((_DWORD *)this + 21);
      goto LABEL_15;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v8 = *((_DWORD *)this + 22);
      goto LABEL_15;
    }
    if ( v12 == 1 )
    {
      v8 = *((_DWORD *)this + 23);
      goto LABEL_15;
    }
    return (unsigned int)-1073741811;
  }
  if ( a2 == 6 )
  {
    v8 = *((_DWORD *)this + 18);
    goto LABEL_15;
  }
  if ( !a2 )
  {
    v8 = *((_DWORD *)this + 12);
    goto LABEL_15;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v8 = *((_DWORD *)this + 13);
    goto LABEL_15;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = *((_DWORD *)this + 14);
    goto LABEL_15;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = *((_DWORD *)this + 15);
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = *((_DWORD *)this + 16);
    goto LABEL_15;
  }
  if ( v7 != 1 )
    return (unsigned int)-1073741811;
  v8 = *((_DWORD *)this + 17);
LABEL_15:
  *(_DWORD *)a3 = v8;
  return v3;
}
