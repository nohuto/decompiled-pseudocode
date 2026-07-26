/*
 * XREFs of ndisIdleCancelWorkItem @ 0x1C006B790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisIdleCancelWorkItem(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  KIRQL v4; // al

  SelectiveSuspend = a2->SelectiveSuspend;
  v4 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  SelectiveSuspend->Flags.Value &= ~0x40u;
  KeReleaseSpinLock(&SelectiveSuspend->Lock, v4);
  return ndisCancelIdleRequest(a2, 0, 0);
}
