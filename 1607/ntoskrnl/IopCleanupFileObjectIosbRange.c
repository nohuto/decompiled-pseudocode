/*
 * XREFs of IopCleanupFileObjectIosbRange @ 0x14062118C
 * Callers:
 *     IopCleanupProcessResources @ 0x1404CC840 (IopCleanupProcessResources.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     MmUnmapLockedPages @ 0x140025D10 (MmUnmapLockedPages.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     IoFreeMdl @ 0x140072230 (IoFreeMdl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400C3B20 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400C3FD4 (RtlDeleteElementGenericTableAvl.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
