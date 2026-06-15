/*
 * XREFs of _CAudioEndpointId::GetBuffer_::_1_::catch$0 @ 0x180039B5E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioEndpointId::GetBuffer_::_1_::catch_0(__int64 a1, __int64 a2)
{
  if ( **(_DWORD **)(a2 + 40) == -1073741571 )
    _o__resetstkoflw();
  return &loc_180005E30;
}
