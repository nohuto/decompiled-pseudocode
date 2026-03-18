/*
 * XREFs of IoRaiseInformationalHardError @ 0x1401F6358
 * Callers:
 *     MiCauseOverCommitPopup @ 0x140220B2C (MiCauseOverCommitPopup.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     FsRtlLogCcFlushError @ 0x14066C660 (FsRtlLogCcFlushError.c)
 *     VerifierIoRaiseInformationalHardError @ 0x140741FB8 (VerifierIoRaiseInformationalHardError.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeInitializeApc @ 0x1400215A8 (KeInitializeApc.c)
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __stdcall IoRaiseInformationalHardError(NTSTATUS ErrorStatus, PUNICODE_STRING String, PKTHREAD Thread)
{
  bool v6; // zf
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rbx
  PVOID v9; // rcx
  PVOID v11; // rsi
  void *v12; // rcx
  unsigned __int8 CurrentIrql; // bp
  const void *v15; // rcx
  unsigned __int16 v16; // ax
  __int64 v17; // rsi
  int v18; // r14d
  const void *v19; // rcx
  unsigned __int16 v20; // ax
  __int64 **v21; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

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
  if ( dword_14034BB1C > 25 )
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
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&qword_14034BAF0);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034BAF0, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_14034BAF0);
    }
    if ( Semaphore.Header.SignalState < 25 )
    {
      if ( !IopCurrentHardError
        || *((_DWORD *)v8 + 4) != *(_DWORD *)(IopCurrentHardError + 16)
        || ((v15 = (const void *)v8[4]) != 0LL || *(_QWORD *)(IopCurrentHardError + 32))
        && ((v16 = *((_WORD *)v8 + 12), v16 != *(_WORD *)(IopCurrentHardError + 24))
         || memcmp(v15, *(const void **)(IopCurrentHardError + 32), v16)) )
      {
        v17 = qword_14034BAE0;
        if ( (__int64 *)qword_14034BAE0 == &qword_14034BAE0 )
        {
LABEL_47:
          v21 = (__int64 **)qword_14034BAE8;
          *v8 = &qword_14034BAE0;
          v8[1] = v21;
          if ( *v21 != &qword_14034BAE0 )
            __fastfail(3u);
          *v21 = v8;
          qword_14034BAE8 = (__int64)v8;
          KeReleaseSemaphore(&Semaphore, 0, 1, 0);
          if ( !byte_14034BB18 )
          {
            byte_14034BB18 = 1;
            ExQueueWorkItem(&IopHardError, DelayedWorkQueue);
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(&qword_14034BAF0, retaddr);
          else
            _InterlockedAnd64(&qword_14034BAF0, 0LL);
          __writecr8(CurrentIrql);
          return 1;
        }
        v18 = *((_DWORD *)v8 + 4);
        while ( 1 )
        {
          if ( v18 == *(_DWORD *)(v17 + 16) )
          {
            v19 = (const void *)v8[4];
            if ( !v19 && !*(_QWORD *)(v17 + 32) )
              break;
            v20 = *((_WORD *)v8 + 12);
            if ( v20 == *(_WORD *)(v17 + 24) && !memcmp(v19, *(const void **)(v17 + 32), v20) )
              break;
          }
          v17 = *(_QWORD *)v17;
          if ( (__int64 *)v17 == &qword_14034BAE0 )
            goto LABEL_47;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&qword_14034BAF0, retaddr);
    else
      _InterlockedAnd64(&qword_14034BAF0, 0LL);
    __writecr8(CurrentIrql);
    goto LABEL_21;
  }
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x4350414Bu);
  if ( !v11 )
  {
LABEL_21:
    v12 = (void *)v8[4];
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_16;
  }
  _InterlockedIncrement(&dword_14034BB1C);
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
