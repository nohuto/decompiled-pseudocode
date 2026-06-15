/*
 * XREFs of _CMonitor::Start_::_1_::catch$0 @ 0x180081EC8
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x180036CE8 (_o__resetstkoflw_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CMonitor::Start_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 120);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 216) = *v3;
  return &loc_180081BCD;
}
