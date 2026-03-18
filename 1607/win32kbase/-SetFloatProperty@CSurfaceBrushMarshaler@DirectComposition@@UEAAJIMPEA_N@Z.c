/*
 * XREFs of ?SetFloatProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00EB5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetFloatProperty(
        DirectComposition::CSurfaceBrushMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 2;
  if ( !v5 )
  {
    if ( *((float *)this + 18) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 18) = a3;
    goto LABEL_8;
  }
  if ( v5 != 1 )
    return 3221225485LL;
  if ( *((float *)this + 19) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 19) = a3;
LABEL_8:
    *a4 = 1;
  }
  return result;
}
