/*
 * XREFs of PopPepIdleTimeoutRoutine @ 0x1402062B4
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     PopPepCountReadyActivities @ 0x1400C2394 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x1400C2438 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1400C25BC (PopPepPromoteActivities.c)
 *     PopPepUpdateIdleState @ 0x1400C2BF8 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetResidencyIdleState @ 0x1400C2CE8 (PopPepComponentGetResidencyIdleState.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 */

void PopPepIdleTimeoutRoutine()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdi
  __int64 i; // rdi
  KIRQL v4; // r14
  unsigned int ready; // r15d
  unsigned int j; // esi
  __int64 v7; // r10
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int ResidencyIdleState; // eax
  __int64 v11; // r10
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  v0 = MEMORY[0xFFFFF78000000008];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPepDeviceListLock, v2, (ULONG_PTR)&PopPepDeviceListLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
  {
    if ( (*(_BYTE *)(i + 16) & 1) == 0 )
    {
      v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(i + 64));
      if ( *(_BYTE *)(i + 136) )
      {
        ready = PopPepCountReadyActivities((unsigned int *)i, 0LL, 3);
        for ( j = 0; j < *(_DWORD *)(i + 168); ++j )
        {
          v7 = 200LL * j + i + 176;
          if ( *(_DWORD *)(v7 + 176) != *(_DWORD *)(v7 + 188) - 1 && !**(_DWORD **)(v7 + 72) && !**(_DWORD **)(v7 + 80) )
          {
            v8 = *(_QWORD *)(v7 + 136);
            if ( v0 > v8 )
            {
              v9 = v0 - v8;
              if ( (unsigned __int64)(v0 - v8) > *(_QWORD *)(v7 + 120) )
              {
                *(_QWORD *)(v7 + 120) = v9;
                ResidencyIdleState = PopPepComponentGetResidencyIdleState(v7, v9);
                if ( *(_DWORD *)(v11 + 160) != ResidencyIdleState )
                {
                  *(_DWORD *)(v11 + 160) = ResidencyIdleState;
                  PopPepUpdateIdleState(i, v11, 1);
                }
              }
            }
          }
        }
        PopPepPromoteActivities(i, 0LL, 3);
        v12 = PopPepCountReadyActivities((unsigned int *)i, 0LL, 3);
        PopPepRequestWork(ready, v12);
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(i + 64), v4);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  PopPepArmIdleTimer(1);
}
