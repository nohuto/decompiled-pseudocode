/*
 * XREFs of CcUninitializeCacheMap @ 0x140070140
 * Callers:
 *     CcPurgeCacheSection @ 0x1400724A0 (CcPurgeCacheSection.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x14006E240 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14006F800 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KxAcquireQueuedSpinLock @ 0x140070478 (KxAcquireQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x14007049C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140070520 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcPurgeCacheSection @ 0x1400724A0 (CcPurgeCacheSection.c)
 *     CcDeleteSharedCacheMap @ 0x1400CABD4 (CcDeleteSharedCacheMap.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  BOOLEAN v3; // r15
  __int64 v4; // r13
  bool v5; // r12
  _QWORD *ArbitraryUserPointer; // rcx
  LONGLONG QuadPart; // rcx
  char *PrivateCacheMap; // rdi
  char *SharedCacheMap; // rbx
  __int64 v13; // rdx
  int v14; // eax
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 **v18; // rcx
  __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  KIRQL CurrentIrql; // [rsp+60h] [rbp+8h]

  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  KxAcquireQueuedSpinLock(ArbitraryUserPointer + 10, ArbitraryUserPointer[11]);
  PrivateCacheMap = (char *)FileObject->PrivateCacheMap;
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( PrivateCacheMap )
  {
    if ( *((PFILE_OBJECT *)PrivateCacheMap + 1) != FileObject )
      KeBugCheckEx(0x34u, 0x92DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( *((_QWORD *)PrivateCacheMap + 14) )
    {
      KeAcquireQueuedSpinLockAtDpcLevel((__int64)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
      v16 = (__int64 *)*((_QWORD *)PrivateCacheMap + 14);
      if ( v16 )
      {
        v17 = *v16;
        v4 = *((_QWORD *)PrivateCacheMap + 14);
        ++CcDbgNumberOfNoopedReadAheads;
        v18 = (__int64 **)v16[1];
        if ( *(__int64 **)(v17 + 8) != v16 || *v18 != v16 )
          __fastfail(3u);
        *v18 = (__int64 *)v17;
        *(_QWORD *)(v17 + 8) = v18;
        v16[1] = 0LL;
        *v16 = 0LL;
        if ( (PFILE_OBJECT)v16[2] != FileObject )
          KeBugCheckEx(0x34u, 0x94DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        --*((_DWORD *)SharedCacheMap + 1);
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 16);
    }
    --*((_DWORD *)SharedCacheMap + 1);
    v13 = *((_QWORD *)PrivateCacheMap + 12);
    QuadPart = *((_QWORD *)PrivateCacheMap + 13);
    if ( *(char **)(v13 + 8) != PrivateCacheMap + 96 || *(char **)QuadPart != PrivateCacheMap + 96 )
      __fastfail(3u);
    *(_QWORD *)QuadPart = v13;
    *(_QWORD *)(v13 + 8) = QuadPart;
    if ( PrivateCacheMap == SharedCacheMap + 376 )
    {
      *(_WORD *)PrivateCacheMap = 0;
      PrivateCacheMap = 0LL;
    }
    FileObject->PrivateCacheMap = 0LL;
  }
  if ( SharedCacheMap )
  {
    if ( TruncateSize )
    {
      QuadPart = TruncateSize->QuadPart;
      if ( TruncateSize->QuadPart || !*((_QWORD *)SharedCacheMap + 1) )
      {
        if ( *((char **)SharedCacheMap + 28) == SharedCacheMap + 224 )
          *((_QWORD *)SharedCacheMap + 1) = QuadPart;
      }
      else
      {
        *((_DWORD *)SharedCacheMap + 38) |= 0x10u;
      }
    }
    if ( !*((_DWORD *)SharedCacheMap + 1) )
    {
      if ( *((char **)SharedCacheMap + 28) != SharedCacheMap + 224 )
        KeBugCheckEx(0x34u, 0x9C2uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( UninitializeEvent )
      {
        QuadPart = 1LL;
        UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
        *((_QWORD *)SharedCacheMap + 34) = UninitializeEvent;
        v5 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
      }
      v14 = *((_DWORD *)SharedCacheMap + 38);
      if ( (v14 & 4) != 0 || UninitializeEvent )
      {
        if ( (v14 & 0x20) != 0 )
        {
LABEL_19:
          byte_1403231E1 = 1;
          if ( !UninitializeEvent || (*((_DWORD *)SharedCacheMap + 38) & 0x20) != 0 )
            QuadPart = 0LL;
          else
            LOBYTE(QuadPart) = 1;
          CcScheduleLazyWriteScan(QuadPart, 0LL);
          KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 10);
          __writecr8(CurrentIrql);
          goto LABEL_22;
        }
        if ( !*((_DWORD *)SharedCacheMap + 28) )
        {
          if ( (v14 & 0x400) == 0
            || (QuadPart = 0x7FFFFFFFFFFFFFFFLL, *((_QWORD *)SharedCacheMap + 5) == 0x7FFFFFFFFFFFFFFFLL) )
          {
            CcDeleteSharedCacheMap(SharedCacheMap, CurrentIrql, 0LL, 0LL);
            v5 = 0;
            v3 = 1;
            goto LABEL_22;
          }
        }
      }
      if ( (v14 & 0x20) == 0 )
        CcInsertIntoDirtySharedCacheMapList(SharedCacheMap);
      goto LABEL_19;
    }
    if ( UninitializeEvent )
    {
      if ( *((char **)SharedCacheMap + 28) == SharedCacheMap + 224 )
      {
        UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
        *((_QWORD *)SharedCacheMap + 34) = UninitializeEvent;
        v5 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
      }
      else
      {
        KeSetEvent(&UninitializeEvent->Event, 0, 0);
      }
    }
    KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
  }
  else
  {
    if ( TruncateSize && !TruncateSize->QuadPart && FileObject->SectionObjectPointer->DataSectionObject )
    {
      KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
      CcPurgeCacheSection(FileObject->SectionObjectPointer, TruncateSize, 0, 0);
    }
    else
    {
      KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
    }
    if ( UninitializeEvent )
      KeSetEvent(&UninitializeEvent->Event, 0, 0);
  }
LABEL_22:
  if ( PrivateCacheMap )
    ExFreePoolWithTag(PrivateCacheMap, 0);
  if ( v5 )
    CcAdjustWriteBehindThreadPoolIfNeeded(1);
  if ( v4 )
  {
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    v19 = *(_QWORD *)(v4 + 24);
    if ( v19 )
      IoDiskIoAttributionDereference(v19);
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[6].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[6].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v4);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(__int64))P->FreeEx)(v4);
    }
  }
  return v3;
}
