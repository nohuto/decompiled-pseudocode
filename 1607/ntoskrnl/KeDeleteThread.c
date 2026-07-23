/*
 * XREFs of KeDeleteThread @ 0x1400C9970
 * Callers:
 *     PspReaper @ 0x1400C910C (PspReaper.c)
 * Callees:
 *     KiWaitForContextSwap @ 0x1400C9948 (KiWaitForContextSwap.c)
 *     KiDecrementProcessStackCount @ 0x1400CC9C0 (KiDecrementProcessStackCount.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall KeDeleteThread(_QWORD *a1)
{
  _QWORD *v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  KiWaitForContextSwap((__int64)a1);
  KiDecrementProcessStackCount(a1[23]);
  v2 = a1 + 179;
  if ( a1[179] != 1LL )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_14030E518);
    if ( *v2 != 1LL && a1[180] )
    {
      v4 = *v2;
      v5 = (_QWORD *)a1[180];
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v5 != v2 )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
    }
    KeReleaseSpinLock(&qword_14030E518, v3);
  }
}
