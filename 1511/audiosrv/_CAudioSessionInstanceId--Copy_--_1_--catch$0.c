/*
 * XREFs of _CAudioSessionInstanceId::Copy_::_1_::catch$0 @ 0x18004A64F
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioSessionInstanceId::Copy_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _resetstkoflw();
  *(_DWORD *)(a2 + 64) = *v3;
  return &loc_18005200C;
}
