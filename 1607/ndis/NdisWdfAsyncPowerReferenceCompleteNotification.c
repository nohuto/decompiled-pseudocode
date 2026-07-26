/*
 * XREFs of NdisWdfAsyncPowerReferenceCompleteNotification @ 0x1C00DC2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisWdfAsyncPowerReferenceCompleteNotification(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  ndisWdfSelectiveSuspendResumeOperations(a1, a2, (int)a2 < 0);
}
