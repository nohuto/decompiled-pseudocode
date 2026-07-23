/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x14006BE00
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14002DDCC (ExpLeaveWorkerFactoryAwayMode.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14006C640 (ExpWorkerFactoryCheckCreate.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     KiInsertQueueInternal @ 0x1401260F4 (KiInsertQueueInternal.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x14042D3D0 (IopAllocateMiniCompletionPacket.c)
 *     ObpRemoveObjectRoutine @ 0x14048AD40 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140524370 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1406AD5D0 (ObpDeregisterObject.c)
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  unsigned int v1; // r15d
  NTSTATUS result; // eax
  _QWORD *v3; // rbx
  volatile signed __int64 *v4; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v6; // rdx
  __int64 *v7; // rcx
  char v8; // di
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 MiniCompletionPacket; // rax
  _QWORD *v16; // rbx
  unsigned __int8 v17; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rdi
  unsigned __int8 v20; // al
  _QWORD *v21; // rcx
  _QWORD *v22; // rsi
  _KTHREAD *v23; // rdi
  unsigned __int8 v24; // al
  unsigned int v25; // ebx
  _QWORD *v26; // rbp
  _QWORD *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rsi
  char v30; // di
  unsigned int v31; // ebx
  char v32; // al
  int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  unsigned int v37; // ebx
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  _QWORD *v40; // rcx
  char *v41; // rbx
  signed __int64 v42; // rax
  bool v43; // cc
  signed __int64 v44; // rax
  char *v45; // rax
  signed __int64 v46; // rcx
  signed __int64 i; // rax
  unsigned __int8 Object; // [rsp+20h] [rbp-78h]
  struct _KPRCB *v49; // [rsp+30h] [rbp-68h]
  unsigned __int8 v50; // [rsp+38h] [rbp-60h]
  __int64 v51; // [rsp+40h] [rbp-58h] BYREF
  volatile signed __int64 *v52; // [rsp+48h] [rbp-50h]
  unsigned __int8 v53; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  NTSTATUS v55; // [rsp+A8h] [rbp+10h]
  PVOID v56; // [rsp+B8h] [rbp+20h] BYREF

  v1 = 0;
  result = ObReferenceObjectByHandle(
             WorkerFactoryHandle,
             1u,
             ExpWorkerFactoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &v56,
             0LL);
  if ( result < 0 )
    return result;
  v3 = v56;
  v4 = (volatile signed __int64 *)*((_QWORD *)v56 + 2);
  v52 = v4;
  v51 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v53 = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v51, v4);
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64(v4, (__int64)&v51);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)&v51, v6);
  }
  v7 = (__int64 *)v3[2];
  v8 = 0;
  if ( *((_BYTE *)v7 + 33) )
  {
    v55 = 128;
  }
  else
  {
    v9 = *((_DWORD *)v7 + 6);
    if ( v9 == -1 )
    {
      v55 = -1073741823;
    }
    else
    {
      *((_DWORD *)v7 + 6) = v9 + 1;
      v10 = v3[2];
      if ( !*(_BYTE *)(v10 + 32) )
      {
        *(_BYTE *)(v10 + 32) = 1;
        v8 = 1;
      }
      v55 = 0;
      if ( v8 )
      {
        v7 = (__int64 *)v56;
        if ( (*((_DWORD *)v56 + 36) & 0x200) != 0 )
          ExpLeaveWorkerFactoryAwayMode(v56);
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v51, retaddr);
    goto LABEL_21;
  }
  _m_prefetchw(&v51);
  v11 = v51;
  if ( !v51 )
  {
    v7 = &v51;
    if ( (__int64 *)_InterlockedCompareExchange64(v52, 0LL, (signed __int64)&v51) == &v51 )
      goto LABEL_21;
    v11 = KxWaitForLockChainValid(&v51);
  }
  v51 = 0LL;
  _InterlockedXor64((volatile signed __int64 *)(v11 + 8), 1uLL);
LABEL_21:
  __writecr8(v53);
  if ( v8 )
  {
    v12 = v3[2];
    v13 = *(_QWORD *)(v12 + 16);
    v14 = *(_QWORD *)(v12 + 8);
    if ( !v13 )
    {
      LOBYTE(v7) = 1;
      MiniCompletionPacket = IopAllocateMiniCompletionPacket(v7, 0LL);
      v16 = (_QWORD *)MiniCompletionPacket;
      if ( !MiniCompletionPacket )
      {
LABEL_115:
        ExpWorkerFactoryCheckCreate(v56, 0LL);
        goto LABEL_116;
      }
      *(_QWORD *)(MiniCompletionPacket + 24) = 0LL;
      *(_QWORD *)(MiniCompletionPacket + 32) = 0LL;
      *(_DWORD *)(MiniCompletionPacket + 40) = 0;
      *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
      v17 = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        if ( CurrentThread->WaitBlockFill6[68] != 2
          || (v20 = 1, CurrentThread->NextProcessor != KeGetPcr()->Prcb.Number) )
        {
          v20 = 0;
        }
        EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, v16, v20);
      }
      if ( _interlockedbittestandset((volatile signed __int32 *)v14, 7u) )
      {
        do
        {
          if ( (++v1 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v1);
        }
        while ( (*(_DWORD *)v14 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v14, 7u) );
      }
      if ( *(_QWORD *)(v14 + 16) == v14 + 8
        || *(_DWORD *)(v14 + 40) >= *(_DWORD *)(v14 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v14 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)CurrentPrcb, v14, (__int64)v16) )
      {
        ++*(_DWORD *)(v14 + 4);
        v21 = *(_QWORD **)(v14 + 32);
        *v16 = v14 + 24;
        v16[1] = v21;
        if ( *v21 != v14 + 24 )
          __fastfail(3u);
        *v21 = v16;
        *(_QWORD *)(v14 + 32) = v16;
      }
      Object = v17;
LABEL_114:
      _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
      KiExitDispatcher((signed __int64)CurrentPrcb, 0, 1u, 0, Object);
      goto LABEL_115;
    }
    *(_QWORD *)(v13 + 24) = 0LL;
    v22 = (_QWORD *)(v14 + 8);
    *(_QWORD *)(v13 + 32) = 0LL;
    *(_DWORD *)(v13 + 40) = 0;
    *(_QWORD *)(v13 + 48) = 0LL;
    v50 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v49 = CurrentPrcb;
    v23 = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      if ( v23->WaitBlockFill6[68] != 2 || (v24 = 1, v23->NextProcessor != KeGetPcr()->Prcb.Number) )
        v24 = 0;
      EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, v13, v24);
    }
    v25 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v14, 7u) )
    {
      do
      {
        if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v25);
      }
      while ( (*(_DWORD *)v14 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v14, 7u) );
    }
    if ( *(_QWORD *)(v14 + 16) == v14 + 8
      || *(_DWORD *)(v14 + 40) >= *(_DWORD *)(v14 + 44)
      || v23->Queue == (_DISPATCHER_HEADER *volatile)v14 && v23->WaitReason == 15 )
    {
LABEL_107:
      ++*(_DWORD *)(v14 + 4);
      v40 = *(_QWORD **)(v14 + 32);
      *(_QWORD *)v13 = v14 + 24;
      *(_QWORD *)(v13 + 8) = v40;
      if ( *v40 != v14 + 24 )
        __fastfail(3u);
      *v40 = v13;
      *(_QWORD *)(v14 + 32) = v13;
LABEL_113:
      Object = v50;
      goto LABEL_114;
    }
    v26 = *(_QWORD **)(v14 + 16);
    while ( 1 )
    {
      v27 = v26;
      v26 = (_QWORD *)v26[1];
      v28 = *v27;
      if ( *(_QWORD **)(*v27 + 8LL) != v27 || (_QWORD *)*v26 != v27 )
        __fastfail(3u);
      *v26 = v28;
      *(_QWORD *)(v28 + 8) = v26;
      if ( *((_BYTE *)v27 + 16) != 1 )
      {
        *((_BYTE *)v27 + 17) = 5;
        KiInsertQueueInternal(v27[3], v27);
        goto LABEL_105;
      }
      v29 = v27[3];
      v30 = 0;
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 64), 0LL) )
      {
        do
        {
          if ( (++v31 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v31);
        }
        while ( *(_QWORD *)(v29 + 64) );
      }
      if ( *(_BYTE *)(v29 + 388) == 5 )
      {
        v32 = *(_BYTE *)(v29 + 112);
        v30 = 0;
        v33 = v32 & 7;
        if ( v33 == 1 || v33 == 4 )
        {
          v34 = *(_QWORD *)(v29 + 232);
          if ( v34 )
          {
            if ( (*(_BYTE *)v34 & 0x7F) == 0x15 )
            {
              v35 = (unsigned __int8)*(_DWORD *)(v29 + 540);
              *(_DWORD *)(v29 + 540) = v35;
              _InterlockedIncrement((volatile signed __int32 *)(v34 + 4 * v35 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v34 + 40));
            }
          }
          v36 = *(_QWORD *)(v29 + 712);
          if ( v36 )
          {
            v37 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 22672), 0LL) )
            {
              do
              {
                if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v37);
              }
              while ( *(_QWORD *)(v36 + 22672) );
            }
            if ( *(_QWORD *)(v29 + 712) )
            {
              v38 = *(_QWORD *)(v29 + 216);
              v39 = *(_QWORD **)(v29 + 224);
              if ( *(_QWORD *)(v38 + 8) != v29 + 216 || *v39 != v29 + 216 )
                __fastfail(3u);
              *v39 = v38;
              *(_QWORD *)(v38 + 8) = v39;
              *(_QWORD *)(v29 + 712) = 0LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v36 + 22672), 0LL);
          }
          *(_BYTE *)(v29 + 388) = 7;
          *(_QWORD *)(v29 + 216) = v49->DeferredReadyListHead.Next;
          v49->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v29 + 216);
          *(_QWORD *)(v29 + 200) = v13;
        }
        else
        {
          if ( (*(_BYTE *)(v29 + 112) & 7) != 0 )
          {
            if ( v33 == 5 )
            {
              *(_BYTE *)(v29 + 112) = v32 & 0xF8 | 6;
            }
            else if ( v33 == 3 )
            {
              *((_BYTE *)v27 + 17) = 2;
            }
            goto LABEL_102;
          }
          *(_BYTE *)(v29 + 112) = v32 & 0xF8 | 2;
          *(_QWORD *)(v29 + 200) = v13;
          *((_BYTE *)v27 + 17) = 0;
        }
        v30 = 1;
      }
