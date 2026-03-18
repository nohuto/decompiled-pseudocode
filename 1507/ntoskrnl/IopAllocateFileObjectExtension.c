/*
 * XREFs of IopAllocateFileObjectExtension @ 0x140071760
 * Callers:
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     IopGetSetSpecificExtension @ 0x14007123C (IopGetSetSpecificExtension.c)
 *     IoGetFileObjectFilterContext @ 0x1400716FC (IoGetFileObjectFilterContext.c)
 *     IoSetOplockPrivateFoExt @ 0x140073CAC (IoSetOplockPrivateFoExt.c)
 *     IoSetOplockKeyContext @ 0x14015AC04 (IoSetOplockKeyContext.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x1401F6740 (IoSetIoPriorityHintIntoFileObject.c)
 *     IopRevokeFileObjectForProcess @ 0x1401F7980 (IopRevokeFileObjectForProcess.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404A58AC (IopAllocateFoExtensionsOnCreate.c)
 *     IopSymlinkSetFoExtension @ 0x140559B88 (IopSymlinkSetFoExtension.c)
 *     IoRegisterContainerNotification @ 0x1405BD318 (IoRegisterContainerNotification.c)
 *     IopSetFileObjectIosbRange @ 0x140672E30 (IopSetFileObjectIosbRange.c)
 *     IoSetFileObjectIgnoreSharing @ 0x14067430C (IoSetFileObjectIgnoreSharing.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopAllocateFileObjectExtension(__int64 a1, __int64 *a2)
{
  void *v2; // rax
  void *v3; // r14
  volatile signed __int32 *v6; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 v8; // rbp
  PVOID PoolWithTagPriority; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(void **)(a1 + 208);
  v3 = 0LL;
  if ( v2 )
  {
    if ( v2 == IopRevocationExtension )
    {
      return 3221225626LL;
    }
    else
    {
      if ( a2 )
        *a2 = (__int64)v2;
      return 0LL;
    }
  }
  else
  {
    v6 = (volatile signed __int32 *)(a1 + 184);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(a1 + 184);
    }
    else if ( _interlockedbittestandset64(v6, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(a1 + 184);
    }
    v8 = *(_QWORD *)(a1 + 208);
    if ( !v8 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v6, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
      __writecr8(CurrentIrql);
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                                NonPagedPoolNx,
                                0x48uLL,
                                0x20206F49u,
                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x20206F49u);
      v8 = (__int64)PoolWithTagPriority;
      if ( !PoolWithTagPriority )
        return 3221225626LL;
      memset(PoolWithTagPriority, 0, 0x48uLL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v6);
      }
      else if ( _interlockedbittestandset64(v6, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(v6);
      }
      if ( *(_QWORD *)(a1 + 208) )
      {
        v3 = (void *)v8;
        v8 = *(_QWORD *)(a1 + 208);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 208), v8);
      }
    }
    if ( a2 )
      *a2 = v8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v6, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
    __writecr8(CurrentIrql);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
}
