/*
 * XREFs of MmUpdateMdlTracker @ 0x140214574
 * Callers:
 *     sub_14000745C @ 0x14000745C (sub_14000745C.c)
 *     sub_1401F8708 @ 0x1401F8708 (sub_1401F8708.c)
 *     sub_1401F8750 @ 0x1401F8750 (sub_1401F8750.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 *     NtWriteFileGather @ 0x140540320 (NtWriteFileGather.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiLockTrackerCompare @ 0x140214134 (MiLockTrackerCompare.c)
 */

__int64 __fastcall MmUpdateMdlTracker(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  PEPROCESS v3; // r9
  unsigned int v4; // edi
  __int64 v8; // rbx
  _QWORD *v10; // rbx
  int v11; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(PEPROCESS *)(a1 + 16);
  v4 = 0;
  if ( !v3 )
    v3 = PsInitialSystemProcess;
  v8 = *(_QWORD *)&v3[1].ThreadSeed[4];
  if ( !v8 )
    return 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 16), &LockHandle);
  v10 = *(_QWORD **)v8;
  if ( v10 )
  {
    do
    {
      v11 = MiLockTrackerCompare(a1, (__int64)v10);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
          break;
        v10 = (_QWORD *)v10[1];
      }
      else
      {
        v10 = (_QWORD *)*v10;
      }
    }
    while ( v10 );
    if ( v10 && (a2 || a3) )
    {
      v10[8] = a2;
      v10[9] = a3;
      memset(v10 + 10, 0, 0x30uLL);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  LOBYTE(v4) = v10 != 0LL;
  return v4;
}