LABEL_102:
      *(_QWORD *)(v29 + 64) = 0LL;
      ++*((_BYTE *)v27 + 17);
      if ( v30 )
      {
        CurrentPrcb = v49;
        goto LABEL_113;
      }
      v22 = (_QWORD *)(v14 + 8);
LABEL_105:
      if ( v26 == v22 )
      {
        CurrentPrcb = v49;
        goto LABEL_107;
      }
    }
  }
LABEL_116:
  v41 = (char *)v56 - 48;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v56 - 48);
  v42 = _InterlockedExchangeAdd64((volatile signed __int64 *)v41, 0xFFFFFFFFFFFFFFFFuLL);
  v43 = v42 <= 1;
  v44 = v42 - 1;
  if ( v43 )
  {
    if ( *((_QWORD *)v41 + 1) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v41[24] ^ (unsigned __int64)BYTE1(v41)],
        (ULONG_PTR)v56,
        1uLL,
        *((_QWORD *)v41 + 1));
    if ( v44 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v56, 2uLL, v44);
    if ( KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      _m_prefetchw(&ObpRemoveObjectList);
      v46 = ObpRemoveObjectList;
      *((_QWORD *)v41 + 1) = ObpRemoveObjectList;
      for ( i = _InterlockedCompareExchange64(&ObpRemoveObjectList, (signed __int64)v41, v46);
            i != v46;
            i = _InterlockedCompareExchange64(&ObpRemoveObjectList, (signed __int64)v41, i) )
      {
        v46 = i;
        *((_QWORD *)v41 + 1) = i;
      }
      if ( !v46 )
      {
        if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() <= 2u )
          ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
        else
          KiInsertQueueDpc((unsigned int)&ObpRemoveObjectDpc, 0, 0, 0, 0);
      }
    }
    else
    {
      if ( (v41[26] & 0x40) != 0 )
      {
        v45 = (char *)ObpInfoMaskToOffset[v41[26] & 0x7F];
        if ( v41 != v45 )
          ObpHandleRevocationBlockRemoveObject(v41 - v45);
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(v41);
      ObpRemoveObjectRoutine(v41, 0LL);
    }
  }
  return v55;
}
