/*
 * XREFs of PsRemoveVirtualizedTimer @ 0x1400AAC6C
 * Callers:
 *     ExpDeleteTimer @ 0x1400C1298 (ExpDeleteTimer.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PsRemoveVirtualizedTimer(__int64 a1, _QWORD *a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // al
  __int64 v5; // rdx
  _QWORD *v6; // r8

  v2 = (KSPIN_LOCK *)(a1 + 1112);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1112));
  v5 = *a2;
  v6 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v6 != a2 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  KeReleaseSpinLock(v2, v4);
}
