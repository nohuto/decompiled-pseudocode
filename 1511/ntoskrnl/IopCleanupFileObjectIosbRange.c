/*
 * XREFs of IopCleanupFileObjectIosbRange @ 0x1405F7484
 * Callers:
 *     IopCleanupProcessResources @ 0x14048FEE8 (IopCleanupProcessResources.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     RtlLookupElementGenericTableAvl @ 0x14008FDF0 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140090710 (RtlDeleteElementGenericTableAvl.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall IopCleanupFileObjectIosbRange(__int64 a1)
{
  PMDL *v2; // rdi
  _QWORD *v3; // rsi
  PMDL *v4; // rbx
  PMDL v5; // rcx
  PMDL v6; // rax
  PVOID Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  Buffer[0] = *(PVOID *)(a1 + 32);
  ObfDereferenceObjectWithTag(Buffer[0], 0x70436F49u);
  *(_QWORD *)(a1 + 32) = 0LL;
  ExAcquireFastMutex(&IoStatusBlockRangeTableLock);
  v3 = RtlLookupElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
  v4 = (PMDL *)v3[1];
  if ( v4 )
  {
    while ( *(PMDL *)(a1 + 16) != v4[3] )
    {
      v2 = v4;
      v4 = (PMDL *)v4[5];
      if ( !v4 )
        goto LABEL_6;
    }
    --*(_DWORD *)v4;
  }
LABEL_6:
  if ( !*(_DWORD *)v4 )
  {
    v5 = v4[4];
    if ( v5 )
      MmUnmapLockedPages(v5, v4[3]);
    MmUnlockPages(v4[3]);
    IoFreeMdl(v4[3]);
    v6 = v4[5];
    if ( v2 )
      v2[5] = v6;
    else
      v3[1] = v6;
    ExFreePoolWithTag(v4, 0);
    if ( !v3[1] )
      RtlDeleteElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
  }
  KeReleaseGuardedMutex(&IoStatusBlockRangeTableLock);
}
