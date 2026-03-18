/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu @ 0x1C0177B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu(struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1)
{
  return DxgkSignalSynchronizationObjectFromGpuInternal(a1, 1);
}
