/*
 * XREFs of BgkpLockBgfxCodeSection @ 0x140725674
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140126E68 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x1403CA94C (BgkResumePrepare.c)
 *     BgkInitialize @ 0x1407D3DF4 (BgkInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     MmLockPagableDataSection @ 0x1404830A8 (MmLockPagableDataSection.c)
 */

__int64 BgkpLockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v1; // rax
  signed __int8 v2; // cf
  _BYTE *v3; // rdi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140328B30, 0LL, 0);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140328B30, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140328B30, v1, (ULONG_PTR)&qword_140328B30);
  if ( v3 )
    v3[26] |= 1u;
  v4 = dword_140328990;
  if ( !dword_140328990 )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v4 = dword_140328990;
  }
  dword_140328990 = v4 + 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328B30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328B30);
  KeAbPostRelease((ULONG_PTR)&qword_140328B30);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
}
