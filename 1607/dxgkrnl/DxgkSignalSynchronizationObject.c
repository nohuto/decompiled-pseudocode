/*
 * XREFs of DxgkSignalSynchronizationObject @ 0x1C0177600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkSignalSynchronizationObject(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkSignalSynchronizationObjectInternal(a1, 1, a3);
}
