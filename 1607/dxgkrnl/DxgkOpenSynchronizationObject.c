/*
 * XREFs of DxgkOpenSynchronizationObject @ 0x1C0070870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkOpenSynchronizationObject(struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1)
{
  return DxgkOpenSynchronizationObjectInternal(a1, 1);
}
