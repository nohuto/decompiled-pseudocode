/*
 * XREFs of _CAudioSession::FinishConstruction_::_1_::catch$1 @ 0x1800462C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioSession::FinishConstruction_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 64);
  if ( *v3 == -1073741571 )
    _resetstkoflw();
  *(_DWORD *)(a2 + 152) = *v3;
  return &loc_18004FB9E;
}
