/*
 * XREFs of _CPolicyConfig::SetApplicationDefaultEndpoint_::_1_::catch$1 @ 0x1800882A7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CPolicyConfig::SetApplicationDefaultEndpoint_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 96);
  if ( *v3 == -1073741571 )
    _resetstkoflw();
  *(_DWORD *)(a2 + 192) = *v3;
  return &loc_18008816C;
}
