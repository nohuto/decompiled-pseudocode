/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x1406B4314
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExUnlockUserBuffer @ 0x140088288 (ExUnlockUserBuffer.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x140499EB0 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x140628170 (IoEnumerateEnvironmentVariablesEx.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtEnumerateSystemEnvironmentValuesEx(ULONG InformationClass, PVOID Buffer, ULONG BufferLength)
{
  _DWORD *v3; // rdi
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v8; // rcx
  SIZE_T v9; // rdx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // [rsp+34h] [rbp-34h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h] BYREF
  struct _MDL *v17; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_DWORD **)&BufferLength;
  if ( dword_1402FD030 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = *(_QWORD *)&BufferLength;
    if ( *(_QWORD *)&BufferLength >= 0x7FFFFFFF0000uLL )
      v8 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    v9 = **(_DWORD **)&BufferLength & (unsigned int)-(Buffer != 0LL);
    v15 = v9;
    if ( (_DWORD)v9 )
      ProbeForWrite(Buffer, v9, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v15 = Buffer != 0LL ? **(_DWORD **)&BufferLength : 0;
  }
  if ( v15 )
  {
    result = ExLockUserBuffer((unsigned __int64)Buffer, v15, PreviousMode, IoWriteAccess, &v16, &v17);
    if ( result < 0 )
      return result;
  }
  else
  {
    v16 = 0LL;
    v17 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v11 = IoEnumerateEnvironmentVariablesEx(InformationClass, v16, (__int64)&v15);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  if ( v17 )
    ExUnlockUserBuffer(v17);
  *v3 = v15;
  return v11;
}
