/*
 * XREFs of FsRtlFastCheckLockForRead @ 0x1400A70D8
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x1400A7050 (FsRtlCheckLockForReadAccess.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x1401B8864 (FsRtlCheckNoExclusiveConflict.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForRead(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PFILE_OBJECT FileObject,
        PVOID ProcessId)
{
  unsigned __int64 *LockInformation; // rsi
  LONGLONG QuadPart; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  KIRQL v12; // al
  KIRQL v13; // r14
  unsigned __int64 *LastLock; // rax
  BOOLEAN v15; // bl
  unsigned __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  LockInformation = (unsigned __int64 *)FileLock->LockInformation;
  if ( !LockInformation )
    return 1;
  if ( !LockInformation[5] )
    return 1;
  QuadPart = Length->QuadPart;
  if ( !Length->QuadPart )
    return 1;
  v10 = StartingByte->QuadPart;
  v16 = v10;
  v11 = v10 + QuadPart - 1;
  v17 = v11;
  v12 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v13 = v12;
  if ( v11 < *LockInformation )
  {
    KeReleaseSpinLock(LockInformation + 3, v12);
    return 1;
  }
  LastLock = (unsigned __int64 *)FileObject->LastLock;
  if ( LastLock
    && v10 >= *LastLock
    && v11 <= LastLock[5]
    && *((_DWORD *)LastLock + 5) == Key
    && (PVOID)LastLock[4] == ProcessId )
  {
    v15 = 1;
  }
  else
  {
    v15 = FsRtlCheckNoExclusiveConflict(
            (int)LockInformation + 24,
            (unsigned int)&v16,
            (unsigned int)&v17,
            Key,
            (__int64)FileObject,
            (__int64)ProcessId);
  }
  KeReleaseSpinLock(LockInformation + 3, v13);
  return v15;
}
