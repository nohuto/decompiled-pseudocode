/*
 * XREFs of ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C00ACE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCddDestroySynchronizationObject(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkDestroySynchronizationObjectInternal(a1, 0, a3);
}
