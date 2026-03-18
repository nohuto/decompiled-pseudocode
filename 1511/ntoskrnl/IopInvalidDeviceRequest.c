/*
 * XREFs of IopInvalidDeviceRequest @ 0x1400E6644
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IopInvalidDeviceRequest(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 48) = -1073741808;
  pIofCompleteRequest(a2, 0LL);
  return 3221225488LL;
}
