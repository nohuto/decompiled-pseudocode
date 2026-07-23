/*
 * XREFs of MiSelectRelocationStartHint @ 0x14046D81C
 * Callers:
 *     MiSelectImageBase @ 0x14046D450 (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x14046D704 (MiObtainRelocationBits.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     RtlFindClearBits @ 0x14002C630 (RtlFindClearBits.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlCopyBitMap @ 0x140076AF8 (RtlCopyBitMap.c)
 *     RtlMergeBitMaps @ 0x14009C590 (RtlMergeBitMaps.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

ULONG __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, ULONG a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  _BYTE *v8; // rax
  signed __int8 v9; // cf
  _BYTE *v10; // rdi
  ULONG ClearBits; // edi

  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBits(*(PRTL_BITMAP *)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326750, 0LL, 0);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140326750, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_140326750, v8, (ULONG_PTR)&qword_140326750);
  if ( v10 )
    v10[26] |= 1u;
  RtlCopyBitMap(*(PRTL_BITMAP *)a1, &Destination, 0);
  RtlMergeBitMaps((__int64)&Destination, *(_QWORD *)(a1 + 8));
  ClearBits = RtlFindClearBits(&Destination, a2, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326750, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326750);
  KeAbPostRelease((ULONG_PTR)&qword_140326750);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return ClearBits;
}
