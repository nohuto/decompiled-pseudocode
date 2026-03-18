/*
 * XREFs of IopCleanupFileObjectIosbRange @ 0x14067127C
 * Callers:
 *     IopCleanupProcessResources @ 0x1404A84DC (IopCleanupProcessResources.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140017F60 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140018004 (RtlDeleteElementGenericTableAvl.c)
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall IopCleanupFileObjectIosbRange(__int64 a1)
{
  PMDL *v2; // rsi
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v7; // rdi
  PMDL *v8; // rbx
  PMDL v9; // rcx
  PMDL v10; // rax
  unsigned __int8 v11; // bl
  signed __int32 v12; // eax
  PVOID Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  Buffer[0] = *(PVOID *)(a1 + 32);
  ObfDereferenceObjectWithTag(Buffer[0], 0x70436F49u);
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = KeAbPreAcquire((ULONG_PTR)&IoStatusBlockRangeTableLock, 0LL, 0LL, v3);
  v5 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&IoStatusBlockRangeTableLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&IoStatusBlockRangeTableLock, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  qword_14034BCC8 = (__int64)KeGetCurrentThread();
  dword_14034BCF0 = CurrentIrql;
  v7 = RtlLookupElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
  v8 = (PMDL *)v7[1];
  if ( v8 )
  {
    while ( *(PMDL *)(a1 + 16) != v8[3] )
    {
      v2 = v8;
      v8 = (PMDL *)v8[5];
      if ( !v8 )
        goto LABEL_10;
    }
    --*(_DWORD *)v8;
  }
LABEL_10:
  if ( !*(_DWORD *)v8 )
  {
    v9 = v8[4];
    if ( v9 )
      MmUnmapLockedPages(v9, v8[3]);
    MmUnlockPages(v8[3]);
    IoFreeMdl(v8[3]);
    v10 = v8[5];
    if ( v2 )
      v2[5] = v10;
    else
      v7[1] = v10;
    ExFreePoolWithTag(v8, 0);
    if ( !v7[1] )
      RtlDeleteElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
  }
  qword_14034BCC8 = 0LL;
  v11 = dword_14034BCF0;
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)&IoStatusBlockRangeTableLock, 1, 0);
  if ( v12 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&IoStatusBlockRangeTableLock, v12);
  __writecr8(v11);
  KeAbPostRelease((ULONG_PTR)&IoStatusBlockRangeTableLock);
}
