/*
 * XREFs of RaUnitQueryPnpDeviceStateIrp @ 0x1C005C164
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0001A28 (RaUnitPnpIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitQueryPnpDeviceStateIrp(_DWORD *a1, __int64 a2)
{
  if ( a1[163] || a1[164] || a1[165] )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  return RaidCompleteRequestEx((PIRP)a2, 0, 0);
}
