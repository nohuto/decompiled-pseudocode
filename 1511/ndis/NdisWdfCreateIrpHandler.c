/*
 * XREFs of NdisWdfCreateIrpHandler @ 0x1C005B7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall NdisWdfCreateIrpHandler(__int64 a1, _IRP *a2)
{
  return ndisCreateHandler(*(struct _DEVICE_OBJECT **)(a1 + 3880), a1, a2);
}
