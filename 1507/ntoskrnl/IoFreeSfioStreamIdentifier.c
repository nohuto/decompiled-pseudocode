/*
 * XREFs of IoFreeSfioStreamIdentifier @ 0x1401F5E8C
 * Callers:
 *     <none>
 * Callees:
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoFreeSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  PVOID **FileObjectExtension; // rdi
  int v5; // r8d
  NTSTATUS v6; // esi
  KSPIN_LOCK *p_IrpListLock; // rbx
  unsigned __int8 CurrentIrql; // r14
  PVOID *i; // rcx
  PVOID *v10; // rdx
  PVOID **v11; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  FileObjectExtension = (PVOID **)IopGetFileObjectExtension((__int64)FileObject, 4, 0LL);
  v6 = -1073741275;
  if ( FileObjectExtension )
  {
    p_IrpListLock = &FileObject->IrpListLock;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8((unsigned int)(v5 + 2));
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(p_IrpListLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)p_IrpListLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)p_IrpListLock);
    }
    for ( i = *FileObjectExtension; i != (PVOID *)FileObjectExtension; i = (PVOID *)*i )
    {
      if ( i[3] == Signature )
      {
        v10 = (PVOID *)*i;
        v11 = (PVOID **)i[1];
        if ( *((PVOID **)*i + 1) != i || *v11 != i )
          __fastfail(3u);
        *v11 = v10;
        v10[1] = v11;
        ExFreePoolWithTag(i, 0);
        v6 = 0;
        break;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(p_IrpListLock, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)p_IrpListLock, 0LL);
    __writecr8(CurrentIrql);
  }
  return v6;
}
