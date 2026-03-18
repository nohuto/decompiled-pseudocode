/*
 * XREFs of EtwTraceContextSwap @ 0x14011EA60
 * Callers:
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     SwapContext @ 0x14015ABD0 (SwapContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 *     PspThreadSiloNoLock @ 0x1400797D4 (PspThreadSiloNoLock.c)
 *     PsIsHostSilo @ 0x140079E50 (PsIsHostSilo.c)
 *     EtwpReserveTraceBuffer @ 0x14009FC90 (EtwpReserveTraceBuffer.c)
 *     EtwpReleaseTraceBuffer @ 0x14009FE24 (EtwpReleaseTraceBuffer.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     EtwpCCSwapTrace @ 0x14011EBF0 (EtwpCCSwapTrace.c)
 *     EtwpReserveWithPebsIndex @ 0x14020EEA8 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14020EF38 (EtwpReserveWithPmcCounters.c)
 *     EtwpStackTraceDispatcher @ 0x140210E18 (EtwpStackTraceDispatcher.c)
 *     PspFreeMonitorContextServerSilo @ 0x1406404D0 (PspFreeMonitorContextServerSilo.c)
 */

void __fastcall EtwTraceContextSwap(__int64 a1, __int64 a2)
{
  int v3; // r14d
  __int64 v5; // rbp
  unsigned int v6; // ebx
  bool i; // zf
  unsigned int v8; // ecx
  __int64 v9; // rdx
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  struct _WORK_QUEUE_ITEM *v17; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v19; // rax
  _QWORD *ServerSiloForSilo; // rax
  _QWORD *v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _PPM_IDLE_STATES *IdleStates; // rax
  char ActualState; // al
  __int64 v30; // rcx
  __int64 v31; // rax
  signed __int64 v32[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v33; // [rsp+98h] [rbp+10h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+18h] BYREF

  v3 = 0;
  if ( KeGetCurrentIrql() >= 2u )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  v19 = PspThreadSiloNoLock((__int64)CurrentThread, (__int64)CurrentThread->Process);
  ServerSiloForSilo = (_QWORD *)PspGetServerSiloForSilo(v19);
  v21 = ServerSiloForSilo;
  if ( ServerSiloForSilo )
    ObfReferenceObjectWithTag(ServerSiloForSilo, 0x746C6644u);
  if ( PsIsHostSilo((__int64)v21) )
  {
LABEL_2:
    _InterlockedIncrement((volatile signed __int32 *)(EtwpSiloState - 104));
    v5 = EtwpSiloState;
  }
  else
  {
    PsGetMonitorContextServerSilo(EtwSiloMonitor, v21, &v34);
    if ( v21 )
      ObfDereferenceObject(v21);
    v5 = v34;
  }
  v6 = EtwpActiveSystemLoggers;
  for ( i = !_BitScanForward(&v8, EtwpActiveSystemLoggers); !i; i = !_BitScanForward(&v8, v6) )
  {
    v9 = v8;
    v6 &= v6 - 1;
    v10 = (char *)&EtwpGroupMasks + 32 * v8;
    if ( !v10 || (*((_DWORD *)v10 + 1) & 4) == 0 )
      continue;
    v11 = (unsigned __int16)EtwpSystemLogger[2 * v9];
    if ( (unsigned int)v11 >= 0x40 )
    {
      v12 = 1LL;
    }
    else
    {
      _mm_lfence();
      v12 = *(_QWORD *)(v5 + 8 * v11 + 912);
    }
    if ( (v12 & 1) != 0 )
      continue;
    if ( (*((_DWORD *)v10 + 1) & 0x100) != 0 )
    {
      v13 = 1 << *(_DWORD *)(v12 + 216);
      if ( (~v3 & v13) != 0 )
      {
        v14 = (*(__int64 (**)(void))(v12 + 40))();
        v15 = *(unsigned int *)(v12 + 216);
        v33 = v14;
        EtwpCCSwapTrace(a1, a2, v15, &v33);
        v3 |= v13;
      }
      goto LABEL_12;
    }
    v22 = *(_DWORD *)(v12 + 832);
    if ( (v22 & 0xC00) == 0 )
      goto LABEL_30;
    if ( (v22 & 0x400) != 0 )
    {
      v23 = EtwpReserveWithPebsIndex(v12, 1316, 24, (unsigned int)v32, (__int64)&v33, 3168770);
      goto LABEL_32;
    }
    if ( (v22 & 0x800) != 0 && (v24 = 0LL, *(_DWORD *)(*(_QWORD *)(v12 + 864) + 16LL)) )
    {
      while ( 1 )
      {
        v25 = *(_QWORD *)(v12 + 864);
        if ( *(_WORD *)(v25 + 2 * v24 + 20) == 1316 )
          break;
        v24 = (unsigned int)(v24 + 1);
        if ( (unsigned int)v24 >= *(_DWORD *)(v25 + 16) )
          goto LABEL_30;
      }
      v23 = EtwpReserveWithPmcCounters(v12, 1316, 24, (unsigned int)v32, (__int64)&v33, 3168770);
    }
    else
    {
LABEL_30:
      v26 = EtwpReserveTraceBuffer(v12, 40LL, (__int64)v32, &v33, 23042);
      if ( !v26 )
        continue;
      v23 = v26 + 16;
      *(_QWORD *)(v26 + 8) = v33;
      *(_DWORD *)v26 = -1072627710;
      *(_DWORD *)(v26 + 4) = 86245416;
    }
LABEL_32:
    if ( v23 )
    {
      *(_DWORD *)v23 = *(_DWORD *)(a2 + 1584);
      *(_DWORD *)(v23 + 4) = *(_DWORD *)(a1 + 1584);
      *(_BYTE *)(v23 + 8) = *(_BYTE *)(a2 + 195);
      *(_BYTE *)(v23 + 9) = *(_BYTE *)(a1 + 195);
      *(_BYTE *)(v23 + 11) = *(_BYTE *)(a2 + 564);
      *(_BYTE *)(v23 + 12) = *(_BYTE *)(a1 + 643);
      *(_BYTE *)(v23 + 13) = *(_BYTE *)(a1 + 391);
      *(_BYTE *)(v23 + 14) = *(_BYTE *)(a1 + 388);
      *(_BYTE *)(v23 + 15) = *(_BYTE *)(a1 + 588);
      *(_DWORD *)(v23 + 16) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
      *(_DWORD *)(v23 + 20) = (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 72)) >> 10;
      CurrentPrcb = KeGetCurrentPrcb();
      if ( (_KTHREAD *)a1 == CurrentPrcb->IdleThread )
      {
        *(_BYTE *)(v23 + 10) = 0;
        IdleStates = CurrentPrcb->PowerState.IdleStates;
        if ( IdleStates )
        {
          ActualState = IdleStates->ActualState;
          goto LABEL_42;
        }
      }
      else
      {
        v30 = *(_QWORD *)(a1 + 104);
        if ( v30 )
        {
          v31 = v30 + CurrentPrcb->ScbOffset;
          if ( *(_DWORD *)(v31 + 116) > 0xFFu )
            ActualState = -1;
          else
            ActualState = *(_BYTE *)(v31 + 116);
        }
        else
        {
          ActualState = 0;
        }
LABEL_42:
        *(_BYTE *)(v23 + 10) = ActualState;
      }
      EtwpReleaseTraceBuffer(v32);
LABEL_12:
      v16 = *(_DWORD *)(v12 + 832);
      if ( (v16 & 0x80u) != 0 && _bittest((const signed __int32 *)(*(_QWORD *)(v12 + 848) + 164LL), 4u) )
        EtwpStackTraceDispatcher(*(_DWORD *)v12 | v16 & 0xFFFF0000, &v33, a2, 3168770LL);
    }
  }
  v17 = (struct _WORK_QUEUE_ITEM *)(v5 - 128);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 - 128 + 24), 0xFFFFFFFF) == 1 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v17[1].Parameter = v17;
      v17[1].WorkerRoutine = (void (__fastcall *)(void *))PspFreeMonitorContextServerSilo;
      v17[1].List.Flink = 0LL;
      ExQueueWorkItem(v17 + 1, DelayedWorkQueue);
    }
    else
    {
      PspFreeMonitorContextServerSilo(v17);
    }
  }
}
