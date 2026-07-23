/*
 * XREFs of MiSelectRelocationStartHint @ 0x1403C6B04
 * Callers:
 *     MiSelectImageBase @ 0x1403C6738 (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x1403C69EC (MiObtainRelocationBits.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlCopyBitMap @ 0x1400220C8 (RtlCopyBitMap.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlFindClearBits @ 0x1400A0FD0 (RtlFindClearBits.c)
 *     RtlMergeBitMaps @ 0x1400E1998 (RtlMergeBitMaps.c)
 */

ULONG __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, ULONG a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rdi
  ULONG ClearBits; // edi

  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBits(*(PRTL_BITMAP *)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE448, 0LL, 0LL);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE448, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FE448, v8, (ULONG_PTR)&qword_1402FE448);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  RtlCopyBitMap(*(PRTL_BITMAP *)a1, &Destination, 0);
  RtlMergeBitMaps((__int64)&Destination, *(_QWORD *)(a1 + 8));
  ClearBits = RtlFindClearBits(&Destination, a2, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE448, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE448);
  KeAbPostRelease((ULONG_PTR)&qword_1402FE448);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return ClearBits;
}
