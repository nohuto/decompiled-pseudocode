/*
 * XREFs of ?SetFloatProperty@CComponentTransform2DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00EE4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CComponentTransform2DMarshaler::SetFloatProperty(
        DirectComposition::CComponentTransform2DMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  bool v5; // dl

  result = 0LL;
  if ( a2 != 1003 )
    return 3221225485LL;
  if ( *((float *)this + 16) == a3 )
  {
    v5 = 0;
  }
  else
  {
    *((float *)this + 16) = a3;
    v5 = 1;
  }
  *a4 = v5;
  *((_DWORD *)this + 4) &= ~0x100u;
  *a4 = 1;
  return result;
}
