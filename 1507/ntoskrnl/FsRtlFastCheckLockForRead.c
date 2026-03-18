/*
 * XREFs of FsRtlFastCheckLockForRead @ 0x140104378
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x140104088 (FsRtlCheckLockForReadAccess.c)
 *     VerifierFsRtlFastCheckLockForRead @ 0x140741CCC (VerifierFsRtlFastCheckLockForRead.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x1401044C4 (FsRtlCheckNoExclusiveConflict.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForRead(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PFILE_OBJECT FileObject,
        PVOID ProcessId)
{
  char *LockInformation; // rbp
  unsigned __int64 QuadPart; // rdi
  unsigned __int64 v10; // rbx
  volatile signed __int32 *v11; // rsi
  unsigned __int8 CurrentIrql; // r14
  BOOLEAN v13; // bl
  unsigned __int64 *LastLock; // rax
  BOOLEAN v15; // di
  LONGLONG v16; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  LockInformation = (char *)FileLock->LockInformation;
  if ( !LockInformation || !*((_QWORD *)LockInformation + 5) || !Length->QuadPart )
    return 1;
  QuadPart = StartingByte->QuadPart;
  v10 = StartingByte->QuadPart + Length->QuadPart - 1;
  v16 = StartingByte->QuadPart;
  v18 = v10;
  v11 = (volatile signed __int32 *)(LockInformation + 24);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(LockInformation + 24);
  }
  else
  {
    if ( _interlockedbittestandset64(v11, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)LockInformation + 6);
    v10 = v18;
    QuadPart = v16;
  }
  if ( v10 >= *(_QWORD *)LockInformation )
  {
    LastLock = (unsigned __int64 *)FileObject->LastLock;
    if ( !LastLock
      || QuadPart < *LastLock
      || v10 > LastLock[5]
      || *((_DWORD *)LastLock + 5) != Key
      || (PVOID)LastLock[4] != ProcessId )
    {
      v15 = FsRtlCheckNoExclusiveConflict(
              (int)LockInformation + 24,
              (unsigned int)&v16,
              (unsigned int)&v18,
              Key,
              (__int64)FileObject,
              (__int64)ProcessId);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(LockInformation + 24, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
      v13 = v15;
      goto LABEL_12;
    }
    v13 = 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
      goto LABEL_11;
LABEL_24:
    KiReleaseSpinLockInstrumented(LockInformation + 24, retaddr);
    goto LABEL_12;
  }
  v13 = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    goto LABEL_24;
LABEL_11:
  _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
LABEL_12:
  __writecr8(CurrentIrql);
  return v13;
}
