/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x140095D3C
 * Callers:
 *     NtQueryInformationThread @ 0x140519650 (NtQueryInformationThread.c)
 * Callees:
 *     KeUpdateTotalCyclesCurrentThread @ 0x140095D9C (KeUpdateTotalCyclesCurrentThread.c)
 *     KeFlushProcessWriteBuffers @ 0x1400C892C (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendPacket @ 0x1400C8A18 (KiIpiSendPacket.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1400CEDEC (KiAcquireThreadLockRaiseToDpc.c)
 *     KiAcquireThreadStateLock @ 0x1400D3590 (KiAcquireThreadStateLock.c)
 *     KeAddProcessorAffinityEx @ 0x1400D3F88 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
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
  KiAcquireThreadLockRaiseToDpc(Thread, v8);
  if ( (unsigned __int8)KiAcquireThreadStateLock(Thread, &v9, &v10) == 2 )
  {
    NextProcessor = Thread->NextProcessor;
    if ( v9 )
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
    if ( v10 )
      _InterlockedAnd64(v10, 0LL);
    Thread->ThreadLock = 0LL;
    v11[0] = 1310721;
    memset(&v11[1], 0, 0xA4uLL);
    KeAddProcessorAffinityEx(v11, NextProcessor);
    __writecr8(0xCuLL);
    KiIpiSendPacket(0, (unsigned int)v11, (unsigned int)xHalFreeMessageTarget, 0, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
    *CycleTimeStamp = __rdtsc();
    CycleTime = Thread->CycleTime;
  }
  else
  {
    if ( Thread->Running )
      KeFlushProcessWriteBuffers(1LL);
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
