/*
 * XREFs of IoRaiseInformationalHardError @ 0x1401BB0F8
 * Callers:
 *     MiCauseOverCommitPopup @ 0x1401DBE7C (MiCauseOverCommitPopup.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     FsRtlLogCcFlushError @ 0x1405F3820 (FsRtlLogCcFlushError.c)
 *     VerifierIoRaiseInformationalHardError @ 0x1406C07C4 (VerifierIoRaiseInformationalHardError.c)
 * Callees:
 *     KeInitializeApc @ 0x14002C320 (KeInitializeApc.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeInsertQueueApc @ 0x1400313A0 (KeInsertQueueApc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall IoRaiseInformationalHardError(NTSTATUS ErrorStatus, PUNICODE_STRING String, PKTHREAD Thread)
{
  bool v6; // zf
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rbx
  PVOID v9; // rcx
  PVOID v11; // rsi
  void *v12; // rcx
  KIRQL v13; // si
  const void *v14; // rcx
  unsigned __int16 v15; // ax
  __int64 v16; // rdi
  int v17; // ebp
  const void *v18; // rcx
  unsigned __int16 v19; // ax
  __int64 **v20; // rax

  if ( !IopInitSystemCompletedEnoughForReInitRoutines )
    return 0;
  v6 = Thread
     ? (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x10) == 0
     : (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x10) == 0;
  if ( !v6
    || ErrorStatus == -1073741283
    || ErrorStatus == -1073741500
    || ErrorStatus == 1073741848
    || !Thread && Semaphore.Header.SignalState >= 25 )
  {
    return 0;
  }
  if ( dword_1402FB69C > 25 )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x72456F49u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x28uLL);
  *((_DWORD *)v8 + 4) = ErrorStatus;
  if ( String && String->Length )
  {
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, String->Length, 0x72456F49u);
    if ( !v9 )
    {
LABEL_16:
      ExFreePoolWithTag(v8, 0);
      return 0;
    }
    *((_WORD *)v8 + 12) = String->Length;
    *((_WORD *)v8 + 13) = String->Length;
    v8[4] = v9;
    memmove(v9, String->Buffer, String->Length);
  }
  if ( !Thread )
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&qword_1402FB670);
    if ( Semaphore.Header.SignalState < 25 )
    {
      if ( !IopCurrentHardError
        || *((_DWORD *)v8 + 4) != *(_DWORD *)(IopCurrentHardError + 16)
        || ((v14 = (const void *)v8[4]) != 0LL || *(_QWORD *)(IopCurrentHardError + 32))
        && ((v15 = *((_WORD *)v8 + 12), v15 != *(_WORD *)(IopCurrentHardError + 24))
         || memcmp(v14, *(const void **)(IopCurrentHardError + 32), v15)) )
      {
        v16 = qword_1402FB660;
        if ( (__int64 *)qword_1402FB660 == &qword_1402FB660 )
        {
LABEL_40:
          v20 = (__int64 **)qword_1402FB668;
          *v8 = &qword_1402FB660;
          v8[1] = v20;
          if ( *v20 != &qword_1402FB660 )
            __fastfail(3u);
          *v20 = v8;
          qword_1402FB668 = (__int64)v8;
          KeReleaseSemaphore(&Semaphore, 0, 1, 0);
          if ( !byte_1402FB698 )
          {
            byte_1402FB698 = 1;
            ExQueueWorkItem(&IopHardError, DelayedWorkQueue);
          }
          KeReleaseSpinLock(&qword_1402FB670, v13);
          return 1;
        }
        v17 = *((_DWORD *)v8 + 4);
        while ( 1 )
        {
          if ( v17 == *(_DWORD *)(v16 + 16) )
          {
            v18 = (const void *)v8[4];
            if ( !v18 && !*(_QWORD *)(v16 + 32) )
              break;
            v19 = *((_WORD *)v8 + 12);
            if ( v19 == *(_WORD *)(v16 + 24) && !memcmp(v18, *(const void **)(v16 + 32), v19) )
              break;
          }
          v16 = *(_QWORD *)v16;
          if ( (__int64 *)v16 == &qword_1402FB660 )
            goto LABEL_40;
        }
      }
    }
    KeReleaseSpinLock(&qword_1402FB670, v13);
LABEL_21:
    v12 = (void *)v8[4];
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_16;
  }
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x4350414Bu);
  if ( !v11 )
    goto LABEL_21;
  _InterlockedIncrement(&dword_1402FB69C);
  KeInitializeApc(
    (__int64)v11,
    (__int64)Thread,
    0,
    (__int64)PspQueueApcSpecialApc,
    0LL,
    (__int64)IopRaiseInformationalHardError,
    0,
    (__int64)v8);
  KeInsertQueueApc((__int64)v11, 0LL, 0LL, 0);
  return 1;
}
