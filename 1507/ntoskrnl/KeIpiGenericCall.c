/*
 * XREFs of KeIpiGenericCall @ 0x140156B40
 * Callers:
 *     KeAdjustInterruptTime @ 0x14014C7D0 (KeAdjustInterruptTime.c)
 *     KeStartProfile @ 0x140204D70 (KeStartProfile.c)
 *     KeStopProfile @ 0x140204E84 (KeStopProfile.c)
 *     KeRestoreMtrrBroadcast @ 0x1403FA0DC (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x140401AA4 (KiUpdateNumberProcessors.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiIpiSendPacket @ 0x140129790 (KiIpiSendPacket.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

ULONG_PTR __stdcall KeIpiGenericCall(PKIPI_BROADCAST_WORKER BroadcastFunction, ULONG_PTR Context)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v5; // ebx
  int v6; // esi
  ULONG_PTR v7; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+50h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xCu )
    __writecr8(0xCuLL);
  v5 = 0;
  v11 = KeNumberProcessors_0;
  v6 = KeNumberProcessors_0 - 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&KiReverseStallIpiLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiReverseStallIpiLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiReverseStallIpiLock);
  }
  if ( v6 )
    KiIpiSendPacket(1u, 0LL, (__int64)KiIpiGenericCallTarget, (__int64)BroadcastFunction, Context, (__int64)&v11);
  while ( v11 != 1 )
  {
    if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v5);
  }
  __writecr8(0xEuLL);
  v11 = 0;
  v7 = ((__int64 (__fastcall *)(ULONG_PTR))BroadcastFunction)(Context);
  if ( v6 )
  {
    if ( CurrentIrql <= 0xCu )
      __writecr8(0xCuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KiReverseStallIpiLock, retaddr);
  else
    _InterlockedAnd64(&KiReverseStallIpiLock, 0LL);
  __writecr8(CurrentIrql);
  return v7;
}
