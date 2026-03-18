/*
 * XREFs of DxgkWaitForSynchronizationObjectFromCpu @ 0x1C014F460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkWaitForSynchronizationObjectFromCpuInternal(a1, 1, a3);
}
