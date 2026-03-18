/*
 * XREFs of FsRtlFastCheckLockForWrite @ 0x1401041A4
 * Callers:
 *     FsRtlCheckLockForWriteAccess @ 0x140104110 (FsRtlCheckLockForWriteAccess.c)
 *     VerifierFsRtlFastCheckLockForWrite @ 0x140741CD4 (VerifierFsRtlFastCheckLockForWrite.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     FsRtlCheckNoSharedConflict @ 0x140104318 (FsRtlCheckNoSharedConflict.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x1401044C4 (FsRtlCheckNoExclusiveConflict.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForWrite(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PVOID FileObject,
        PVOID ProcessId)
{
  volatile signed __int32 *LockInformation; // rbp
  unsigned __int64 QuadPart; // rdi
  unsigned __int64 v9; // rbx
  volatile signed __int32 *v10; // rsi
  unsigned __int8 CurrentIrql; // r15
  BOOLEAN v12; // bl
  PVOID v14; // r14
  PVOID v15; // rbp
  __int64 v16; // rax
  BOOLEAN v17; // di
  _QWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  LockInformation = (volatile signed __int32 *)FileLock->LockInformation;
  if ( LockInformation && (*((_QWORD *)LockInformation + 4) || *((_QWORD *)LockInformation + 5)) && Length->QuadPart )
  {
    QuadPart = StartingByte->QuadPart;
    v9 = StartingByte->QuadPart + Length->QuadPart - 1;
    v18[0] = StartingByte->QuadPart;
    v20 = v9;
    v10 = LockInformation + 6;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(LockInformation + 6);
    }
    else
    {
      if ( _interlockedbittestandset64(v10, 0LL) )
        KxWaitForSpinLockAndAcquire(LockInformation + 6);
      v9 = v20;
      QuadPart = v18[0];
    }
    if ( v9 >= *(_QWORD *)LockInformation )
    {
      v14 = FileObject;
      v15 = ProcessId;
      v16 = *((_QWORD *)FileObject + 15);
      if ( !v16
        || QuadPart < *(_QWORD *)v16
        || v9 > *(_QWORD *)(v16 + 40)
        || *(_DWORD *)(v16 + 20) != Key
        || *(PVOID *)(v16 + 32) != ProcessId
        || !*(_BYTE *)(v16 + 16) )
      {
        v17 = FsRtlCheckNoSharedConflict(v10, v18, &v20);
        if ( v17 == 1 )
          v17 = FsRtlCheckNoExclusiveConflict(
                  (_DWORD)v10,
                  (unsigned int)v18,
                  (unsigned int)&v20,
                  Key,
                  (__int64)v14,
                  (__int64)v15);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v10, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
        v12 = v17;
        goto LABEL_12;
      }
      v12 = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseSpinLockInstrumented(v10, retaddr);
        goto LABEL_12;
      }
    }
    else
    {
      v12 = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseSpinLockInstrumented(LockInformation + 6, retaddr);
        goto LABEL_12;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
LABEL_12:
    __writecr8(CurrentIrql);
    return v12;
  }
  return 1;
}
