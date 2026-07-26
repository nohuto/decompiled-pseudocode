/*
 * XREFs of ndisDereferenceSap @ 0x1C00F9BD4
 * Callers:
 *     NdisCmDeregisterSapComplete @ 0x1C00F6C50 (NdisCmDeregisterSapComplete.c)
 *     NdisCmDispatchIncomingCall @ 0x1C00F6CD0 (NdisCmDispatchIncomingCall.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferenceSap(KSPIN_LOCK *P)
{
  KIRQL v2; // al
  bool v3; // zf
  bool v4; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(P + 5);
  v3 = (*((_DWORD *)P + 9))-- == 1;
  v4 = v3;
  KeReleaseSpinLock(P + 5, v2);
  if ( v4 )
    ExFreePoolWithTag(P, 0);
}
