/*
 * XREFs of IopAllocateFileObjectExtension @ 0x140074A60
 * Callers:
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     IoSetOplockPrivateFoExt @ 0x1400CAF20 (IoSetOplockPrivateFoExt.c)
 *     IopSetFileObjectExtensionFlag @ 0x1400CC2B8 (IopSetFileObjectExtensionFlag.c)
 *     IopGetSetSpecificExtension @ 0x1400CC2E8 (IopGetSetSpecificExtension.c)
 *     IoGetFileObjectFilterContext @ 0x1400D7C40 (IoGetFileObjectFilterContext.c)
 *     IoSetOplockKeyContext @ 0x14012BCAC (IoSetOplockKeyContext.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x1401BB470 (IoSetIoPriorityHintIntoFileObject.c)
 *     IopSymlinkSetFoExtension @ 0x14049118C (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x1405F8D44 (IopSetFileObjectIosbRange.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     sub_1400CC298 @ 0x1400CC298 (sub_1400CC298.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateFileObjectExtension(__int64 a1, __int64 *a2)
{
  void *v2; // rax
  void *v3; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rbp
  __int64 v8; // rcx
  void *v9; // rax

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
      v9 = (void *)sub_1400CC298(v8, 80LL);
      v7 = (__int64)v9;
      if ( !v9 )
        return 3221225626LL;
      memset(v9, 0, 0x50uLL);
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
