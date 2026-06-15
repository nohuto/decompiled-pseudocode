/*
 * XREFs of _CAudioSession::DisconnectStreamsForResource_::_1_::catch$3 @ 0x1800731FE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioSession::DisconnectStreamsForResource_::_1_::catch_3(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 176);
  if ( *v3 == -1073741571 )
    _resetstkoflw();
  *(_DWORD *)(a2 + 320) = *v3;
  return &loc_180072F3D;
}
