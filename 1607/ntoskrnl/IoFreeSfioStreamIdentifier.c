/*
 * XREFs of IoFreeSfioStreamIdentifier @ 0x1401C8998
 * Callers:
 *     <none>
 * Callees:
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoFreeSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  PVOID **FileObjectExtension; // rbx
  NTSTATUS v5; // edi
  KIRQL v6; // al
  PVOID *v7; // rcx
  KIRQL v8; // r14
  PVOID *v10; // rdx
  PVOID **v11; // rax

  FileObjectExtension = (PVOID **)IopGetFileObjectExtension((__int64)FileObject, 4, 0LL);
  v5 = -1073741275;
  if ( FileObjectExtension )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&FileObject->IrpListLock);
    v7 = *FileObjectExtension;
    v8 = v6;
    while ( v7 != (PVOID *)FileObjectExtension )
    {
      if ( v7[3] == Signature )
      {
        v10 = (PVOID *)*v7;
        v11 = (PVOID **)v7[1];
        if ( *((PVOID **)*v7 + 1) != v7 || *v11 != v7 )
          __fastfail(3u);
        *v11 = v10;
        v10[1] = v11;
        ExFreePoolWithTag(v7, 0);
        v5 = 0;
        break;
      }
      v7 = (PVOID *)*v7;
    }
    KeReleaseSpinLock(&FileObject->IrpListLock, v8);
  }
  return v5;
}
