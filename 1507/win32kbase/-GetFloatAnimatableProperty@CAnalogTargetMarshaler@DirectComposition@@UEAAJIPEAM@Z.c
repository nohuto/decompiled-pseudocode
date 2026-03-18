/*
 * XREFs of ?GetFloatAnimatableProperty@CAnalogTargetMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C00DB880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnalogTargetMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CAnalogTargetMarshaler *this,
        int a2,
        float *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a3 || a2 != 7 )
    return 3221225485LL;
  *a3 = *((float *)this + 14);
  return result;
}
