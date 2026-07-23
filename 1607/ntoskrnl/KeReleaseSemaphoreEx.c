/*
 * XREFs of KeReleaseSemaphoreEx @ 0x1400CCF30
 * Callers:
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140008480 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     AlpcpSignalAndWait @ 0x14005DBA0 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14005DED0 (AlpcpSignal.c)
 *     MiCheckForControlAreaDeletion @ 0x14008F4B0 (MiCheckForControlAreaDeletion.c)
 *     PopIrpWorker @ 0x14012C0E4 (PopIrpWorker.c)
 *     PopDispatchQuerySetIrp @ 0x14012C794 (PopDispatchQuerySetIrp.c)
 *     MiQueuePageFileExtension @ 0x1401EEB64 (MiQueuePageFileExtension.c)
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14040924C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpDoPortCleanup @ 0x140409A64 (AlpcpDoPortCleanup.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140446E10 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14049E040 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSignalPortAndUnlock @ 0x1404B4724 (AlpcpSignalPortAndUnlock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiCompleteDirectSwitchThread @ 0x1400CD1D4 (KiCompleteDirectSwitchThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeReleaseSemaphoreEx(__int64 a1, unsigned int a2, int a3, __int64 a4, char a5)
{
  unsigned int v6; // r14d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v10; // r12d
  unsigned int v11; // esi
  int v12; // eax
  _QWORD *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char v17; // al
  bool v18; // zf
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  char v22; // al
  int v23; // r9d
  __int64 *v24; // r8
  unsigned __int8 IsThreadRunning; // al
  __int64 v26; // r9
  struct _KPRCB *v27; // [rsp+30h] [rbp-58h]
  _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  _QWORD *v29; // [rsp+90h] [rbp+8h]
  int v31; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v31 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      KeYieldProcessorEx(&v31);
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  v11 = *(_DWORD *)(a1 + 4);
  v12 = v11 + a3;
  if ( (signed int)(v11 + a3) > *(_DWORD *)(a1 + 24) || v12 < (int)v11 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  *(_DWORD *)(a1 + 4) = v12;
  if ( !v11 )
  {
    v13 = *(_QWORD **)(a1 + 8);
    while ( v13 != (_QWORD *)(a1 + 8) )
    {
      v14 = (__int64)v13;
      v13 = (_QWORD *)*v13;
      v15 = *(_QWORD *)v14;
      v16 = *(_QWORD **)(v14 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      v17 = *(_BYTE *)(v14 + 16);
      if ( v17 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
        {
          v18 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v18 )
            break;
        }
      }
      else
      {
        if ( v17 == 2 )
        {
          *(_BYTE *)(v14 + 17) = 5;
          v32 = *(_QWORD *)(v14 + 24);
          v29 = (_QWORD *)(v32 + 8);
          *(_QWORD *)v14 = 0LL;
          __writecr8(2uLL);
          v27 = KeGetCurrentPrcb();
          CurrentThread = v27->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v27->CurrentThread);
            EtwTraceEnqueueWork(v26, v14, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v32);
          v20 = v29;
          v21 = v32;
          if ( (_QWORD *)*v20 != v20
            && *(_DWORD *)(v32 + 40) < *(_DWORD *)(v32 + 44)
            && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v32 || CurrentThread->WaitReason != 15) )
          {
            v22 = KiWakeQueueWaiter(v27, v32, v14);
            v21 = v32;
            if ( v22 )
              goto LABEL_26;
            v20 = v29;
          }
          v23 = *(_DWORD *)(v21 + 4);
          *(_DWORD *)(v21 + 4) = v23 + 1;
          v24 = *(__int64 **)(v21 + 32);
          if ( *v24 != v21 + 24 )
            __fastfail(3u);
          *(_QWORD *)v14 = v21 + 24;
          *(_QWORD *)(v14 + 8) = v24;
          *v24 = v14;
          *(_QWORD *)(v21 + 32) = v14;
          if ( !v23 && (_QWORD *)*v20 != v20 )
          {
            KiWakeOtherQueueWaiters(v27, v21);
            v21 = v32;
          }
LABEL_26:
          _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
          v18 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v18 )
            break;
          continue;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v14, 256LL, 0LL);
      }
    }
    v6 = a2;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v10 = 1;
    if ( (a5 & 4) == 0 )
      v10 = 3;
  }
  else if ( (a5 & 2) != 0 )
  {
    KiCompleteDirectSwitchThread(CurrentPrcb, CurrentPrcb->CurrentThread);
  }
  KiExitDispatcher((__int64)CurrentPrcb, v10, 1LL, v6, CurrentIrql);
  return v11;
}
