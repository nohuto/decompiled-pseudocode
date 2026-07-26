/*
 * XREFs of ndisCreateIrpHandler @ 0x1C0008950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ndisCreateIrpHandler(__int64 a1, _IRP *a2)
{
  return ndisCreateHandler((struct _DEVICE_OBJECT *)a1, *(_QWORD *)(a1 + 64), a2);
}
