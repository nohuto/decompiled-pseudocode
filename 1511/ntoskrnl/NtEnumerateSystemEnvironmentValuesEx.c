/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x1406714EC
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1400E718C (ExUnlockUserBuffer.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ExLockUserBuffer @ 0x1404AC538 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x1405FE090 (IoEnumerateEnvironmentVariablesEx.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtEnumerateSystemEnvironmentValuesEx(ULONG InformationClass, PVOID Buffer, ULONG BufferLength)
{
  _DWORD *v3; // rdi
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  _DWORD *v8; // rcx
  SIZE_T v9; // rdx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v11; // ebx
  unsigned int v12; // [rsp+34h] [rbp-34h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h] BYREF
  struct _MDL *v14; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_DWORD **)&BufferLength;
  if ( dword_1402D6390 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = *(_DWORD **)&BufferLength;
    if ( *(_QWORD *)&BufferLength >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    *v8 = *v8;
    v9 = **(_DWORD **)&BufferLength & (unsigned int)-(Buffer != 0LL);
    v12 = v9;
    if ( (_DWORD)v9 )
      ProbeForWrite(Buffer, v9, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v12 = Buffer != 0LL ? **(_DWORD **)&BufferLength : 0;
  }
  if ( v12 )
  {
    result = ExLockUserBuffer((unsigned __int64)Buffer, v12, PreviousMode, IoWriteAccess, &v13, &v14);
    if ( result < 0 )
      return result;
  }
  else
  {
    v13 = 0LL;
    v14 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v11 = IoEnumerateEnvironmentVariablesEx(InformationClass, v13, (__int64)&v12);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v14 )
    ExUnlockUserBuffer(v14);
  *v3 = v12;
  return v11;
}
