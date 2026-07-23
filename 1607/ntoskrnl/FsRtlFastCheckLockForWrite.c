/*
 * XREFs of FsRtlFastCheckLockForWrite @ 0x1400AB3E4
 * Callers:
 *     FsRtlCheckLockForWriteAccess @ 0x1400AB350 (FsRtlCheckLockForWriteAccess.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x1401B8864 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x1401B8918 (FsRtlCheckNoSharedConflict.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForWrite(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PVOID FileObject,
        PVOID ProcessId)
{
  unsigned __int64 *LockInformation; // rsi
  LONGLONG QuadPart; // rax
  unsigned __int64 v9; // rbx
  KSPIN_LOCK *v10; // rbp
  unsigned __int64 v11; // rdi
  KIRQL v12; // al
  KIRQL v13; // r14
  PVOID v15; // r15
  PVOID v16; // rsi
  __int64 v17; // rax
  BOOLEAN v18; // bl
  BOOLEAN v19; // al
  _QWORD v20[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  LockInformation = (unsigned __int64 *)FileLock->LockInformation;
  if ( !LockInformation || !LockInformation[4] && !LockInformation[5] )
    return 1;
  QuadPart = Length->QuadPart;
  if ( !Length->QuadPart )
    return 1;
  v9 = StartingByte->QuadPart;
  v10 = LockInformation + 3;
  v20[0] = v9;
  v11 = v9 + QuadPart - 1;
  v21 = v11;
  v12 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v13 = v12;
  if ( v11 < *LockInformation )
  {
    KeReleaseSpinLock(LockInformation + 3, v12);
    return 1;
  }
  v15 = FileObject;
  v16 = ProcessId;
  v17 = *((_QWORD *)FileObject + 15);
  if ( v17
    && v9 >= *(_QWORD *)v17
    && v11 <= *(_QWORD *)(v17 + 40)
    && *(_DWORD *)(v17 + 20) == Key
    && *(PVOID *)(v17 + 32) == ProcessId
    && *(_BYTE *)(v17 + 16) )
  {
    v18 = 1;
  }
  else
  {
    v19 = FsRtlCheckNoSharedConflict(v10, v20, &v21);
    if ( v19 == 1 )
      v19 = FsRtlCheckNoExclusiveConflict(
              (_DWORD)v10,
              (unsigned int)v20,
              (unsigned int)&v21,
              Key,
              (__int64)v15,
              (__int64)v16);
    v18 = v19;
  }
  KeReleaseSpinLock(v10, v13);
  return v18;
}
