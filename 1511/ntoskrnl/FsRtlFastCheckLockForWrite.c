/*
 * XREFs of FsRtlFastCheckLockForWrite @ 0x1400CCE78
 * Callers:
 *     FsRtlCheckLockForWriteAccess @ 0x1400CCDE4 (FsRtlCheckLockForWriteAccess.c)
 *     VerifierFsRtlFastCheckLockForWrite @ 0x1406C04E0 (VerifierFsRtlFastCheckLockForWrite.c)
 * Callees:
 *     FsRtlCheckNoExclusiveConflict @ 0x1400014F0 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x140001708 (FsRtlCheckNoSharedConflict.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForWrite(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PVOID FileObject,
        PVOID ProcessId)
{
  _QWORD *LockInformation; // rsi
  LONGLONG QuadPart; // rax
  _RTL_SPLAY_LINKS *v9; // rbx
  KSPIN_LOCK *v10; // rbp
  _RTL_SPLAY_LINKS *v11; // rdi
  KIRQL v12; // al
  KIRQL v13; // r14
  PVOID v15; // r15
  PVOID v16; // rsi
  __int64 v17; // rax
  BOOLEAN v18; // al
  BOOLEAN v19; // bl
  _RTL_SPLAY_LINKS *v20[2]; // [rsp+30h] [rbp-38h] BYREF
  _RTL_SPLAY_LINKS *v21; // [rsp+70h] [rbp+8h] BYREF

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation || !LockInformation[4] && !LockInformation[5] )
    return 1;
  QuadPart = Length->QuadPart;
  if ( !Length->QuadPart )
    return 1;
  v9 = (_RTL_SPLAY_LINKS *)StartingByte->QuadPart;
  v10 = LockInformation + 3;
  v20[0] = v9;
  v11 = (_RTL_SPLAY_LINKS *)((char *)v9 + QuadPart - 1);
  v21 = v11;
  v12 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v13 = v12;
  if ( (unsigned __int64)v11 < *LockInformation )
  {
    KeReleaseSpinLock(LockInformation + 3, v12);
    return 1;
  }
  v15 = FileObject;
  v16 = ProcessId;
  v17 = *((_QWORD *)FileObject + 15);
  if ( v17
    && (unsigned __int64)v9 >= *(_QWORD *)v17
    && (unsigned __int64)v11 <= *(_QWORD *)(v17 + 40)
    && *(_DWORD *)(v17 + 20) == Key
    && *(PVOID *)(v17 + 32) == ProcessId
    && *(_BYTE *)(v17 + 16) )
  {
    v19 = 1;
  }
  else
  {
    v18 = FsRtlCheckNoSharedConflict((__int64)v10, (__int64)v20, (__int64)&v21);
    if ( v18 == 1 )
      v18 = FsRtlCheckNoExclusiveConflict((__int64)v10, v20, &v21, Key, (__int64)v15, (__int64)v16);
    v19 = v18;
  }
  KeReleaseSpinLock(v10, v13);
  return v19;
}
