/*
 * XREFs of NtQueryDriverEntryOrder @ 0x1406F5DA8
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
 */

NTSTATUS __stdcall NtQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  __int64 v2; // r9
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  _DWORD *v7; // rcx
  ULONG v8; // ecx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  NTSTATUS EnvironmentVariable; // ebx
  signed __int32 v14; // eax
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned __int16 *v19; // r8
  _DWORD *i; // r9
  unsigned __int64 v21; // rax
  __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  struct _MDL *v23; // [rsp+40h] [rbp-38h] BYREF
  ULONG v24; // [rsp+98h] [rbp+20h] BYREF

  if ( dword_1403254D0 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = Count;
    if ( (unsigned __int64)Count >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v8 = 4 * *Count;
    v24 = Ids != 0LL ? v8 : 0;
    if ( v24 )
      ProbeForWrite(Ids, Ids != 0LL ? v8 : 0, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v24 = Ids != 0LL ? 4 * *Count : 0;
  }
  if ( v24 )
  {
    result = ExLockUserBuffer((unsigned __int64)Ids, v24, PreviousMode, IoWriteAccess, &v22, &v23);
    if ( result < 0 )
      return result;
  }
  else
  {
    v22 = 0LL;
    v23 = 0LL;
  }
  v24 >>= 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeGetCurrentThread();
  v11 = KeAbPreAcquire((ULONG_PTR)&ExpEnvironmentLock, 0LL, 0LL, v2);
  v12 = v11;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpEnvironmentLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&ExpEnvironmentLock, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  qword_140325228 = (__int64)v10;
  EnvironmentVariable = HalGetEnvironmentVariableEx(L"DriverOrder", &EfiDriverVariablesGuid, v22, &v24, 0LL);
  qword_140325228 = 0LL;
  v14 = _InterlockedCompareExchange((volatile signed __int32 *)&ExpEnvironmentLock, 1, 0);
  if ( v14 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&ExpEnvironmentLock, v14);
  KeAbPostRelease((ULONG_PTR)&ExpEnvironmentLock);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( EnvironmentVariable < 0 )
  {
    if ( EnvironmentVariable == -1073741568 )
    {
      v24 = 0;
      EnvironmentVariable = 0;
    }
  }
  else
  {
    v17 = v24 >> 1;
    v18 = (v24 >> 1) - 1;
    v19 = (unsigned __int16 *)(v22 + 2 * v18);
    for ( i = (_DWORD *)(v22 + 4 * v18); v17; --v17 )
      *i-- = *v19--;
  }
  v21 = 2 * v24;
  v24 *= 2;
  if ( v23 )
  {
    ExUnlockUserBuffer(v23);
    v21 = v24;
  }
  *Count = v21 >> 2;
  return EnvironmentVariable;
}
