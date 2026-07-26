/*
 * XREFs of ndisCreateIrpHandler @ 0x1C000D3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ndisCreateIrpHandler(__int64 a1, struct _IRP *a2)
{
  return ndisCreateHandler((struct _DEVICE_OBJECT *)a1, *(_QWORD *)(a1 + 64), a2);
}
