/*
 * XREFs of PoFxSetDeviceIdleTimeout @ 0x1401491CC
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140149238 (PopFxUpdateDeviceIdleTimer.c)
 */

void __fastcall PoFxSetDeviceIdleTimeout(__int64 a1, unsigned __int64 a2)
{
  KSPIN_LOCK *v2; // rdi
  __int64 v3; // rbp
  KSPIN_LOCK *v5; // rcx
  KIRQL v6; // al
  KIRQL v7; // bl

  v2 = (KSPIN_LOCK *)(a1 + 328);
  v3 = a2;
  v5 = (KSPIN_LOCK *)(a1 + 328);
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    v3 = 0x3FFFFFFFFFFFFFFFLL;
  v6 = KeAcquireSpinLockRaiseToDpc(v5);
  *(_QWORD *)(a1 + 464) = v3;
  v7 = v6;
  PopFxUpdateDeviceIdleTimer(a1);
  KeReleaseSpinLock(v2, v7);
}
