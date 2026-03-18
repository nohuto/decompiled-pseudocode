/*
 * XREFs of HUBHSM_CheckingIfResetByParent @ 0x1C0007180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_CheckingIfResetByParent(__int64 a1)
{
  return HUBPARENT_QueryParentIfDeviceWasReset(*(_QWORD *)(a1 + 960));
}
