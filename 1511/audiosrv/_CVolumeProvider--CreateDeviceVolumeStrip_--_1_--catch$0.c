/*
 * XREFs of _CVolumeProvider::CreateDeviceVolumeStrip_::_1_::catch$0 @ 0x18004CAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CVolumeProvider::CreateDeviceVolumeStrip_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _resetstkoflw();
  *(_DWORD *)(a2 + 152) = *v3;
  return &loc_1800635FA;
}
