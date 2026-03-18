/*
 * XREFs of ?GetFloatAnimatableProperty@CScaleTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C00EF2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransform3DMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CScaleTransform3DMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // eax

  v3 = 0;
  if ( !a2 )
  {
    *a3 = *((float *)this + 14);
    return v3;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v8 = *((_DWORD *)this + 15);
    goto LABEL_13;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = *((_DWORD *)this + 16);
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = *((_DWORD *)this + 17);
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = *((_DWORD *)this + 18);
    goto LABEL_13;
  }
  if ( v7 == 1 )
  {
    v8 = *((_DWORD *)this + 19);
LABEL_13:
    *(_DWORD *)a3 = v8;
    return v3;
  }
  return (unsigned int)-1073741811;
}
