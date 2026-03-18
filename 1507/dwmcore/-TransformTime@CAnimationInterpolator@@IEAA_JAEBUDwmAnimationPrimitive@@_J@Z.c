/*
 * XREFs of ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x18000F1B0
 * Callers:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18000F500 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x18000F0F4 (-GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z.c)
 */

__int64 __fastcall CAnimationInterpolator::TransformTime(
        CAnimationInterpolator *this,
        const struct DwmAnimationPrimitive *a2,
        __int64 a3)
{
  signed __int64 v5; // rbx
  const struct DwmAnimationPrimitive *PrimitiveAtIndex; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi

  v5 = 0LL;
  PrimitiveAtIndex = CAnimationInterpolator::GetPrimitiveAtIndex(this, 0);
  switch ( *(_DWORD *)a2 )
  {
    case 3:
      if ( *((_QWORD *)a2 + 2) )
        v5 = (unsigned __int64)(a3 - *((_QWORD *)a2 + 1)) % *((_QWORD *)a2 + 2);
      v5 += *((_QWORD *)a2 + 1) - *((_QWORD *)a2 + 2);
      if ( v5 < *((_QWORD *)PrimitiveAtIndex + 1) )
        return *((_QWORD *)a2 + 1);
      break;
    case 5:
      v8 = *((_QWORD *)a2 + 1);
      v9 = a3 - v8;
      if ( v9 > v8 - *((_QWORD *)PrimitiveAtIndex + 1) )
        v9 = *((_QWORD *)a2 + 1) - *((_QWORD *)PrimitiveAtIndex + 1);
      return v8 - v9;
    case 6:
      return *((_QWORD *)a2 + 1);
  }
  return v5;
}
