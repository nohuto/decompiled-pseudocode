/*
 * XREFs of NdisWdfDeviceInternalControlIrpHandler @ 0x1C005B7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisWdfDeviceInternalControlIrpHandler(__int64 a1)
{
  return ndisDeviceInternalDispatch(*(struct _DEVICE_OBJECT **)(a1 + 3880));
}
