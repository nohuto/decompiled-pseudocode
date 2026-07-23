/*
 * XREFs of NtQueryDriverEntryOrder @ 0x1406B4B4C
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
 */

NTSTATUS __stdcall NtQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v6; // rcx
  ULONG v7; // ecx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS EnvironmentVariable; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // rdx
  unsigned __int16 *v15; // r9
  _DWORD *i; // r10
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+38h] [rbp-30h] BYREF
  struct _MDL *v19; // [rsp+40h] [rbp-28h] BYREF
  ULONG v20; // [rsp+88h] [rbp+20h] BYREF

  if ( dword_1402FD030 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = (__int64)Count;
    if ( (unsigned __int64)Count >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = 4 * *Count;
    v20 = Ids != 0LL ? v7 : 0;
    if ( v20 )
      ProbeForWrite(Ids, Ids != 0LL ? v7 : 0, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v20 = Ids != 0LL ? 4 * *Count : 0;
  }
  if ( v20 )
  {
    result = ExLockUserBuffer((unsigned __int64)Ids, v20, PreviousMode, IoWriteAccess, &v18, &v19);
    if ( result < 0 )
      return result;
  }
  else
  {
    v18 = 0LL;
    v19 = 0LL;
  }
  v20 >>= 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariable = HalGetEnvironmentVariableEx(L"DriverOrder", &EfiDriverVariablesGuid, v18, &v20, 0LL);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  if ( EnvironmentVariable < 0 )
  {
    if ( EnvironmentVariable == -1073741568 )
    {
      v20 = 0;
      EnvironmentVariable = 0;
    }
  }
  else
  {
    v13 = v20 >> 1;
    v14 = (v20 >> 1) - 1;
    v15 = (unsigned __int16 *)(v18 + 2 * v14);
    for ( i = (_DWORD *)(v18 + 4 * v14); v13; --v13 )
      *i-- = *v15--;
  }
  v17 = 2 * v20;
  v20 *= 2;
  if ( v19 )
  {
    ExUnlockUserBuffer(v19);
    v17 = v20;
  }
  *Count = v17 >> 2;
  return EnvironmentVariable;
}
