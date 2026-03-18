/*
 * XREFs of DxgkCreateSynchronizationObject @ 0x1C0093010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCreateSynchronizationObject(struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1)
{
  return DxgkCreateSynchronizationObjectInternal(a1, 1);
}
