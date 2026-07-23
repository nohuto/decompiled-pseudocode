/*
 * XREFs of TtmpApplyDeviceAutoAssignment @ 0x140677380
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1406771AC (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall TtmpApplyDeviceAutoAssignment(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 4) & 0x800) != 0 )
  {
    *(_DWORD *)(a2 + 596) = 0;
    *(_DWORD *)(a2 + 600) |= 0x40u;
  }
  *(_DWORD *)(a2 + 600) |= 0x20u;
}
