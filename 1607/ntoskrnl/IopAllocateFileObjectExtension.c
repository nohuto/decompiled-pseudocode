/*
 * XREFs of IopAllocateFileObjectExtension @ 0x1400E9400
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140078404 (IoSetOplockPrivateFoExt.c)
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     IopSetFileObjectExtensionFlag @ 0x140079FF0 (IopSetFileObjectExtensionFlag.c)
 *     IopGetSetSpecificExtension @ 0x14007AF10 (IopGetSetSpecificExtension.c)
 *     IoGetFileObjectFilterContext @ 0x14007B5DC (IoGetFileObjectFilterContext.c)
 *     IoSetOplockKeyContext @ 0x1401336D0 (IoSetOplockKeyContext.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x1401C9108 (IoSetIoPriorityHintIntoFileObject.c)
 *     IopSymlinkSetFoExtension @ 0x1405340B0 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140622C98 (IopSetFileObjectIosbRange.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14007B690 (IopVerifierExAllocatePool.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateFileObjectExtension(__int64 a1, __int64 *a2)
{
  void *v2; // rax
  void *v3; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rbp
  __int64 v8; // rcx
  PVOID Pool; // rax

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
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 184));
    v7 = *(_QWORD *)(a1 + 208);
    if ( !v7 )
    {
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
      __writecr8(CurrentIrql);
      Pool = IopVerifierExAllocatePool(v8, 0x50uLL);
      v7 = (__int64)Pool;
      if ( !Pool )
        return 3221225626LL;
      memset(Pool, 0, 0x50uLL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 184));
      if ( *(_QWORD *)(a1 + 208) )
      {
        v3 = (void *)v7;
        v7 = *(_QWORD *)(a1 + 208);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 208), v7);
      }
    }
    if ( a2 )
      *a2 = v7;
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
    __writecr8(CurrentIrql);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
}
