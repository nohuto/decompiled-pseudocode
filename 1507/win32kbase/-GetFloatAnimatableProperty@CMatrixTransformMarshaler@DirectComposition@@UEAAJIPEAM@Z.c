/*
 * XREFs of ?GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C00DAA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransformMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CMatrixTransformMarshaler *this,
        unsigned int a2,
        float *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 >= 6 )
    return 3221225485LL;
  *a3 = *((float *)this + 2 * (a2 >> 1) + (a2 & 1) + 10);
  return result;
}
