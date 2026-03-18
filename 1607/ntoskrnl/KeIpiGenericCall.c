/*
 * XREFs of KeIpiGenericCall @ 0x14012FA64
 * Callers:
 *     KeAdjustInterruptTime @ 0x140126A0C (KeAdjustInterruptTime.c)
 *     KeStartProfile @ 0x1401D6D44 (KeStartProfile.c)
 *     KeStopProfile @ 0x1401D6E54 (KeStopProfile.c)
 *     MiStackTheftFreezeProcessors @ 0x1401E65E4 (MiStackTheftFreezeProcessors.c)
 *     KeRestoreMtrrBroadcast @ 0x1403D36E8 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x1403DD734 (KiUpdateNumberProcessors.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 *     KiIpiSendPacket @ 0x1400C8A18 (KiIpiSendPacket.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D4030 (KeQueryActiveProcessorCountEx.c)
 */

ULONG_PTR __stdcall KeIpiGenericCall(PKIPI_BROADCAST_WORKER BroadcastFunction, ULONG_PTR Context)
{
  unsigned __int8 CurrentIrql; // bl
  ULONG v5; // ebp
  ULONG_PTR v6; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG ActiveProcessorCount; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xCu )
    __writecr8(0xCuLL);
  v10 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v5 = ActiveProcessorCount - 1;
  KxAcquireSpinLock(&KiReverseStallIpiLock);
  if ( v5 )
    KiIpiSendPacket(
      1,
      0,
      (__int64)KiIpiGenericCallTarget,
      (__int64)BroadcastFunction,
      Context,
      (__int64)&ActiveProcessorCount);
  while ( ActiveProcessorCount != 1 )
    KeYieldProcessorEx(&v10);
  __writecr8(0xEuLL);
  ActiveProcessorCount = 0;
  v6 = ((__int64 (__fastcall *)(ULONG_PTR))BroadcastFunction)(Context);
  if ( v5 )
  {
    if ( CurrentIrql <= 0xCu )
      __writecr8(0xCuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
  }
  KxReleaseSpinLock(&KiReverseStallIpiLock);
  __writecr8(CurrentIrql);
  return v6;
}
