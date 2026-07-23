/*
 * XREFs of MmUpdateMdlTracker @ 0x1401E308C
 * Callers:
 *     IopProbeAndLockPages @ 0x14010AC3C (IopProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x1401CAC3C (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1401CAC84 (IopProbeAndLockPages_1.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x1404454D0 (NtWriteFile.c)
 *     NtWriteFileGather @ 0x1404A917C (NtWriteFileGather.c)
 *     NtQueryQuotaInformationFile @ 0x140625894 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall MmUpdateMdlTracker(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  PEPROCESS v3; // r9
  unsigned int v4; // edi
  _QWORD *i; // rbx
  unsigned __int64 v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(PEPROCESS *)(a1 + 16);
  v4 = 0;
  if ( !v3 )
    v3 = PsInitialSystemProcess;
  i = *(_QWORD **)&v3[1].ThreadSeed[6];
  if ( !i )
    return 0LL;
  KeAcquireInStackQueuedSpinLock(i + 2, &LockHandle);
LABEL_6:
  for ( i = (_QWORD *)*i; i; i = (_QWORD *)i[1] )
  {
    v10 = i[3];
    if ( a1 < v10 )
      goto LABEL_6;
    if ( a1 <= v10 )
    {
      if ( a2 || a3 )
      {
        i[8] = a2;
        i[9] = a3;
        memset(i + 10, 0, 0x30uLL);
      }
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  LOBYTE(v4) = i != 0LL;
  return v4;
}
