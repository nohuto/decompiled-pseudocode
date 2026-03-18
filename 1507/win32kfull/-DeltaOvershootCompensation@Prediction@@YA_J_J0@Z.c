/*
 * XREFs of ?DeltaOvershootCompensation@Prediction@@YA_J_J0@Z @ 0x1C01C45DC
 * Callers:
 *     DoPrediction @ 0x1C01C8420 (DoPrediction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Prediction::DeltaOvershootCompensation(__int64 this, __int64 a2)
{
  __int64 result; // rax
  bool v3; // sf
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = 0LL;
  v3 = this < 0;
  if ( this > 0 )
  {
    if ( a2 < 0 )
    {
      v4 = -this;
      result = a2 / 2;
      if ( a2 / 2 < v4 )
        return v4;
      return result;
    }
    v3 = this < 0;
  }
  if ( v3 && a2 > 0 )
  {
    v5 = -this;
    result = a2 / 2;
    if ( a2 / 2 > v5 )
      return v5;
  }
  return result;
}
