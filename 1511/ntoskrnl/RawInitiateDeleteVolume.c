/*
 * XREFs of RawInitiateDeleteVolume @ 0x1400D0B18
 * Callers:
 *     RawCompletionRoutine @ 0x1400C3328 (RawCompletionRoutine.c)
 *     RawVerifyVolume @ 0x1401F6204 (RawVerifyVolume.c)
 *     RawCreate @ 0x1404936D4 (RawCreate.c)
 *     RawCleanup @ 0x140493A2C (RawCleanup.c)
 *     RawClose @ 0x140494064 (RawClose.c)
 *     RawReadWriteDeviceControl @ 0x1404D5F20 (RawReadWriteDeviceControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     IoAcquireVpbSpinLock @ 0x1400D0DAC (IoAcquireVpbSpinLock.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RawDeleteVcb @ 0x1404940E4 (RawDeleteVcb.c)
 *     RawCleanupVcb @ 0x140494130 (RawCleanupVcb.c)
 */

char __fastcall RawInitiateDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, int a2, int a3)
{
  char v3; // di
  KIRQL v7; // dl
  void **FileContextSupportPointer; // rcx
  KIRQL v10; // dl
  struct _LIST_ENTRY *v11; // rdx
  struct _LIST_ENTRY *v12; // rcx
  void **v13; // rax
  struct _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *v15; // rdx
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  KIRQL OldIrql; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 4) != 0 )
  {
    if ( LODWORD(AdvancedHeader[1].Resource) )
      return v3;
    IoAcquireVpbSpinLock(&OldIrql);
    v7 = OldIrql;
    if ( *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) )
      goto LABEL_5;
    KeReleaseQueuedSpinLock(9uLL, OldIrql);
    ExAcquireFastMutex(&RawGlobalLock);
    Flink = AdvancedHeader[1].FilterContexts.Flink;
    Blink = AdvancedHeader[1].FilterContexts.Blink;
    if ( Flink->Blink != &AdvancedHeader[1].FilterContexts || Blink->Flink != &AdvancedHeader[1].FilterContexts )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    KeReleaseGuardedMutex(&RawGlobalLock);
LABEL_11:
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].PagingIoResource);
    RawCleanupVcb(AdvancedHeader);
    RawDeleteVcb(AdvancedHeader);
    return 1;
  }
  IoAcquireVpbSpinLock(&OldIrql);
  if ( !a2 && *(_DWORD *)&AdvancedHeader[1].Flags + *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) != a3 )
  {
    v7 = OldIrql;
LABEL_5:
    KeReleaseQueuedSpinLock(9uLL, v7);
    return v3;
  }
  FileContextSupportPointer = AdvancedHeader[1].FileContextSupportPointer;
  if ( !(LODWORD(AdvancedHeader[1].Resource) + *((_DWORD *)FileContextSupportPointer + 7)) )
  {
    v10 = OldIrql;
    *((_WORD *)FileContextSupportPointer + 2) &= ~1u;
    *((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 1) = 0LL;
    KeReleaseQueuedSpinLock(9uLL, v10);
    ExAcquireFastMutex(&RawGlobalLock);
    v11 = AdvancedHeader[1].FilterContexts.Flink;
    v12 = AdvancedHeader[1].FilterContexts.Blink;
    if ( v11->Blink != &AdvancedHeader[1].FilterContexts || v12->Flink != &AdvancedHeader[1].FilterContexts )
      __fastfail(3u);
    v12->Flink = v11;
    v11->Blink = v12;
    KeReleaseGuardedMutex(&RawGlobalLock);
    *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 2u;
    goto LABEL_11;
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
  v17 = (struct _LIST_ENTRY *)qword_1402DBFC8;
  p_FilterContexts->Flink = (struct _LIST_ENTRY *)&RawDismountedQueue;
  AdvancedHeader[1].FilterContexts.Blink = v17;
  if ( (__int64 *)v17->Flink != &RawDismountedQueue )
    __fastfail(3u);
  v17->Flink = p_FilterContexts;
  qword_1402DBFC8 = (__int64)&AdvancedHeader[1].FilterContexts;
  KeReleaseGuardedMutex(&RawGlobalLock);
  return v3;
}
