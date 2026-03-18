/*
 * XREFs of ?SetFloatProperty@CAnalogCompositorMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00EF9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnalogCompositorMarshaler::SetFloatProperty(
        DirectComposition::CAnalogCompositorMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 1 )
    return 3221225485LL;
  *((_DWORD *)this + 4) |= 0x80u;
  *((float *)this + 11) = a3;
  *a4 = 1;
  return result;
}
