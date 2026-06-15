/*
 * XREFs of _CAppAudioSessionId::Copy_::_1_::catch$2 @ 0x18004A235
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAppAudioSessionId::Copy_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 56);
  if ( *v3 == -1073741571 )
    _resetstkoflw();
  *(_DWORD *)(a2 + 112) = *v3;
  return &loc_180050B74;
}
