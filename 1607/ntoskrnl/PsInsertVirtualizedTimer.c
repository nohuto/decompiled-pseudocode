/*
 * XREFs of PsInsertVirtualizedTimer @ 0x14007E5B4
 * Callers:
 *     NtCreateTimer @ 0x14047056C (NtCreateTimer.c)
 * Callees:
 *     ExpTimerPause @ 0x1400ACE44 (ExpTimerPause.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PsInsertVirtualizedTimer(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  KIRQL v6; // bp
  _QWORD *v7; // rdx

  v3 = *(_QWORD *)(a1 + 944);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 1112));
  v7 = *(_QWORD **)(v3 + 1128);
  if ( *v7 != v3 + 1120 )
    __fastfail(3u);
  *a2 = v3 + 1120;
  a2[1] = v7;
  *v7 = a2;
  *(_QWORD *)(v3 + 1128) = a2;
  if ( *(_DWORD *)(v3 + 856) )
    ExpTimerPause(a2 - 35, MEMORY[0xFFFFF78000000014], MEMORY[0xFFFFF78000000008]);
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 1112), v6);
  *a3 = v3;
}
