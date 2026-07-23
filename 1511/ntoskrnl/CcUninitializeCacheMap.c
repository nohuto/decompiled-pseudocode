/*
 * XREFs of CcUninitializeCacheMap @ 0x1400AEF70
 * Callers:
 *     CcPurgeCacheSection @ 0x14000EA84 (CcPurgeCacheSection.c)
 * Callees:
 *     CcDeleteSharedCacheMap @ 0x14000D140 (CcDeleteSharedCacheMap.c)
 *     CcPurgeCacheSection @ 0x14000EA84 (CcPurgeCacheSection.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AF9C0 (KxAcquireQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x1400AF9F0 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1400AFA68 (CcInsertIntoDirtySharedCacheMapList.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400B2D14 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x140102D74 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  BOOLEAN v3; // r15
  _SLIST_ENTRY *v4; // r13
  bool v5; // r12
  _QWORD *ArbitraryUserPointer; // rcx
  LONGLONG QuadPart; // rcx
  char *PrivateCacheMap; // rdi
  char *SharedCacheMap; // rbx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 **v19; // rcx
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
      KeBugCheckEx(0x34u, 0x890uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( *((_QWORD *)PrivateCacheMap + 14) )
    {
      KeAcquireQueuedSpinLockAtDpcLevel((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
      v17 = (__int64 *)*((_QWORD *)PrivateCacheMap + 14);
      if ( v17 )
      {
        v18 = *v17;
        v4 = (_SLIST_ENTRY *)*((_QWORD *)PrivateCacheMap + 14);
        ++CcDbgNumberOfNoopedReadAheads;
        v19 = (__int64 **)v17[1];
        if ( *(__int64 **)(v18 + 8) != v17 || *v19 != v17 )
          __fastfail(3u);
        *v19 = (__int64 *)v18;
        *(_QWORD *)(v18 + 8) = v19;
        v17[1] = 0LL;
        *v17 = 0LL;
        if ( (PFILE_OBJECT)v17[2] != FileObject )
          KeBugCheckEx(0x34u, 0x8B0uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
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
        KeBugCheckEx(0x34u, 0x925uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( UninitializeEvent )
      {
        UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
        *((_QWORD *)SharedCacheMap + 34) = UninitializeEvent;
        QuadPart = FileObject->DeviceObject->Characteristics;
        if ( (QuadPart & 0x10) != 0 )
          v5 = 1;
      }
      v14 = *((_DWORD *)SharedCacheMap + 38);
      if ( (v14 & 4) != 0 || UninitializeEvent )
      {
        if ( (v14 & 0x20) != 0 )
        {
LABEL_18:
          byte_1402FDBA1 = 1;
          if ( !UninitializeEvent || (*((_DWORD *)SharedCacheMap + 38) & 0x20) != 0 )
            QuadPart = 0LL;
          else
            LOBYTE(QuadPart) = 1;
          CcScheduleLazyWriteScan(QuadPart, 0LL);
          KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 10);
          __writecr8(CurrentIrql);
          goto LABEL_21;
        }
        if ( !*((_DWORD *)SharedCacheMap + 28) )
        {
          if ( (v14 & 0x400) == 0
            || (QuadPart = 0x7FFFFFFFFFFFFFFFLL, *((_QWORD *)SharedCacheMap + 5) == 0x7FFFFFFFFFFFFFFFLL) )
          {
            CcDeleteSharedCacheMap((__int64)SharedCacheMap, CurrentIrql, 0, 0LL);
            v5 = 0;
            v3 = 1;
            goto LABEL_21;
          }
        }
      }
      if ( (v14 & 0x20) == 0 )
        CcInsertIntoDirtySharedCacheMapList(SharedCacheMap);
      goto LABEL_18;
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
LABEL_21:
  if ( PrivateCacheMap )
    ExFreePoolWithTag(PrivateCacheMap, 0);
  if ( v5 )
  {
    LOBYTE(v15) = 1;
    CcAdjustWriteBehindThreadPoolIfNeeded(v15);
  }
  if ( v4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[6].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[6].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v4);
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v4);
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    }
  }
  return v3;
}
