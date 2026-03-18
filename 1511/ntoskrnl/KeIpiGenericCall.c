/*
 * XREFs of KeIpiGenericCall @ 0x14012568C
 * Callers:
 *     KeAdjustInterruptTime @ 0x140117958 (KeAdjustInterruptTime.c)
 *     KeStartProfile @ 0x1401C7CFC (KeStartProfile.c)
 *     KeStopProfile @ 0x1401C7E10 (KeStopProfile.c)
 *     KeRestoreMtrrBroadcast @ 0x1403A76C0 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x1403B1244 (KiUpdateNumberProcessors.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiIpiSendPacket @ 0x140095FD4 (KiIpiSendPacket.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 */

ULONG_PTR __stdcall KeIpiGenericCall(PKIPI_BROADCAST_WORKER BroadcastFunction, ULONG_PTR Context)
{
  unsigned __int8 CurrentIrql; // bl
  ULONG v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // r8
  ULONG_PTR v8; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG ActiveProcessorCount; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xCu )
    __writecr8(0xCuLL);
  v12 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v5 = ActiveProcessorCount - 1;
  KxAcquireSpinLock(&KiReverseStallIpiLock);
  if ( v5 )
    KiIpiSendPacket(
      1u,
      0LL,
      (__int64)KiIpiGenericCallTarget,
      (__int64)BroadcastFunction,
      Context,
      (__int64)&ActiveProcessorCount);
  while ( ActiveProcessorCount != 1 )
    KeYieldProcessorEx(&v12, v6, v7);
  __writecr8(0xEuLL);
  ActiveProcessorCount = 0;
  v8 = ((__int64 (__fastcall *)(ULONG_PTR))BroadcastFunction)(Context);
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
  return v8;
}
