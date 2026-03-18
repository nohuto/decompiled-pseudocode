/*
 * XREFs of VidSchWaitForCompletionEvent @ 0x1C0079BB0
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C001DC94 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C002E5A8 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C002E664 (VidSchiAllocateDmaPacket.c)
 *     VidSchiAllocateQueuePacket @ 0x1C002F130 (VidSchiAllocateQueuePacket.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0056D10 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C005A708 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0077804 (VidSchiWaitFlushCompletion.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C0077860 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C007791C (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00779E4 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchBlockUntilNoUnorderedWaitsInContext @ 0x1C0077B70 (VidSchBlockUntilNoUnorderedWaitsInContext.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C007A090 (VidSchWaitForQueuedPresentLimit.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     VidSchiCheckTimeoutForced @ 0x1C0005278 (VidSchiCheckTimeoutForced.c)
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     VidSchiCompletePreemption @ 0x1C0015EC4 (VidSchiCompletePreemption.c)
 *     VidSchiNodeHasOnlyPagingContext @ 0x1C0017858 (VidSchiNodeHasOnlyPagingContext.c)
 *     VidSchWaitForEvents @ 0x1C001D6E0 (VidSchWaitForEvents.c)
 *     VidSchiReportHwHang @ 0x1C001DFB4 (VidSchiReportHwHang.c)
 *     VidSchiPrepareToResetEngine @ 0x1C0076B80 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C0076C98 (VidSchiResetEngines.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0077200 (VidSchiSubmitPreemptionCommand.c)
 */

__int64 __fastcall VidSchWaitForCompletionEvent(struct _VIDSCH_GLOBAL *a1, __int64 a2, __int64 a3, char a4)
{
  int v7; // ecx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  char *v12; // rax
  int v13; // r15d
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r9
  int v18; // eax
  int v19; // r12d
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v26; // [rsp+40h] [rbp-48h] BYREF
  unsigned int *v27; // [rsp+48h] [rbp-40h]
  unsigned __int64 v28; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v29; // [rsp+98h] [rbp+10h]

  if ( bTracingEnabled && (_DWORD)a3 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_q((__int64)a1, &EventBlockThread, a3, a3);
  v7 = *(_DWORD *)(a2 + 32);
  v8 = 0LL;
  if ( (v7 & 0x20) != 0 )
  {
    v8 = *((_QWORD *)a1 + *(unsigned int *)(a2 + 48) + 46);
  }
  else if ( (v7 & 4) != 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 96LL);
  }
  if ( *(_DWORD *)(a2 + 136) )
    goto LABEL_22;
  *(_DWORD *)(a2 + 64) = 0;
  if ( (v7 & 0x10) != 0 )
  {
    *(_QWORD *)(a2 + 72) = a2 + 96;
LABEL_20:
    ++*(_DWORD *)(a2 + 64);
    goto LABEL_21;
  }
  v9 = *(_QWORD *)(a2 + 24);
  v10 = *(int *)(a2 + 16);
  if ( v9 )
  {
    v11 = 56 * v10;
    v12 = (char *)(v9 + 312);
  }
  else
  {
    if ( (v7 & 2) != 0 )
    {
      *(_QWORD *)(a2 + 72) = v8 + 56 * (v10 + 3);
      goto LABEL_18;
    }
    v11 = 56 * v10;
    v12 = (char *)a1 + 1576;
  }
  *(_QWORD *)(a2 + 72) = &v12[v11];
LABEL_18:
  ++*(_DWORD *)(a2 + 64);
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 64) + 72) = (char *)a1 + 1520;
    goto LABEL_20;
  }
LABEL_21:
  *(_QWORD *)(a2 + 144) = MEMORY[0xFFFFF78000000320];
