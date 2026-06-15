/*
 * XREFs of _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::catch$1 @ 0x14001BA1D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 256);
  if ( *v3 == -1073741571 )
    _resetstkoflw();
  *(_DWORD *)(a2 + 104) = *v3;
  return &loc_1400223BD;
}
