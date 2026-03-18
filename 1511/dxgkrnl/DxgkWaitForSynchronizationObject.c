/*
 * XREFs of DxgkWaitForSynchronizationObject @ 0x1C0065FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkWaitForSynchronizationObject(const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1)
{
  return DxgkWaitForSynchronizationObjectInternal(a1, 1);
}
