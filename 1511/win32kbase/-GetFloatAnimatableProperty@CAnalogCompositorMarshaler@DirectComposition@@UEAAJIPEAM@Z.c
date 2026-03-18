/*
 * XREFs of ?GetFloatAnimatableProperty@CAnalogCompositorMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C00DDBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnalogCompositorMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CAnalogCompositorMarshaler *this,
        int a2,
        float *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a3 || a2 != 1 )
    return 3221225485LL;
  *a3 = *((float *)this + 11);
  return result;
}
