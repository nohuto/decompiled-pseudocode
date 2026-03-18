/*
 * XREFs of KdCallPowerHandlers @ 0x1401D1458
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400DA540 (PpmIdleExecuteTransition.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x14020B974 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 */

__int64 __fastcall KdCallPowerHandlers(unsigned int a1)
{
  KIRQL CurrentIrql; // bp
  __int64 v4; // rbx
  int v5; // edi

  if ( !KdpPowerListHead )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v4 = KdpPowerListHead;
  v5 = 0;
  while ( (__int64 *)v4 != &KdpPowerListHead )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v4 + 16))(a1, *(_QWORD *)(v4 + 24));
    if ( v5 < 0 )
      break;
    v4 = *(_QWORD *)v4;
  }
  KeReleaseSpinLock(&KdpPowerSpinLock, CurrentIrql);
  return (unsigned int)v5;
}
