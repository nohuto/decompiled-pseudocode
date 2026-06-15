/*
 * XREFs of _CProcess::RemoveSession_::_1_::catch$0 @ 0x180046501
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CProcess::RemoveSession_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _resetstkoflw();
  *(_DWORD *)(a2 + 80) = *v3;
  return &loc_1800508EC;
}
