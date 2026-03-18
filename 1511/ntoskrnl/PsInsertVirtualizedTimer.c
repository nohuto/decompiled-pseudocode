/*
 * XREFs of PsInsertVirtualizedTimer @ 0x140093660
 * Callers:
 *     NtCreateTimer @ 0x14044EC80 (NtCreateTimer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpTimerPause @ 0x1400EE464 (ExpTimerPause.c)
 */

void __fastcall PsInsertVirtualizedTimer(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  KIRQL v6; // bp
  _QWORD *v7; // rdx

  v3 = *(_QWORD *)(a1 + 944);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 1208));
  v7 = *(_QWORD **)(v3 + 1224);
  *a2 = v3 + 1216;
  a2[1] = v7;
  if ( *v7 != v3 + 1216 )
    __fastfail(3u);
  *v7 = a2;
  *(_QWORD *)(v3 + 1224) = a2;
  if ( *(_DWORD *)(v3 + 864) )
    ExpTimerPause(a2 - 35, MEMORY[0xFFFFF78000000014], MEMORY[0xFFFFF78000000008]);
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 1208), v6);
  *a3 = v3;
}
