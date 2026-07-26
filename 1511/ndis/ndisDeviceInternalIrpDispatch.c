/*
 * XREFs of ndisDeviceInternalIrpDispatch @ 0x1C005EBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ndisDeviceInternalIrpDispatch(__int64 a1, struct _IRP *a2)
{
  return ndisDeviceInternalDispatch((struct _DEVICE_OBJECT *)a1, *(_QWORD *)(a1 + 64), a2);
}
