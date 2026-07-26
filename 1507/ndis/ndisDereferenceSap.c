/*
 * XREFs of ndisDereferenceSap @ 0x1C00F9BE4
 * Callers:
 *     NdisCmDeregisterSapComplete @ 0x1C00F6C50 (NdisCmDeregisterSapComplete.c)
 *     NdisCmDispatchIncomingCall @ 0x1C00F6CD0 (NdisCmDispatchIncomingCall.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferenceSap(KSPIN_LOCK *P)
{
  KIRQL v2; // al
  bool v3; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(P + 5);
  v3 = --*((_DWORD *)P + 9) == 0;
  KeReleaseSpinLock(P + 5, v2);
  if ( v3 )
    ExFreePoolWithTag(P, 0);
}
