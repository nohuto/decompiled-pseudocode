/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1400C54A0
 * Callers:
 *     <none>
 * Callees:
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14002E49C (ExpLeaveWorkerFactoryAwayMode.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KeInsertQueueEx @ 0x140093534 (KeInsertQueueEx.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400C59E0 (ExpWorkerFactoryCheckCreate.c)
 *     KxWaitForLockChainValid @ 0x1400C6540 (KxWaitForLockChainValid.c)
 *     KiInsertQueueInternal @ 0x1400C6988 (KiInsertQueueInternal.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401C49A4 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     IopAllocateMiniCompletionPacket @ 0x14044EFEC (IopAllocateMiniCompletionPacket.c)
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax
  __int64 v2; // r8
  _QWORD *v3; // rbx
  volatile signed __int64 *v4; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v6; // rdx
  __int64 *v7; // rcx
  char v8; // di
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 MiniCompletionPacket; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // rbx
  unsigned __int8 IsThreadRunning; // al
  __int64 *v20; // r15
  __int64 *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rbx
  char v24; // di
  char v25; // al
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  struct _KPRCB *v32; // rdx
  _QWORD *v33; // rcx
  _DWORD v34[2]; // [rsp+30h] [rbp-19h] BYREF
  PVOID Object; // [rsp+38h] [rbp-11h] BYREF
  struct _KPRCB *v36; // [rsp+40h] [rbp-9h]
  __int64 v37; // [rsp+48h] [rbp-1h]
  __int64 v38; // [rsp+50h] [rbp+7h] BYREF
  volatile signed __int64 *v39; // [rsp+58h] [rbp+Fh]
  unsigned __int8 v40; // [rsp+60h] [rbp+17h]
  void *retaddr; // [rsp+A8h] [rbp+5Fh]
  NTSTATUS v42; // [rsp+B8h] [rbp+6Fh]
  int v43; // [rsp+C0h] [rbp+77h] BYREF
  int v44; // [rsp+C8h] [rbp+7Fh] BYREF

  result = ObReferenceObjectByHandle(
             WorkerFactoryHandle,
             1u,
             ExpWorkerFactoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result < 0 )
    return result;
  v3 = Object;
  v4 = (volatile signed __int64 *)*((_QWORD *)Object + 2);
  v39 = v4;
  v38 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v40 = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v38);
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64(v4, (__int64)&v38);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)&v38, v6, v2);
  }
  v7 = (__int64 *)v3[2];
  v8 = 0;
  if ( *((_BYTE *)v7 + 33) )
  {
    v42 = 128;
  }
  else
  {
    v9 = *((_DWORD *)v7 + 6);
    if ( v9 == -1 )
    {
      v42 = -1073741823;
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
      v42 = 0;
      if ( v8 )
      {
        v7 = (__int64 *)Object;
        if ( (*((_DWORD *)Object + 36) & 0x200) != 0 )
          ExpLeaveWorkerFactoryAwayMode(Object);
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v38);
    v12 = v38;
    if ( !v38 )
    {
      v11 = 0LL;
      v7 = &v38;
      if ( (__int64 *)_InterlockedCompareExchange64(v39, 0LL, (signed __int64)&v38) == &v38 )
        goto LABEL_21;
      v12 = KxWaitForLockChainValid(&v38);
    }
    v11 = 0LL;
    v38 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v12 + 8), 1uLL);
    goto LABEL_21;
  }
  KiReleaseQueuedSpinLockInstrumented(&v38, retaddr);
  v11 = 0LL;
