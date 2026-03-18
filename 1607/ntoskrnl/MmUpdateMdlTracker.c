/*
 * XREFs of MmUpdateMdlTracker @ 0x1401E3260
 * Callers:
 *     IopProbeAndLockPages @ 0x1400A4754 (IopProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x1401C5358 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1401CADE0 (IopProbeAndLockPages_1.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x140446600 (NtWriteFile.c)
 *     NtWriteFileGather @ 0x1404BD44C (NtWriteFileGather.c)
 *     NtQueryQuotaInformationFile @ 0x1406257E0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x1401715C0 (memset.c)
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
