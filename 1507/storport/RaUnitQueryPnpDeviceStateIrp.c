/*
 * XREFs of RaUnitQueryPnpDeviceStateIrp @ 0x1C0050430
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0003418 (RaUnitPnpIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitQueryPnpDeviceStateIrp(_DWORD *a1, __int64 a2)
{
  if ( a1[157] || a1[158] || a1[159] )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  return RaidCompleteRequestEx((PIRP)a2, 0, 0);
}
