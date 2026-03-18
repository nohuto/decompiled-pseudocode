/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x1400EC79C
 * Callers:
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400EBC80 (KiDirectSwitchThread.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall KiScheduleNextForegroundBoost(__int64 a1)
{
  __int64 *v1; // rbx
  bool v2; // di
  __int64 **v3; // rax
  bool v4; // zf
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)(a1 + 1424);
  if ( *(_QWORD *)(a1 + 1424) == 1LL )
  {
    v2 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&qword_140338F98);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140338F98, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140338F98);
    }
    if ( *v1 == 1 )
    {
      v3 = (__int64 **)qword_140338F90;
      v4 = qword_140338F88 == (_QWORD)&qword_140338F88;
      *v1 = (__int64)&qword_140338F88;
      v2 = v4;
      v1[1] = (__int64)v3;
      if ( *v3 != &qword_140338F88 )
        __fastfail(3u);
      *v3 = v1;
      qword_140338F90 = (__int64)v1;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&qword_140338F98, retaddr);
    else
      _InterlockedAnd64(&qword_140338F98, 0LL);
    if ( v2 )
      KiInsertQueueDpc((__int64)&stru_140338F48, 0LL, 0LL, 0LL, 0);
  }
}
