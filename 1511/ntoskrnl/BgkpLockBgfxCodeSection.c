/*
 * XREFs of BgkpLockBgfxCodeSection @ 0x1406D9690
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14011BC4C (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x14039ED54 (BgkResumePrepare.c)
 *     BgkInitialize @ 0x140787C58 (BgkInitialize.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     MmLockPagableDataSection @ 0x1403CF528 (MmLockPagableDataSection.c)
 */

__int64 BgkpLockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  int v4; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&qword_1403063F0, 0LL, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403063F0, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_1403063F0, v1, (ULONG_PTR)&qword_1403063F0);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  v4 = dword_140305D7C;
  if ( !dword_140305D7C )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v4 = dword_140305D7C;
  }
  dword_140305D7C = v4 + 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403063F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403063F0);
  KeAbPostRelease((ULONG_PTR)&qword_1403063F0);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
