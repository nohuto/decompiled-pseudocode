/*
 * XREFs of IopInvalidDeviceRequest @ 0x1400A56A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IopInvalidDeviceRequest(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = -1073741808;
  pIofCompleteRequest(a2, 0);
  return 3221225488LL;
}
