/*
 * XREFs of KeUpdateThreadTag @ 0x140104FD4
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x14002B0C0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KiEndThreadCycleAccumulation @ 0x14007BC90 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x14007CDE0 (KiStartThreadCycleAccumulation.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 *     KiIpiSendPacket @ 0x140095FD4 (KiIpiSendPacket.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall KeUpdateThreadTag(struct _KTHREAD *a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  volatile unsigned __int8 v4; // al
  volatile unsigned __int8 v5; // al
  volatile unsigned int NextProcessor; // ebx
  struct _KPRCB *v7; // rcx
  __int64 result; // rax
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
      v4 = v13;
      if ( v13 )
        _interlockedbittestandset(&a1->Header.Lock, 0x14u);
      else
        _interlockedbittestandreset(&a1->Header.Lock, 0x14u);
      a1->Tag = v4;
      KiStartThreadCycleAccumulation((__int64)CurrentPrcb, (__int64)a1, 0);
      _enable();
    }
    else
    {
      if ( (unsigned __int8)KiAcquireThreadStateLock((__int64)a1, (__int64 *)&v10, (volatile signed __int32 **)&v11) == 2
        || a1->Running )
      {
        NextProcessor = a1->NextProcessor;
        memset(&v12[1], 0, 164);
        v12[0] = 1310721;
        KeAddProcessorAffinityEx(v12, NextProcessor & 0x7FFFFFFF);
        __writecr8(0xCuLL);
        KiIpiSendPacket(0, (unsigned __int16 *)v12, (__int64)KiIpiUpdateThreadTag, (__int64)a1, (__int64)&v13, 0LL);
        v7 = KeGetCurrentPrcb();
        while ( v7->PacketBarrier )
          _mm_pause();
      }
      else
      {
        v5 = v13;
        if ( v13 )
          _interlockedbittestandset(&a1->Header.Lock, 0x14u);
        else
          _interlockedbittestandreset(&a1->Header.Lock, 0x14u);
        a1->Tag = v5;
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
