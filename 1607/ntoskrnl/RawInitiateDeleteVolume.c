/*
 * XREFs of RawInitiateDeleteVolume @ 0x140007468
 * Callers:
 *     RawCompletionRoutine @ 0x14000732C (RawCompletionRoutine.c)
 *     RawVerifyVolume @ 0x14021037C (RawVerifyVolume.c)
 *     RawReadWriteDeviceControl @ 0x1403EB128 (RawReadWriteDeviceControl.c)
 *     RawClose @ 0x1403ECF90 (RawClose.c)
 *     RawCreate @ 0x1403ED014 (RawCreate.c)
 *     RawCleanup @ 0x1403ED17C (RawCleanup.c)
 * Callees:
 *     IoAcquireVpbSpinLock @ 0x1400076FC (IoAcquireVpbSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RawCleanupVcb @ 0x1403EFAA4 (RawCleanupVcb.c)
 *     RawDeleteVcb @ 0x140473FE4 (RawDeleteVcb.c)
 */

char __fastcall RawInitiateDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, int a2, int a3)
{
  char v3; // di
  void **FileContextSupportPointer; // rcx
  KIRQL v8; // dl
  struct _LIST_ENTRY *v9; // rdx
  struct _LIST_ENTRY *v10; // rcx
  KIRQL v12; // dl
  void **v13; // rax
  struct _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *v15; // rdx
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY **v17; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  KIRQL OldIrql; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 4) != 0 )
  {
    if ( LODWORD(AdvancedHeader[1].Resource) )
      return v3;
    IoAcquireVpbSpinLock(&OldIrql);
    v12 = OldIrql;
    if ( !*((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) )
    {
      KeReleaseQueuedSpinLock(9uLL, OldIrql);
      ExAcquireFastMutex(&RawGlobalLock);
      Flink = AdvancedHeader[1].FilterContexts.Flink;
      Blink = AdvancedHeader[1].FilterContexts.Blink;
      if ( Flink->Blink != &AdvancedHeader[1].FilterContexts || Blink->Flink != &AdvancedHeader[1].FilterContexts )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      KeReleaseGuardedMutex(&RawGlobalLock);
      goto LABEL_8;
    }
LABEL_11:
    KeReleaseQueuedSpinLock(9uLL, v12);
    return v3;
  }
  IoAcquireVpbSpinLock(&OldIrql);
  if ( !a2 && *(_DWORD *)&AdvancedHeader[1].Flags + *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) != a3 )
  {
    v12 = OldIrql;
    goto LABEL_11;
  }
  FileContextSupportPointer = AdvancedHeader[1].FileContextSupportPointer;
  if ( !(LODWORD(AdvancedHeader[1].Resource) + *((_DWORD *)FileContextSupportPointer + 7)) )
  {
    v8 = OldIrql;
    *((_WORD *)FileContextSupportPointer + 2) &= ~1u;
    *((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 1) = 0LL;
    KeReleaseQueuedSpinLock(9uLL, v8);
    ExAcquireFastMutex(&RawGlobalLock);
    v9 = AdvancedHeader[1].FilterContexts.Flink;
    v10 = AdvancedHeader[1].FilterContexts.Blink;
    if ( v9->Blink != &AdvancedHeader[1].FilterContexts || v10->Flink != &AdvancedHeader[1].FilterContexts )
      __fastfail(3u);
    v10->Flink = v9;
    v9->Blink = v10;
    KeReleaseGuardedMutex(&RawGlobalLock);
    *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 2u;
LABEL_8:
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].PagingIoResource);
    RawCleanupVcb(AdvancedHeader);
    RawDeleteVcb(AdvancedHeader);
    return 1;
  }
  memset(AdvancedHeader[1].Oplock, 0, 0x60uLL);
  *(_WORD *)AdvancedHeader[1].Oplock = 10;
  *((_WORD *)AdvancedHeader[1].Oplock + 1) = 96;
  *((_QWORD *)AdvancedHeader[1].Oplock + 2) = *((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 2);
  *((_QWORD *)AdvancedHeader[1].Oplock + 1) = 0LL;
  *((_WORD *)AdvancedHeader[1].Oplock + 2) = *((_WORD *)AdvancedHeader[1].FileContextSupportPointer + 2) & 8;
  *(_QWORD *)(*((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 2) + 56LL) = AdvancedHeader[1].Oplock;
  v13 = AdvancedHeader[1].FileContextSupportPointer;
  AdvancedHeader[1].Oplock = 0LL;
  *((_WORD *)v13 + 2) |= 4u;
  *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 8u;
  KeReleaseQueuedSpinLock(9uLL, OldIrql);
  ExAcquireFastMutex(&RawGlobalLock);
  p_FilterContexts = &AdvancedHeader[1].FilterContexts;
  v15 = AdvancedHeader[1].FilterContexts.Flink;
  v16 = AdvancedHeader[1].FilterContexts.Blink;
  if ( v15->Blink != &AdvancedHeader[1].FilterContexts || v16->Flink != p_FilterContexts )
    __fastfail(3u);
  v16->Flink = v15;
  v15->Blink = v16;
  *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 6u;
  v17 = (struct _LIST_ENTRY **)qword_1403012C8;
  if ( *(__int64 **)qword_1403012C8 != &RawDismountedQueue )
    __fastfail(3u);
  AdvancedHeader[1].FilterContexts.Blink = (struct _LIST_ENTRY *)qword_1403012C8;
  p_FilterContexts->Flink = (struct _LIST_ENTRY *)&RawDismountedQueue;
  *v17 = p_FilterContexts;
  qword_1403012C8 = (__int64)&AdvancedHeader[1].FilterContexts;
  KeReleaseGuardedMutex(&RawGlobalLock);
  return v3;
}
