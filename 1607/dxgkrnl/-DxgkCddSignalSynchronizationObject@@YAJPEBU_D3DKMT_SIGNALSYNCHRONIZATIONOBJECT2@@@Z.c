/*
 * XREFs of ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00CE710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCddSignalSynchronizationObject(const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *a1)
{
  return DxgkSignalSynchronizationObjectInternal(a1, 0);
}
