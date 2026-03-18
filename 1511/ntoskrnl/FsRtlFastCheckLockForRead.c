/*
 * XREFs of FsRtlFastCheckLockForRead @ 0x1400CD028
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x1400CCFA0 (FsRtlCheckLockForReadAccess.c)
 *     VerifierFsRtlFastCheckLockForRead @ 0x1406C04D8 (VerifierFsRtlFastCheckLockForRead.c)
 * Callees:
 *     FsRtlCheckNoExclusiveConflict @ 0x1400014F0 (FsRtlCheckNoExclusiveConflict.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForRead(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PFILE_OBJECT FileObject,
        PVOID ProcessId)
{
  _QWORD *LockInformation; // rsi
  LONGLONG QuadPart; // rax
  _RTL_SPLAY_LINKS *v9; // rbx
  _RTL_SPLAY_LINKS *v10; // rdi
  KIRQL v11; // al
  KIRQL v12; // r14
  _QWORD *LastLock; // rax
  BOOLEAN v15; // bl
  _RTL_SPLAY_LINKS *v16; // [rsp+30h] [rbp-28h] BYREF
  _RTL_SPLAY_LINKS *v17; // [rsp+60h] [rbp+8h] BYREF

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation )
    return 1;
  if ( !LockInformation[5] )
    return 1;
  QuadPart = Length->QuadPart;
  if ( !Length->QuadPart )
    return 1;
  v9 = (_RTL_SPLAY_LINKS *)StartingByte->QuadPart;
  v16 = v9;
  v10 = (_RTL_SPLAY_LINKS *)((char *)v9 + QuadPart - 1);
  v17 = v10;
  v11 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v12 = v11;
  if ( (unsigned __int64)v10 < *LockInformation )
  {
    KeReleaseSpinLock(LockInformation + 3, v11);
    return 1;
  }
  LastLock = FileObject->LastLock;
  if ( LastLock
    && (unsigned __int64)v9 >= *LastLock
    && (unsigned __int64)v10 <= LastLock[5]
    && *((_DWORD *)LastLock + 5) == Key
    && (PVOID)LastLock[4] == ProcessId )
  {
    v15 = 1;
  }
  else
  {
    v15 = FsRtlCheckNoExclusiveConflict(
            (__int64)(LockInformation + 3),
            &v16,
            &v17,
            Key,
            (__int64)FileObject,
            (__int64)ProcessId);
  }
  KeReleaseSpinLock(LockInformation + 3, v12);
  return v15;
}
