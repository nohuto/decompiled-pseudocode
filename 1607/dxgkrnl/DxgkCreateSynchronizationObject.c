/*
 * XREFs of DxgkCreateSynchronizationObject @ 0x1C007EBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCreateSynchronizationObject(struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1)
{
  return DxgkCreateSynchronizationObjectInternal(a1, 1);
}
