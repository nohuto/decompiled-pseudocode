/*
 * XREFs of ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x18002E828
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002D660 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x18002E800 (-IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 *     ?IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x18002E810 (-IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGamepadProcessor::AnyInputPressed(MPCGamepadProcessor *this)
{
  __int64 result; // rax
  float v2; // xmm2_4
  float v3; // xmm2_4

  result = 0LL;
  if ( *((int *)this + 528) > 0 )
    return 1LL;
  v2 = *((float *)this + 634);
  if ( COERCE_DOUBLE(*((_QWORD *)this + 270) & _xmm) > v2 )
    return 1LL;
  if ( COERCE_DOUBLE(*((_QWORD *)this + 269) & _xmm) > v2 )
    return 1LL;
  if ( COERCE_DOUBLE(*((_QWORD *)this + 267) & _xmm) > v2 )
    return 1LL;
  if ( COERCE_DOUBLE(*((_QWORD *)this + 268) & _xmm) > v2 )
    return 1LL;
  v3 = *((float *)this + 635);
  if ( *((double *)this + 265) > v3 || *((double *)this + 266) > v3 )
    return 1LL;
  return result;
}
