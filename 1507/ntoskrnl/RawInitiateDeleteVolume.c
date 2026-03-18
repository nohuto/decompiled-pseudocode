/*
 * XREFs of RawInitiateDeleteVolume @ 0x1400067CC
 * Callers:
 *     RawCompletionRoutine @ 0x140006D10 (RawCompletionRoutine.c)
 *     RawVerifyVolume @ 0x140244EE8 (RawVerifyVolume.c)
 *     RawReadWriteDeviceControl @ 0x14040BAF0 (RawReadWriteDeviceControl.c)
 *     RawClose @ 0x14040BBD8 (RawClose.c)
 *     RawCreate @ 0x14040BCD4 (RawCreate.c)
 *     RawCleanup @ 0x14040BEA0 (RawCleanup.c)
 * Callees:
 *     IoAcquireVpbSpinLock @ 0x140006BC8 (IoAcquireVpbSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RawDeleteVcb @ 0x14040E054 (RawDeleteVcb.c)
 *     RawCleanupVcb @ 0x14040E0A0 (RawCleanupVcb.c)
 */

char __fastcall RawInitiateDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, int a2, int a3)
{
  char v3; // di
  KIRQL v7; // dl
  void **FileContextSupportPointer; // rcx
  KIRQL v10; // dl
  __int64 v11; // r14
  unsigned __int8 v12; // r15
  signed __int8 v13; // cf
  struct _LIST_ENTRY *v14; // rdx
  struct _LIST_ENTRY *v15; // rcx
  unsigned __int8 v16; // r14
  unsigned __int32 v17; // eax
  unsigned __int8 v18; // di
  unsigned __int32 v19; // eax
  void **v20; // rax
  __int64 v21; // r14
  unsigned __int8 v22; // r15
  struct _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *v24; // rdx
  struct _LIST_ENTRY *v25; // rcx
  struct _LIST_ENTRY *v26; // rcx
  unsigned __int8 v27; // bl
  unsigned __int32 v28; // eax
  __int64 v29; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v33; // r14
  unsigned __int32 v34; // eax
  KIRQL OldIrql; // [rsp+40h] [rbp+8h] BYREF

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
    v29 = KeAbPreAcquire((ULONG_PTR)&RawGlobalLock);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    v13 = _interlockedbittestandreset((volatile signed __int32 *)&RawGlobalLock, 0);
    if ( !v13 )
      ExpAcquireFastMutexContended((ULONG_PTR)&RawGlobalLock);
    if ( v29 )
      *(_BYTE *)(v29 + 26) |= 1u;
    qword_14032C2C8 = (__int64)KeGetCurrentThread();
    dword_14032C2F0 = CurrentIrql;
    Flink = AdvancedHeader[1].FilterContexts.Flink;
    Blink = AdvancedHeader[1].FilterContexts.Blink;
    if ( Flink->Blink != &AdvancedHeader[1].FilterContexts || Blink->Flink != &AdvancedHeader[1].FilterContexts )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v33 = dword_14032C2F0;
    qword_14032C2C8 = 0LL;
    v34 = _InterlockedCompareExchange((volatile signed __int32 *)&RawGlobalLock, 1, 0);
    if ( v34 )
      ExpReleaseFastMutexContended(&RawGlobalLock, v34);
    __writecr8(v33);
    KeAbPostRelease((ULONG_PTR)&RawGlobalLock);
    goto LABEL_17;
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
    v11 = KeAbPreAcquire((ULONG_PTR)&RawGlobalLock);
    v12 = KeGetCurrentIrql();
    __writecr8(1uLL);
    v13 = _interlockedbittestandreset((volatile signed __int32 *)&RawGlobalLock, 0);
    if ( !v13 )
      ExpAcquireFastMutexContended((ULONG_PTR)&RawGlobalLock);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    qword_14032C2C8 = (__int64)KeGetCurrentThread();
    dword_14032C2F0 = v12;
    v14 = AdvancedHeader[1].FilterContexts.Flink;
    v15 = AdvancedHeader[1].FilterContexts.Blink;
    if ( v14->Blink != &AdvancedHeader[1].FilterContexts || v15->Flink != &AdvancedHeader[1].FilterContexts )
      __fastfail(3u);
    v15->Flink = v14;
    v14->Blink = v15;
    v16 = dword_14032C2F0;
    qword_14032C2C8 = 0LL;
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)&RawGlobalLock, 1, 0);
    if ( v17 )
      ExpReleaseFastMutexContended(&RawGlobalLock, v17);
    __writecr8(v16);
    KeAbPostRelease((ULONG_PTR)&RawGlobalLock);
    *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 2u;
LABEL_17:
    AdvancedHeader[2].AllocationSize.QuadPart = 0LL;
    v18 = (unsigned __int8)AdvancedHeader[2].FilterContexts.Blink;
    v19 = _InterlockedCompareExchange((volatile signed __int32 *)&AdvancedHeader[2].PagingIoResource, 1, 0);
    if ( v19 )
      ExpReleaseFastMutexContended(&AdvancedHeader[2].PagingIoResource, v19);
    __writecr8(v18);
    KeAbPostRelease((ULONG_PTR)&AdvancedHeader[2].PagingIoResource);
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
  v20 = AdvancedHeader[1].FileContextSupportPointer;
  AdvancedHeader[1].Oplock = 0LL;
  *((_WORD *)v20 + 2) |= 4u;
  *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 8u;
  KeReleaseQueuedSpinLock(9uLL, OldIrql);
  v21 = KeAbPreAcquire((ULONG_PTR)&RawGlobalLock);
  v22 = KeGetCurrentIrql();
  __writecr8(1uLL);
  v13 = _interlockedbittestandreset((volatile signed __int32 *)&RawGlobalLock, 0);
  if ( !v13 )
    ExpAcquireFastMutexContended((ULONG_PTR)&RawGlobalLock);
  if ( v21 )
    *(_BYTE *)(v21 + 26) |= 1u;
  qword_14032C2C8 = (__int64)KeGetCurrentThread();
  dword_14032C2F0 = v22;
  p_FilterContexts = &AdvancedHeader[1].FilterContexts;
  v24 = AdvancedHeader[1].FilterContexts.Flink;
  v25 = AdvancedHeader[1].FilterContexts.Blink;
  if ( v24->Blink != &AdvancedHeader[1].FilterContexts || v25->Flink != p_FilterContexts )
    __fastfail(3u);
  v25->Flink = v24;
  v24->Blink = v25;
  *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 6u;
  v26 = (struct _LIST_ENTRY *)qword_14032C318;
  p_FilterContexts->Flink = (struct _LIST_ENTRY *)&RawDismountedQueue;
  AdvancedHeader[1].FilterContexts.Blink = v26;
  if ( (__int64 *)v26->Flink != &RawDismountedQueue )
    __fastfail(3u);
  v26->Flink = p_FilterContexts;
  v27 = dword_14032C2F0;
  qword_14032C318 = (__int64)p_FilterContexts;
  qword_14032C2C8 = 0LL;
  v28 = _InterlockedCompareExchange((volatile signed __int32 *)&RawGlobalLock, 1, 0);
  if ( v28 )
    ExpReleaseFastMutexContended(&RawGlobalLock, v28);
  __writecr8(v27);
  KeAbPostRelease((ULONG_PTR)&RawGlobalLock);
  return v3;
}
