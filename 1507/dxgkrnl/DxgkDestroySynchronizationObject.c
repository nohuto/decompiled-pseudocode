/*
 * XREFs of DxgkDestroySynchronizationObject @ 0x1C00849D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDestroySynchronizationObject(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkDestroySynchronizationObjectInternal(a1, 1, a3);
}
