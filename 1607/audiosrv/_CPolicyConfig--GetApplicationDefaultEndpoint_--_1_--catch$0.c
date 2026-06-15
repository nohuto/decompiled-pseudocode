/*
 * XREFs of _CPolicyConfig::GetApplicationDefaultEndpoint_::_1_::catch$0 @ 0x18003A38F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CPolicyConfig::GetApplicationDefaultEndpoint_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 216);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 52) = *v3;
  return &loc_1800116A1;
}
