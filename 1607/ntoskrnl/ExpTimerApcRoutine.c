/*
 * XREFs of ExpTimerApcRoutine @ 0x140001340
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

LONG_PTR __fastcall ExpTimerApcRoutine(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rbx
  KIRQL v5; // r14
  __int64 v6; // r8
  _QWORD *v7; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 - 72;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 - 72 + 64));
  if ( (*(_BYTE *)(v3 + 244) & 1) != 0 && CurrentThread == *(struct _KTHREAD **)(v3 + 80) )
  {
    if ( !*(_DWORD *)(v3 + 240) )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackBase);
      v6 = *(_QWORD *)(v3 + 224);
      v7 = *(_QWORD **)(v3 + 232);
      if ( *(_QWORD *)(v6 + 8) != v3 + 224 || *v7 != v3 + 224 )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackBase);
      *(_BYTE *)(v3 + 244) &= ~1u;
    }
  }
  else
  {
    *a2 = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 64), v5);
  return ObfDereferenceObjectWithTag((PVOID)v3, 0x746C6644u);
}
