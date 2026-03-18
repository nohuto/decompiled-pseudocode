/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x1400F1340
 * Callers:
 *     NtQueryInformationThread @ 0x1403EE050 (NtQueryInformationThread.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x14002B0C0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 *     KeFlushProcessWriteBuffers @ 0x140095EE8 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendPacket @ 0x140095FD4 (KiIpiSendPacket.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x1400F14C8 (KeUpdateTotalCyclesCurrentThread.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  volatile unsigned int NextProcessor; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  volatile unsigned __int64 CycleTime; // rdx
  _BYTE v8[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int64 *v10; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v11[44]; // [rsp+50h] [rbp-B0h] BYREF

  if ( Thread == KeGetCurrentThread() )
    return KeUpdateTotalCyclesCurrentThread();
  KiAcquireThreadLockRaiseToDpc((__int64)Thread, v8);
  if ( (unsigned __int8)KiAcquireThreadStateLock((__int64)Thread, &v9, (volatile signed __int32 **)&v10) == 2 )
  {
    NextProcessor = Thread->NextProcessor;
    if ( v9 )
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
    if ( v10 )
      _InterlockedAnd64(v10, 0LL);
    v11[1] = 0;
    Thread->ThreadLock = 0LL;
    v11[0] = 1310721;
    memset(&v11[2], 0, 0xA0uLL);
    KeAddProcessorAffinityEx(v11, NextProcessor);
    __writecr8(0xCuLL);
    KiIpiSendPacket(0, (unsigned __int16 *)v11, (__int64)PopPoCoalescinCallback, 0LL, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
    *CycleTimeStamp = __rdtsc();
    CycleTime = Thread->CycleTime;
  }
  else
  {
    if ( Thread->Running )
      KeFlushProcessWriteBuffers(1);
    *CycleTimeStamp = __rdtsc();
    CycleTime = Thread->CycleTime;
    if ( v9 )
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
    if ( v10 )
      _InterlockedAnd64(v10, 0LL);
    Thread->ThreadLock = 0LL;
  }
  __writecr8(v8[0]);
  return CycleTime;
}
