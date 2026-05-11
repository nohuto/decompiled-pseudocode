/*
 * XREFs of WmiQueryDataBlock @ 0x1C001B610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WmiQueryDataBlock(struct _DEVICE_OBJECT *a1, IRP *a2, __int64 a3, __int64 a4, char a5)
{
  return WmiCompleteRequest(a1, a2, -1073741163, 0, 0);
}
