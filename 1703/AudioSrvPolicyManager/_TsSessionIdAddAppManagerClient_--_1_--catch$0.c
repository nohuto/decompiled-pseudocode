/*
 * XREFs of _TsSessionIdAddAppManagerClient_::_1_::catch$0 @ 0x180022AE2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall TsSessionIdAddAppManagerClient_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 96) = *v3;
  return &loc_18001A767;
}
