/*
 * XREFs of _CVolumeSoftware::LoadVolumeState_::_1_::catch$1 @ 0x18006DEB4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CVolumeSoftware::LoadVolumeState_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 168);
  if ( *v3 == -1073741571 )
    _resetstkoflw();
  *(_DWORD *)(a2 + 248) = *v3;
  return &loc_18006DDBE;
}
