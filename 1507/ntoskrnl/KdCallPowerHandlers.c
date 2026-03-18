/*
 * XREFs of KdCallPowerHandlers @ 0x1401FDB1C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400A7C10 (PpmIdleExecuteTransition.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x140240798 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KdCallPowerHandlers(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rbx
  int v5; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !KdpPowerListHead )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&KdpPowerSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&KdpPowerSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KdpPowerSpinLock);
  }
  v4 = KdpPowerListHead;
  v5 = 0;
  while ( (__int64 *)v4 != &KdpPowerListHead )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v4 + 16))(a1, *(_QWORD *)(v4 + 24));
    if ( v5 < 0 )
      break;
    v4 = *(_QWORD *)v4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KdpPowerSpinLock, retaddr);
  else
    _InterlockedAnd64(&KdpPowerSpinLock, 0LL);
  __writecr8(CurrentIrql);
  return (unsigned int)v5;
}