LABEL_22:
  v13 = 3;
  if ( *(_DWORD *)(a2 + 20) == 1 && (*((_DWORD *)a1 + 536) & 1) != 0 && !a4 && (*(_DWORD *)(a2 + 32) & 1) == 0 )
  {
    if ( v8 )
    {
      v13 = 1;
      if ( (*(_DWORD *)(v8 + 12) & 1) != 0 )
      {
        if ( VidSchiNodeHasOnlyPagingContext(v8) )
          v13 = 15;
      }
    }
    if ( bTracingEnabled && v13 == 1 )
    {
      if ( *((_DWORD *)a1 + 244) )
        v13 = -14;
      if ( *((_DWORD *)a1 + 229) )
        v13 = -8;
    }
  }
  while ( 1 )
  {
    v14 = *(_DWORD *)(a2 + 136);
    v15 = 0;
    if ( v14 != -1 )
      *(_DWORD *)(a2 + 136) = v14 + 1;
    if ( *(_DWORD *)(a2 + 20) == 1
      && (v13 > 1 ? (v16 = -10000000LL * g_TdrConfig[1]) : (v16 = -*(_QWORD *)(*(_QWORD *)(v8 + 32) + 488LL)),
          (v26 = v16, *(_QWORD *)(a2 + 56) = &v26, *(_DWORD *)(a2 + 20) == 1) && VidSchiCheckTimeoutForced((__int64)a1)) )
    {
      v15 = 1;
      v18 = 258;
    }
    else
    {
      v18 = VidSchWaitForEvents(
              a1,
              *(_DWORD *)(a2 + 64),
              (PVOID *)(a2 + 72),
              *(PLARGE_INTEGER *)(a2 + 56),
              *(_BYTE *)(a2 + 152));
    }
    v29 = v18;
    if ( (*(_DWORD *)(a2 + 32) & 1) != 0
      || (*(_DWORD *)(a2 + 20) != 1 || v18 != 258)
      && (KeGetCurrentThread() != *((struct _KTHREAD **)a1 + 16)
       || !v8
       || !*(_DWORD *)(v8 + 2028) && !*(_DWORD *)(v8 + 2032)) )
    {
      return v29;
    }
    v27 = 0LL;
    if ( v15 )
    {
      v19 = 1;
    }
    else if ( *(_DWORD *)(a2 + 16) == 3 )
    {
      v19 = 3;
    }
    else
    {
      v19 = 2;
      v27 = (unsigned int *)v8;
    }
    if ( v13 != 3 && v13 != 13 )
      VidSchiProfilePerformanceTick(1LL, (__int64)a1, v8, v17, *(_QWORD *)(v8 + 32), 0LL, 0LL, v13);
    if ( v13 > 1 || *(_DWORD *)(v8 + 2028) || *(_DWORD *)(v8 + 2032) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 2) + 284LL) & 0x100) == 0 )
        goto LABEL_86;
      v20 = __rdtsc();
      v21 = __readmsr(0x400000F6u);
      v22 = *((unsigned int *)KeGetCurrentPrcb() + 381);
      v23 = 10 * (v20 - v21) / v22;
      v24 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v22, 10 * (v20 - v21) % v22);
      v24[3] = v21;
      v24[4] = v20;
      v24[5] = v23;
      WdLogEvent5_WdPresentTokenEvent(v24);
      if ( v23 > 10000000 * (unsigned __int64)g_TdrConfig[1] )
      {
LABEL_86:
        if ( VidSchIsTDRPending((__int64)a1) || v19 != 2 || !*((_BYTE *)a1 + 44) )
        {
LABEL_76:
          if ( v8 )
          {
            if ( v19 == 2 && *(_DWORD *)(v8 + 2032) )
              v19 = 10;
            *(_DWORD *)(v8 + 2028) = 0;
            *(_DWORD *)(v8 + 2032) = 0;
          }
          goto LABEL_81;
        }
        if ( v8 )
        {
          if ( *(_DWORD *)(v8 + 2032) )
            goto LABEL_76;
          if ( !VidSchiPrepareToResetEngine(v8, (__int64 *)&v28) || !VidSchiResetEngines(v8, v28) )
          {
            v19 = 9;
            *(_DWORD *)(v8 + 2028) = 0;
            goto LABEL_81;
          }
          *(_DWORD *)(v8 + 2028) = 0;
        }
        else
        {
LABEL_81:
          if ( VidSchIsTDRPending((__int64)a1) || (unsigned int)VidSchiReportHwHang(a1, *(_QWORD *)(a2 + 144), v19, v27) )
            return v29;
        }
      }
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)a1 + 226, 1u);
      _InterlockedAdd((volatile signed __int32 *)(v8 + 2856), 1u);
      VidSchiSubmitPreemptionCommand(v8);
      VidSchiCompletePreemption(v8);
      v13 = 13;
    }
  }
}
