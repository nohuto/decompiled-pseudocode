/*
 * XREFs of NdisWdfDeviceControlIrpHandler @ 0x1C00D3480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisWdfDeviceControlIrpHandler(__int64 a1, _IRP *a2)
{
  return ndisDeviceControlHandler(*(_QWORD *)(a1 + 3880), a1, a2);
}
