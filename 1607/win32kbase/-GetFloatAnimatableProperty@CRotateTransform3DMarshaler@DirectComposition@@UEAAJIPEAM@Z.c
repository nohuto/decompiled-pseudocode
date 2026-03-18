/*
 * XREFs of ?GetFloatAnimatableProperty@CRotateTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C00EF000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRotateTransform3DMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CRotateTransform3DMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // eax

  v3 = 0;
  if ( !a2 )
  {
    *a3 = *((float *)this + 14);
    return v3;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v9 = *((_DWORD *)this + 18);
    goto LABEL_12;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v9 = *((_DWORD *)this + 19);
    goto LABEL_12;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = *((_DWORD *)this + 20);
    goto LABEL_12;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = *((_DWORD *)this + 15);
    goto LABEL_12;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *((_DWORD *)this + 16);
    goto LABEL_12;
  }
  if ( v8 == 1 )
  {
    v9 = *((_DWORD *)this + 17);
LABEL_12:
    *(_DWORD *)a3 = v9;
    return v3;
  }
  return (unsigned int)-1073741811;
}
