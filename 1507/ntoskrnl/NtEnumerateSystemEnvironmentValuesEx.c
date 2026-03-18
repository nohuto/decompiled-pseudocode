/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x1406F5304
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExUnlockUserBuffer @ 0x1400FED14 (ExUnlockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x140678A00 (IoEnumerateEnvironmentVariablesEx.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtEnumerateSystemEnvironmentValuesEx(ULONG InformationClass, PVOID Buffer, ULONG BufferLength)
{
  __int64 v3; // r9
  _DWORD *v4; // rsi
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  _DWORD *v9; // rcx
  SIZE_T v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  NTSTATUS v15; // ebx
  signed __int32 v16; // eax
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  unsigned int v19; // [rsp+34h] [rbp-44h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  struct _MDL *v21; // [rsp+40h] [rbp-38h] BYREF

  v4 = *(_DWORD **)&BufferLength;
  if ( dword_1403254D0 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = *(_DWORD **)&BufferLength;
    if ( *(_QWORD *)&BufferLength >= MmUserProbeAddress )
      v9 = (_DWORD *)MmUserProbeAddress;
    *v9 = *v9;
    v10 = **(_DWORD **)&BufferLength & (unsigned int)-(Buffer != 0LL);
    v19 = v10;
    if ( (_DWORD)v10 )
      ProbeForWrite(Buffer, v10, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v19 = Buffer != 0LL ? **(_DWORD **)&BufferLength : 0;
  }
  if ( v19 )
  {
    result = ExLockUserBuffer((unsigned __int64)Buffer, v19, PreviousMode, IoWriteAccess, &v20, &v21);
    if ( result < 0 )
      return result;
  }
  else
  {
    v20 = 0LL;
    v21 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = KeGetCurrentThread();
  v13 = KeAbPreAcquire((ULONG_PTR)&ExpEnvironmentLock, 0LL, 0LL, v3);
  v14 = v13;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpEnvironmentLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&ExpEnvironmentLock, v13);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  qword_140325228 = (__int64)v12;
  v15 = IoEnumerateEnvironmentVariablesEx(InformationClass, v20, (__int64)&v19);
  qword_140325228 = 0LL;
  v16 = _InterlockedCompareExchange((volatile signed __int32 *)&ExpEnvironmentLock, 1, 0);
  if ( v16 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&ExpEnvironmentLock, v16);
  KeAbPostRelease((ULONG_PTR)&ExpEnvironmentLock);
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v21 )
    ExUnlockUserBuffer(v21);
  *v4 = v19;
  return v15;
}
