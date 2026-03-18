/*
 * XREFs of ?SetFloatProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00DABD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransform3DMarshaler::SetFloatProperty(
        DirectComposition::CMatrixTransform3DMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  __int64 v5; // rdx
  bool v6; // al

  v4 = 0;
  if ( a2 < 0x10 )
  {
    v5 = (a2 & 3) + 4LL * (a2 >> 2);
    if ( *((float *)this + v5 + 10) == a3 )
    {
      v6 = 0;
    }
    else
    {
      *((float *)this + v5 + 10) = a3;
      v6 = 1;
    }
    *a4 = v6;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
