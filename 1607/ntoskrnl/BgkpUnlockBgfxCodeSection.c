/*
 * XREFs of BgkpUnlockBgfxCodeSection @ 0x14072572C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140126E68 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumeFinished @ 0x1403C9590 (BgkResumeFinished.c)
 *     BgkResumePrepare @ 0x1403CA94C (BgkResumePrepare.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     MmUnlockPagableImageSection @ 0x1400AC6FC (MmUnlockPagableImageSection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 BgkpUnlockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v1; // rax
  signed __int8 v2; // cf
  _BYTE *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140328B30, 0LL, 0);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140328B30, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140328B30, v1, (ULONG_PTR)&qword_140328B30);
  if ( v3 )
    v3[26] |= 1u;
  if ( !--dword_140328990 )
  {
    MmUnlockPagableImageSection(ImageSectionHandle);
    ImageSectionHandle = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328B30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328B30);
  KeAbPostRelease((ULONG_PTR)&qword_140328B30);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v4, v5, v6);
}
