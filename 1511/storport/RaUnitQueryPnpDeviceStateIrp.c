/*
 * XREFs of RaUnitQueryPnpDeviceStateIrp @ 0x1C00544B0
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00041C8 (RaUnitPnpIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitQueryPnpDeviceStateIrp(_DWORD *a1, __int64 a2)
{
  if ( a1[163] || a1[164] || a1[165] )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  return RaidCompleteRequestEx((PIRP)a2, 0, 0);
}
