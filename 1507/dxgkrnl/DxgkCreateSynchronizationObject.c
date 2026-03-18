/*
 * XREFs of DxgkCreateSynchronizationObject @ 0x1C00849C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCreateSynchronizationObject(
        struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkCreateSynchronizationObjectInternal(a1, 1, a3);
}
