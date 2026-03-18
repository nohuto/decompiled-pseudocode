/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu @ 0x1C0152E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu(const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1)
{
  return DxgkSignalSynchronizationObjectFromGpuInternal(a1, 1);
}
