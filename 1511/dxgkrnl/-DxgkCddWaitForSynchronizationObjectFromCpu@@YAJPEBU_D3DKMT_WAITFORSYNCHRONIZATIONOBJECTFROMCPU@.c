/*
 * XREFs of ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C00BA390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCddWaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1)
{
  return DxgkWaitForSynchronizationObjectFromCpuInternal(a1, 0);
}
