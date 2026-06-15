/*
 * XREFs of _CDuckingManager::OnStateChanged_::_1_::catch$1 @ 0x180024E15
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CDuckingManager::OnStateChanged_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 184);
  if ( *v3 == -1073741571 )
    _resetstkoflw();
  *(_DWORD *)(a2 + 64) = *v3;
  return &loc_180006521;
}
