/*
 * XREFs of MiReleaseSessionVa @ 0x1400AC378
 * Callers:
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiReleaseSessionVa(__int64 a1, ULONG a2)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  volatile signed __int32 *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned __int64)(a1 - qword_140326900) >> 21;
  v5 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  --CurrentThread->SpecialApcDisable;
  v6 = (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7816);
  v7 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64(v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  RtlClearBits((PRTL_BITMAP)(v5 + 7824), v4, a2);
  if ( (unsigned int)v4 < *(_DWORD *)(v5 + 7840) )
    *(_DWORD *)(v5 + 7840) = v4;
  *(_DWORD *)(v5 + 7948) -= a2;
  v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 7816), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9 + 7816);
  KeAbPostRelease(v9 + 7816);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
