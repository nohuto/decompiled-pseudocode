/*
 * XREFs of NdisWdfDeviceWmiHandler @ 0x1C00D34A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NdisWdfDeviceWmiHandler(__int64 a1, _IRP *a2)
{
  return ndisWMIDispatch(*(_QWORD *)(a1 + 3880), (struct _NDIS_MINIPORT_BLOCK *)a1, a2);
}
