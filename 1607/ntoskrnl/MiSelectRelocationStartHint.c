/*
 * XREFs of MiSelectRelocationStartHint @ 0x14046E94C
 * Callers:
 *     MiSelectImageBase @ 0x14046E580 (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x14046E834 (MiObtainRelocationBits.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     RtlFindClearBits @ 0x14002CAB0 (RtlFindClearBits.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     RtlCopyBitMap @ 0x140076A78 (RtlCopyBitMap.c)
 *     RtlMergeBitMaps @ 0x14009CD90 (RtlMergeBitMaps.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
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
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326710, 0LL, 0);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140326710, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_140326710, v8, (ULONG_PTR)&qword_140326710);
  if ( v10 )
    v10[26] |= 1u;
  RtlCopyBitMap(*(unsigned int **)a1, (__int64)&stru_140326750, 0);
  RtlMergeBitMaps((__int64)&stru_140326750, *(_QWORD *)(a1 + 8));
  ClearBits = RtlFindClearBits(&stru_140326750, a2, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326710, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326710);
  KeAbPostRelease((ULONG_PTR)&qword_140326710);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return ClearBits;
}
