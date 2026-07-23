/*
 * XREFs of KeUpdateThreadTag @ 0x14010D73C
 * Callers:
 *     <none>
 * Callees:
 *     KiIpiSendPacket @ 0x1400C68B8 (KiIpiSendPacket.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1400CCC8C (KiAcquireThreadLockRaiseToDpc.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D0560 (KiEndThreadCycleAccumulation.c)
 *     KiAcquireThreadStateLock @ 0x1400D1430 (KiAcquireThreadStateLock.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1640 (KiStartThreadCycleAccumulation.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KeUpdateThreadTag(struct _KTHREAD *a1, int a2)
{
  volatile unsigned __int8 v3; // al
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  volatile unsigned __int8 v6; // al
  volatile unsigned int NextProcessor; // ebx
  struct _KPRCB *v8; // rcx
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  struct _KPRCB *v10; // [rsp+40h] [rbp-C8h] BYREF
  volatile signed __int64 *v11; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v12[44]; // [rsp+58h] [rbp-B0h] BYREF
  int v13; // [rsp+130h] [rbp+28h] BYREF

  v13 = a2;
  KiAcquireThreadLockRaiseToDpc((__int64)a1, &v9);
  if ( (unsigned __int8)a1->Tag != v13 )
  {
    if ( a1 == KeGetCurrentThread() )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = CurrentPrcb;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, (__int64)a1, 0LL);
      v6 = v13;
      if ( v13 )
        _interlockedbittestandset(&a1->Header.Lock, 0x14u);
      else
        _interlockedbittestandreset(&a1->Header.Lock, 0x14u);
      a1->Tag = v6;
      KiStartThreadCycleAccumulation((__int64)CurrentPrcb, (__int64)a1, 0);
      _enable();
    }
    else
    {
      if ( (unsigned __int8)KiAcquireThreadStateLock((__int64)a1, (__int64 *)&v10, (volatile signed __int32 **)&v11) == 2
        || a1->Running )
      {
        NextProcessor = a1->NextProcessor;
        v12[0] = 1310721;
        memset(&v12[1], 0, 0xA4uLL);
        KeAddProcessorAffinityEx(v12, NextProcessor & 0x7FFFFFFF);
        __writecr8(0xCuLL);
        KiIpiSendPacket(0, (int)v12, (__int64)KiIpiUpdateThreadTag, (__int64)a1, (__int64)&v13, 0LL);
        v8 = KeGetCurrentPrcb();
        while ( v8->PacketBarrier )
          _mm_pause();
      }
      else
      {
        v3 = v13;
        if ( v13 )
          _interlockedbittestandset(&a1->Header.Lock, 0x14u);
        else
          _interlockedbittestandreset(&a1->Header.Lock, 0x14u);
        a1->Tag = v3;
      }
      if ( v10 )
        _InterlockedAnd64((volatile signed __int64 *)&v10->PrcbLock, 0LL);
      if ( v11 )
        _InterlockedAnd64(v11, 0LL);
    }
  }
  a1->ThreadLock = 0LL;
  result = (unsigned __int8)v9;
  __writecr8((unsigned __int8)v9);
  return result;
}
