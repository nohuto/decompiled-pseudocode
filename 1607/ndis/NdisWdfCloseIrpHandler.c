/*
 * XREFs of NdisWdfCloseIrpHandler @ 0x1C005F5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall NdisWdfCloseIrpHandler(__int64 a1, _IRP *a2)
{
  return ndisCloseHandler(*(const struct _DEVICE_OBJECT **)(a1 + 3880), a1, a2);
}
