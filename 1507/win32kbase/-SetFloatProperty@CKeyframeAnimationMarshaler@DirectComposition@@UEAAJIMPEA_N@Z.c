/*
 * XREFs of ?SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D6AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetFloatProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  if ( a2 != 12 )
    return 3221225485LL;
  if ( *((float *)this + 32) != a3 )
  {
    *((_DWORD *)this + 4) &= ~0x400u;
    *((float *)this + 32) = a3;
    *a4 = 1;
  }
  return result;
}
