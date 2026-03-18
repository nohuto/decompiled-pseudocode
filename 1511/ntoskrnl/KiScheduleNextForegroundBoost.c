/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x1400E554C
 * Callers:
 *     KiTryScheduleNextForegroundBoost @ 0x14002A78C (KiTryScheduleNextForegroundBoost.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiDirectSwitchThread @ 0x1400844B0 (KiDirectSwitchThread.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 */

void __fastcall KiScheduleNextForegroundBoost(__int64 a1)
{
  __int64 *v1; // rbx
  bool v2; // di
  __int64 **v3; // rax
  bool v4; // zf

  v1 = (__int64 *)(a1 + 1424);
  if ( *(_QWORD *)(a1 + 1424) == 1LL )
  {
    v2 = 0;
    KxAcquireSpinLock(&qword_1402E8B18);
    if ( *v1 == 1 )
    {
      v3 = (__int64 **)qword_1402E8B10;
      v4 = qword_1402E8B08 == (_QWORD)&qword_1402E8B08;
      *v1 = (__int64)&qword_1402E8B08;
      v2 = v4;
      v1[1] = (__int64)v3;
      if ( *v3 != &qword_1402E8B08 )
        __fastfail(3u);
      *v3 = v1;
      qword_1402E8B10 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_1402E8B18);
    if ( v2 )
      KiInsertQueueDpc((ULONG_PTR)&stru_1402E8AC8, 0LL, 0LL, 0LL, 0);
  }
}
