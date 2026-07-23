/*
 * XREFs of CcUninitializeCacheMap @ 0x140030770
 * Callers:
 *     CcPurgeCacheSection @ 0x14008322C (CcPurgeCacheSection.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400304C4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     CcPurgeCacheSection @ 0x14008322C (CcPurgeCacheSection.c)
 *     CcDeleteSharedCacheMap @ 0x140086290 (CcDeleteSharedCacheMap.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x1400D6F58 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObpRemoveObjectRoutine @ 0x14048AD40 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140524370 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1406AD5D0 (ObpDeregisterObject.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  _SLIST_ENTRY *v4; // rdi
  bool v5; // r12
  KIRQL CurrentIrql; // r13
  void *ArbitraryUserPointer; // rcx
  volatile __int64 *v10; // r8
  LONGLONG QuadPart; // rcx
  __int64 v12; // rdx
  char *PrivateCacheMap; // r15
  char *SharedCacheMap; // rbx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 **v17; // rcx
  volatile signed __int64 **v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  BOOLEAN v22; // si
  __int64 v23; // rdx
  __int64 *v24; // rax
  __int64 **v25; // rcx
  __int64 **v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  volatile signed __int64 **v30; // rbx
  __int64 v31; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct _LIST_ENTRY **p_Blink; // rbx
  signed __int64 v37; // rax
  bool v38; // cc
  signed __int64 BugCheckParameter4; // rax
  struct _LIST_ENTRY **v40; // rax
  signed __int64 v41; // rcx
  signed __int64 i; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  _SLIST_ENTRY *v45; // [rsp+60h] [rbp+8h]

  v4 = 0LL;
  v45 = 0LL;
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v10 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 11);
  QuadPart = (LONGLONG)ArbitraryUserPointer + 80;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(QuadPart, v10);
  }
  else
  {
    v12 = _InterlockedExchange64(v10, QuadPart);
    if ( v12 )
      KxWaitForLockOwnerShip(QuadPart, v12, v10, 0LL);
  }
  PrivateCacheMap = (char *)FileObject->PrivateCacheMap;
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( PrivateCacheMap )
  {
    if ( *((PFILE_OBJECT *)PrivateCacheMap + 1) != FileObject )
      KeBugCheckEx(0x34u, 0x881uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( !*((_QWORD *)PrivateCacheMap + 14) )
      goto LABEL_21;
    KeAcquireQueuedSpinLockAtDpcLevel((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
    v15 = (__int64 *)*((_QWORD *)PrivateCacheMap + 14);
    if ( v15 )
    {
      v16 = *v15;
      ++CcDbgNumberOfNoopedReadAheads;
      v17 = (__int64 **)v15[1];
      v45 = (_SLIST_ENTRY *)v15;
      if ( *(__int64 **)(v16 + 8) != v15 || *v17 != v15 )
        __fastfail(3u);
      *v17 = (__int64 *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      v15[1] = 0LL;
      *v15 = 0LL;
      if ( (PFILE_OBJECT)v15[2] != FileObject )
        KeBugCheckEx(0x34u, 0x8A1uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      --*((_DWORD *)SharedCacheMap + 1);
    }
    v18 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v18, retaddr);
LABEL_20:
      v4 = v45;
LABEL_21:
      --*((_DWORD *)SharedCacheMap + 1);
      v20 = *((_QWORD *)PrivateCacheMap + 12);
      QuadPart = *((_QWORD *)PrivateCacheMap + 13);
      if ( *(char **)(v20 + 8) != PrivateCacheMap + 96 || *(char **)QuadPart != PrivateCacheMap + 96 )
        __fastfail(3u);
      *(_QWORD *)QuadPart = v20;
      *(_QWORD *)(v20 + 8) = QuadPart;
      if ( PrivateCacheMap == SharedCacheMap + 376 )
      {
        *(_WORD *)PrivateCacheMap = 0;
        PrivateCacheMap = 0LL;
      }
      FileObject->PrivateCacheMap = 0LL;
      goto LABEL_26;
    }
    _m_prefetchw(v18);
    v19 = (__int64)*v18;
    if ( !*v18 )
    {
      if ( v18 == (volatile signed __int64 **)_InterlockedCompareExchange64(v18[1], 0LL, (signed __int64)v18) )
        goto LABEL_20;
      v19 = KxWaitForLockChainValid(v18);
    }
    *v18 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
    goto LABEL_20;
  }
LABEL_26:
  if ( !SharedCacheMap )
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
    goto LABEL_82;
  }
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
  if ( *((_DWORD *)SharedCacheMap + 1) )
  {
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
    goto LABEL_82;
  }
  if ( *((char **)SharedCacheMap + 28) != SharedCacheMap + 224 )
    KeBugCheckEx(0x34u, 0x916uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( UninitializeEvent )
  {
    UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
    *((_QWORD *)SharedCacheMap + 34) = UninitializeEvent;
    QuadPart = LOBYTE(FileObject->DeviceObject->Characteristics);
    v5 = (QuadPart & 0x10) != 0;
  }
  v21 = *((_DWORD *)SharedCacheMap + 38);
  if ( (v21 & 4) != 0 || UninitializeEvent )
  {
    if ( (v21 & 0x20) != 0 )
      goto LABEL_64;
    if ( !*((_DWORD *)SharedCacheMap + 28) )
    {
      if ( (v21 & 0x400) == 0
        || (QuadPart = 0x7FFFFFFFFFFFFFFFLL, *((_QWORD *)SharedCacheMap + 5) == 0x7FFFFFFFFFFFFFFFLL) )
      {
        CcDeleteSharedCacheMap(SharedCacheMap, CurrentIrql, 0LL, 0LL);
        v5 = 0;
        v22 = 1;
        goto LABEL_83;
      }
    }
  }
  if ( (v21 & 0x20) == 0 )
  {
    if ( (v21 & 0x3000000) != 0 )
    {
      v23 = *((_QWORD *)SharedCacheMap + 15);
      v24 = (__int64 *)(SharedCacheMap + 120);
      v25 = (__int64 **)*((_QWORD *)SharedCacheMap + 16);
      if ( *(char **)(v23 + 8) != SharedCacheMap + 120 || *v25 != v24 )
        __fastfail(3u);
      *v25 = (__int64 *)v23;
      *(_QWORD *)(v23 + 8) = v25;
      v26 = (__int64 **)qword_14034DE38;
      *v24 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
      *((_QWORD *)SharedCacheMap + 16) = v26;
      if ( *v26 != &CcDirtySharedCacheMapWithLogHandleList )
        __fastfail(3u);
      *v26 = v24;
      qword_14034DE38 = (__int64)(SharedCacheMap + 120);
    }
    v27 = SharedCacheMap + 136;
    v28 = *((_QWORD *)SharedCacheMap + 17);
    v29 = (_QWORD *)*((_QWORD *)SharedCacheMap + 18);
    if ( *(char **)(v28 + 8) != SharedCacheMap + 136 || (_QWORD *)*v29 != v27 )
      __fastfail(3u);
    *v29 = v28;
    *(_QWORD *)(v28 + 8) = v29;
    QuadPart = qword_14034DE68;
    *v27 = &CcLazyWriterCursor;
    *((_QWORD *)SharedCacheMap + 18) = QuadPart;
    if ( *(__int64 **)QuadPart != &CcLazyWriterCursor )
      __fastfail(3u);
    *(_QWORD *)QuadPart = v27;
    qword_14034DE68 = (__int64)(SharedCacheMap + 136);
  }
LABEL_64:
  byte_14034E041 = 1;
  if ( !UninitializeEvent || (*((_DWORD *)SharedCacheMap + 38) & 0x20) != 0 )
    QuadPart = 0LL;
  else
    LOBYTE(QuadPart) = 1;
  CcScheduleLazyWriteScan(QuadPart, 0LL);
  v30 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 80);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(v30);
    v31 = (__int64)*v30;
    if ( !*v30 )
    {
      if ( v30 == (volatile signed __int64 **)_InterlockedCompareExchange64(v30[1], 0LL, (signed __int64)v30) )
      {
LABEL_74:
        __writecr8(CurrentIrql);
        goto LABEL_82;
      }
      v31 = KxWaitForLockChainValid(v30);
    }
    *v30 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v31 + 8), 1uLL);
    goto LABEL_74;
  }
  KiReleaseQueuedSpinLockInstrumented(v30, retaddr);
  __writecr8(CurrentIrql);
LABEL_82:
  v22 = 0;
LABEL_83:
  if ( PrivateCacheMap )
    ExFreePoolWithTag(PrivateCacheMap, 0);
  if ( v5 )
    CcAdjustWriteBehindThreadPoolIfNeeded(1);
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
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v4);
    }
    p_Blink = &FileObject[-1].Event.Header.WaitListHead.Blink;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)FileObject - 48);
    v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)p_Blink, 0xFFFFFFFFFFFFFFFFuLL);
    v38 = v37 <= 1;
    BugCheckParameter4 = v37 - 1;
    if ( v38 )
    {
      if ( p_Blink[1] )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)p_Blink + 24) ^ (unsigned __int64)BYTE1(p_Blink)],
          (ULONG_PTR)FileObject,
          1uLL,
          (ULONG_PTR)p_Blink[1]);
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)FileObject, 2uLL, BugCheckParameter4);
      if ( KeGetCurrentThread()->SpecialApcDisable
        || !(unsigned __int8)KeAreInterruptsEnabled(v35, v34)
        || KeGetCurrentIrql() )
      {
        _m_prefetchw(&ObpRemoveObjectList);
        v41 = ObpRemoveObjectList;
        p_Blink[1] = (struct _LIST_ENTRY *)ObpRemoveObjectList;
        for ( i = _InterlockedCompareExchange64(&ObpRemoveObjectList, (signed __int64)p_Blink, v41);
              i != v41;
              i = _InterlockedCompareExchange64(&ObpRemoveObjectList, (signed __int64)p_Blink, i) )
        {
          v41 = i;
          p_Blink[1] = (struct _LIST_ENTRY *)i;
        }
        if ( !v41 )
        {
          if ( (unsigned __int8)KeAreInterruptsEnabled(0LL, v34) && KeGetCurrentIrql() <= 2u )
            ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
          else
            KiInsertQueueDpc((unsigned int)&ObpRemoveObjectDpc, 0, 0, 0, 0);
        }
      }
      else
      {
        if ( (*((_BYTE *)p_Blink + 26) & 0x40) != 0 )
        {
          v40 = (struct _LIST_ENTRY **)ObpInfoMaskToOffset[*((_BYTE *)p_Blink + 26) & 0x7F];
          if ( p_Blink != v40 )
            ObpHandleRevocationBlockRemoveObject((char *)p_Blink - (char *)v40);
        }
        if ( ObpTraceFlags )
          ObpDeregisterObject(&FileObject[-1].Event.Header.WaitListHead.Blink);
        ObpRemoveObjectRoutine(&FileObject[-1].Event.Header.WaitListHead.Blink, 0LL);
      }
    }
  }
  return v22;
}
