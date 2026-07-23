/*
 * XREFs of ExTimerRundown @ 0x1400EE89C
 * Callers:
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     ExpCancelTimer @ 0x1400EC064 (ExpCancelTimer.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 */

void ExTimerRundown()
{
  struct _KTHREAD *CurrentThread; // r15
  KIRQL v1; // al
  unsigned __int64 *p_ThreadLock; // rdi
  _QWORD *v3; // rcx
  KIRQL v4; // si
  ULONG_PTR v5; // rbx
  int v6; // esi
  KIRQL v7; // r12
  signed __int64 BugCheckParameter4; // rcx

  CurrentThread = KeGetCurrentThread();
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackBase);
  p_ThreadLock = &CurrentThread[1].ThreadLock;
  while ( 1 )
  {
    v3 = (_QWORD *)*p_ThreadLock;
    v4 = v1;
    if ( (unsigned __int64 *)*p_ThreadLock == p_ThreadLock )
      break;
    v5 = (ULONG_PTR)(v3 - 28);
    ObfReferenceObjectWithTag(v3 - 28, 0x746C6644u);
    KeReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackBase, v4);
    v6 = 1;
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 64));
    if ( (*(_BYTE *)(v5 + 244) & 1) != 0 && CurrentThread == *(struct _KTHREAD **)(v5 + 80) )
      v6 = ExpCancelTimer((PKTIMER)v5) + 1;
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 64), v7);
    if ( ObpTraceFlags )
      ObpPushStackInfo(v5 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 48), -v6) - v6;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v5, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v5 - 48);
    }
    v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackBase);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackBase, v1);
}