LABEL_21:
  __writecr8(v40);
  if ( !v8 )
    goto LABEL_53;
  v13 = v3[2];
  v14 = *(_QWORD *)(v13 + 16);
  v15 = *(_QWORD *)(v13 + 8);
  if ( !v14 )
  {
    LOBYTE(v7) = 1;
    MiniCompletionPacket = IopAllocateMiniCompletionPacket(v7, 0LL);
    if ( MiniCompletionPacket )
    {
      *(_QWORD *)(MiniCompletionPacket + 24) = 0LL;
      *(_QWORD *)(MiniCompletionPacket + 32) = 0LL;
      *(_DWORD *)(MiniCompletionPacket + 40) = 0;
      *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
      KeInsertQueueEx(v15, (_QWORD *)MiniCompletionPacket, 0LL, 0);
    }
    goto LABEL_52;
  }
  *(_QWORD *)(v14 + 24) = 0LL;
  *(_QWORD *)(v14 + 32) = 0LL;
  *(_DWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 48) = 0LL;
  v37 = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v36 = CurrentPrcb;
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v14, IsThreadRunning);
    v11 = 0LL;
  }
  v43 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)v15, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v43, (__int64)v6, v11);
      while ( (*(_DWORD *)v15 & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset((volatile signed __int32 *)v15, 7u) );
    v11 = 0LL;
  }
  v34[1] = *(_DWORD *)(v15 + 4);
  if ( *(_QWORD *)(v15 + 16) == v15 + 8
    || *(_DWORD *)(v15 + 40) >= *(_DWORD *)(v15 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v15 && CurrentThread->WaitReason == 15 )
  {
    goto LABEL_78;
  }
  v20 = *(__int64 **)(v15 + 16);
  do
  {
    v21 = v20;
    v20 = (__int64 *)v20[1];
    v22 = *v21;
    if ( *(__int64 **)(*v21 + 8) != v21 || (__int64 *)*v20 != v21 )
      __fastfail(3u);
    *v20 = v22;
    *(_QWORD *)(v22 + 8) = v20;
    if ( *((_BYTE *)v21 + 16) != 1 )
    {
      *((_BYTE *)v21 + 17) = 5;
      KiInsertQueueInternal(v21[3], v21);
      v11 = 0LL;
      continue;
    }
    v23 = v21[3];
    v24 = 0;
    v44 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v44, v22, v11);
      while ( *(_QWORD *)(v23 + 64) );
    }
    if ( *(_BYTE *)(v23 + 388) != 5 )
      goto LABEL_48;
    v25 = *(_BYTE *)(v23 + 112);
    v24 = 0;
    v26 = v25 & 7;
    if ( v26 == 1 || v26 == 4 )
    {
      v27 = *(_QWORD *)(v23 + 232);
      if ( v27 )
      {
        if ( (*(_BYTE *)v27 & 0x7F) == 0x15 )
        {
          v28 = (unsigned __int8)*(_DWORD *)(v23 + 540);
          *(_DWORD *)(v23 + 540) = v28;
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 4 * v28 + 536));
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 40));
        }
      }
      v29 = *(_QWORD *)(v23 + 712);
      if ( v29 )
      {
        v34[0] = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 22672), 0LL) )
        {
          do
            KeYieldProcessorEx(v34, v27, v11);
          while ( *(_QWORD *)(v29 + 22672) );
        }
        if ( *(_QWORD *)(v23 + 712) )
        {
          v30 = *(_QWORD *)(v23 + 216);
          v31 = *(_QWORD **)(v23 + 224);
          if ( *(_QWORD *)(v30 + 8) != v23 + 216 || *v31 != v23 + 216 )
            __fastfail(3u);
          *v31 = v30;
          v11 = 0LL;
          *(_QWORD *)(v30 + 8) = v31;
          *(_QWORD *)(v23 + 712) = 0LL;
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 22672), 0LL);
        }
        else
        {
          v11 = 0LL;
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 22672), 0LL);
        }
      }
      else
      {
        v11 = 0LL;
      }
      v32 = v36;
      *(_BYTE *)(v23 + 388) = 7;
      v24 = 1;
      *(_QWORD *)(v23 + 216) = v32->DeferredReadyListHead.Next;
      v32->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v23 + 216);
      *(_QWORD *)(v23 + 200) = v14;
    }
    else
    {
      if ( (*(_BYTE *)(v23 + 112) & 7) == 0 )
      {
        v24 = 1;
        *(_BYTE *)(v23 + 112) = v25 & 0xF8 | 2;
        *(_QWORD *)(v23 + 200) = v14;
        *((_BYTE *)v21 + 17) = 0;
LABEL_48:
        v11 = 0LL;
        goto LABEL_49;
      }
      if ( v26 == 5 )
      {
        *(_BYTE *)(v23 + 112) = v25 & 0xF8 | 6;
        goto LABEL_48;
      }
      v11 = 0LL;
      if ( v26 == 3 )
        *((_BYTE *)v21 + 17) = 2;
    }
LABEL_49:
    *(_QWORD *)(v23 + 64) = 0LL;
    ++*((_BYTE *)v21 + 17);
    if ( v24 )
    {
      CurrentPrcb = v36;
      goto LABEL_51;
    }
  }
  while ( v20 != (__int64 *)(v15 + 8) );
  CurrentPrcb = v36;
LABEL_78:
  ++*(_DWORD *)(v15 + 4);
  v33 = *(_QWORD **)(v15 + 32);
  *(_QWORD *)v14 = v15 + 24;
  *(_QWORD *)(v14 + 8) = v33;
  if ( *v33 != v15 + 24 )
    __fastfail(3u);
  *v33 = v14;
  *(_QWORD *)(v15 + 32) = v14;
LABEL_51:
  _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, v37);
LABEL_52:
  ExpWorkerFactoryCheckCreate(Object, 0LL);
LABEL_53:
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v42;
}
