/*
 * XREFs of DxgkSignalSynchronizationObject @ 0x1C0076070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkSignalSynchronizationObject(const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *a1)
{
  return DxgkSignalSynchronizationObjectInternal(a1, 1);
}
