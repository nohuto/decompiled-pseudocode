/*
 * XREFs of KeDeleteThread @ 0x14002DA44
 * Callers:
 *     PspReaper @ 0x14002D9A4 (PspReaper.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KiDecrementProcessStackCount @ 0x14002DAC8 (KiDecrementProcessStackCount.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiWaitForContextSwap @ 0x14007BE78 (KiWaitForContextSwap.c)
 */

void __fastcall KeDeleteThread(_QWORD *a1)
{
  _QWORD *v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  KiWaitForContextSwap();
  KiDecrementProcessStackCount(a1[23]);
  v2 = a1 + 178;
  if ( a1[178] != 1LL )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_1402E8B18);
    if ( *v2 != 1LL && a1[179] )
    {
      v4 = *v2;
      v5 = (_QWORD *)a1[179];
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v5 != v2 )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
    }
    KeReleaseSpinLock(&qword_1402E8B18, v3);
  }
}
