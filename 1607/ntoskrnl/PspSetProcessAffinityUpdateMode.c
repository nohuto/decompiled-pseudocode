/*
 * XREFs of PspSetProcessAffinityUpdateMode @ 0x14054C7D4
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     PspLockUnlockProcessExclusive @ 0x1400AA9B4 (PspLockUnlockProcessExclusive.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     KeIsEmptyAffinityEx @ 0x1400D4810 (KeIsEmptyAffinityEx.c)
 *     PspUpdateSingleProcessAffinity @ 0x14067DD8C (PspUpdateSingleProcessAffinity.c)
 */

__int64 __fastcall PspSetProcessAffinityUpdateMode(__int64 a1, int *a2)
{
  _KPROCESS *Process; // rsi
  int v4; // eax
  int v5; // edx
  __int64 DirectoryTableBase_low; // r8
  unsigned __int32 DirectoryTableBase; // eax
  bool v8; // zf
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = *a2;
  v5 = 0;
  if ( (v4 & 2) != 0 )
    v5 = 0x40000;
  if ( (v4 & 1) != 0 )
    v5 |= 0x80000u;
  _m_prefetchw(&Process[1].DirectoryTableBase);
  DirectoryTableBase_low = LODWORD(Process[1].DirectoryTableBase);
  DirectoryTableBase = Process[1].DirectoryTableBase;
  do
  {
    if ( (DirectoryTableBase & 0xC0000) == v5 )
      break;
    if ( (DirectoryTableBase_low & 0x40000) != 0 )
      return 3221225473LL;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                           v5 | DirectoryTableBase_low & 0xFFF3FFFF,
                           DirectoryTableBase_low);
    v8 = (_DWORD)DirectoryTableBase_low == DirectoryTableBase;
    DirectoryTableBase_low = DirectoryTableBase;
  }
  while ( !v8 );
  if ( v5 == 0x40000 )
  {
    PspLockUnlockProcessExclusive((__int64)Process, a1, DirectoryTableBase_low, 0x40000LL);
  }
  else if ( (v5 & 0x80000) != 0 && KeDynamicPartitioningSupported )
  {
    --*(_WORD *)(a1 + 484);
    v9 = KeAbPreAcquire((ULONG_PTR)&PspAffinityUpdateLock, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspAffinityUpdateLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PspAffinityUpdateLock, v9, (ULONG_PTR)&PspAffinityUpdateLock);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    if ( !(unsigned int)KeIsEmptyAffinityEx(PspLastUpdateAffinityMask) )
      PspUpdateSingleProcessAffinity(a1, Process, PspLastUpdateAffinityMask);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspAffinityUpdateLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PspAffinityUpdateLock);
    KeAbPostRelease((ULONG_PTR)&PspAffinityUpdateLock);
    KiLeaveCriticalRegionUnsafe(a1, v10, v11, v12);
  }
  return 0LL;
}
