/*
 * XREFs of _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::catch$2 @ 0x180022C4E
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x18002166C (_o__resetstkoflw_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 64);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 160) = *v3;
  return &loc_180020467;
}
