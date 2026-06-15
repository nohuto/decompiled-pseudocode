/*
 * XREFs of _CAudioSessionInstanceId::Initialize_::_1_::catch$0_0 @ 0x1800843F3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioSessionInstanceId::Initialize_::_1_::catch_0_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 104);
  if ( *v3 == -1073741571 )
    _resetstkoflw();
  *(_DWORD *)(a2 + 192) = *v3;
  return &loc_18008404D;
}
