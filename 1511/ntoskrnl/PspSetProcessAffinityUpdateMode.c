/*
 * XREFs of PspSetProcessAffinityUpdateMode @ 0x140517F80
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeIsEmptyAffinityEx @ 0x140077130 (KeIsEmptyAffinityEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PspLockUnlockProcessExclusive @ 0x140096778 (PspLockUnlockProcessExclusive.c)
 *     PspUpdateSingleProcessAffinity @ 0x14063F640 (PspUpdateSingleProcessAffinity.c)
 */

__int64 __fastcall PspSetProcessAffinityUpdateMode(__int64 a1, int *a2)
{
  int v2; // r8d
  int v3; // edx
  _KPROCESS *Process; // rsi
  signed __int32 DirectoryTableBase; // r8d
  signed __int32 v7; // eax
  bool v8; // zf
  __int64 v9; // rbx

  v2 = *a2;
  v3 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (v2 & 2) != 0 )
    v3 = 0x40000;
  if ( (v2 & 1) != 0 )
    v3 |= 0x80000u;
  _m_prefetchw(&Process[1].DirectoryTableBase);
  DirectoryTableBase = Process[1].DirectoryTableBase;
  v7 = DirectoryTableBase;
  do
  {
    if ( (v7 & 0xC0000) == v3 )
      break;
    if ( (DirectoryTableBase & 0x40000) != 0 )
      return 3221225473LL;
    v7 = _InterlockedCompareExchange(
           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
           v3 | DirectoryTableBase & 0xFFF3FFFF,
           DirectoryTableBase);
    v8 = DirectoryTableBase == v7;
    DirectoryTableBase = v7;
  }
  while ( !v8 );
  if ( v3 == 0x40000 )
  {
    PspLockUnlockProcessExclusive((__int64)Process, a1);
  }
  else if ( (v3 & 0x80000) != 0 && KeDynamicPartitioningSupported )
  {
    --*(_WORD *)(a1 + 484);
    v9 = KeAbPreAcquire((ULONG_PTR)&PspAffinityUpdateLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspAffinityUpdateLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PspAffinityUpdateLock, v9, (ULONG_PTR)&PspAffinityUpdateLock);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    if ( !(unsigned int)KeIsEmptyAffinityEx(PspLastUpdateAffinityMask) )
      PspUpdateSingleProcessAffinity(a1, Process, PspLastUpdateAffinityMask);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspAffinityUpdateLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PspAffinityUpdateLock);
    KeAbPostRelease((ULONG_PTR)&PspAffinityUpdateLock);
    KiLeaveCriticalRegionUnsafe(a1);
  }
  return 0LL;
}
