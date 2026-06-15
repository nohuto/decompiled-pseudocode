/*
 * XREFs of _CAudioSessionManagerProvider::RevokeSessions_::_1_::catch$0 @ 0x180064275
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioSessionManagerProvider::RevokeSessions_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 72);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 56) = *v3;
  return &loc_180064190;
}
