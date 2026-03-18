/*
 * XREFs of NtSetDriverEntryOrder @ 0x140672740
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     IoSetEnvironmentVariableEx @ 0x1405FE238 (IoSetEnvironmentVariableEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetDriverEntryOrder(PULONG Ids, PULONG Count)
{
  __int64 v2; // rsi
  PVOID PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  unsigned int v8; // r15d
  char *v9; // rcx
  unsigned int i; // ecx
  struct _KTHREAD *v11; // rax
  NTSTATUS v12; // edi

  v2 = (unsigned int)Count;
  PoolWithTag = 0LL;
  if ( dword_1402D6390 != 2 )
    return -1073741822;
  if ( (unsigned int)Count > 0x3FFFFFFF )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, CurrentThread->PreviousMode) )
    return -1073741727;
  if ( (_DWORD)v2 )
  {
    v8 = v2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v2, 0x72766E45u);
    if ( !PoolWithTag )
      return -1073741670;
    if ( PreviousMode && v8 * 4 )
    {
      if ( ((unsigned __int8)Ids & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = (char *)&Ids[v8];
      if ( (unsigned __int64)v9 > MmUserProbeAddress || v9 < (char *)Ids )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    for ( i = 0; i < (unsigned int)v2; ++i )
    {
      if ( Ids[i] > 0xFFFF )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        return -1073741811;
      }
      *((_WORD *)PoolWithTag + i) = Ids[i];
    }
  }
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v12 = IoSetEnvironmentVariableEx(
          (__int64)L"DriverOrder",
          (__int64)&EfiDriverVariablesGuid,
          (__int64)PoolWithTag,
          2 * (int)v2,
          1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v12 == -1073741568 )
    v12 = 0;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v12;
}
