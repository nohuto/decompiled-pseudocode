/*
 * XREFs of VidSchWaitForCompletionEvent @ 0x1C0042284
 * Callers:
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0027554 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiAllocateDmaPacket @ 0x1C0040D44 (VidSchiAllocateDmaPacket.c)
 *     VidSchiWaitFlushCompletion @ 0x1C00413E0 (VidSchiWaitFlushCompletion.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0041754 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C0042170 (VidSchWaitForQueuedPresentLimit.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0042840 (VidSchiSubmitPagingCommand.c)
 *     VidSchSubmitCommand @ 0x1C0042B20 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00432A0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0043F50 (VidSchiSubmitRenderVirtualCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C0068A24 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C0068B54 (VidSchiWaitForEmptyHwQueue.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C008D814 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C00A0944 (VidSchiWaitForCompletePreemption.c)
 *     VidSchBlockUntilNoUnorderedWaitsInContext @ 0x1C00A0A80 (VidSchBlockUntilNoUnorderedWaitsInContext.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0001E3C (VidSchWaitForEvents.c)
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     VidSchiCheckTimeoutForced @ 0x1C000A310 (VidSchiCheckTimeoutForced.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     VidSchiReportHwHang @ 0x1C0027844 (VidSchiReportHwHang.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00A0078 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00A01A0 (VidSchiResetEngines.c)
 */

__int64 __fastcall VidSchWaitForCompletionEvent(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ecx
  __int64 v6; // r14
  __int64 v7; // rax
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // r12d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // r15d
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+88h] [rbp+10h]
  __int64 v25; // [rsp+98h] [rbp+20h] BYREF

  if ( bTracingEnabled && (_DWORD)a3 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_q(a1, &EventBlockThread, a3, a3);
  v5 = *(_DWORD *)(a2 + 32);
  v6 = 0LL;
  if ( (v5 & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a2 + 48) + 408);
  }
  else if ( (v5 & 2) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 96LL);
  }
  if ( !*(_DWORD *)(a2 + 136) )
  {
    *(_DWORD *)(a2 + 64) = 0;
    if ( (v5 & 8) != 0 )
    {
      v7 = a2 + 96;
    }
    else
    {
      v12 = *(_QWORD *)(a2 + 24);
      v13 = *(int *)(a2 + 16);
      if ( v12 )
      {
        v14 = 56 * v13;
        v15 = v12 + 312;
      }
      else
      {
        if ( (v5 & 1) != 0 )
        {
          v7 = v6 + 56 * v13 + 240;
          goto LABEL_8;
        }
        v14 = 56 * v13;
        v15 = a1 + 1560;
      }
      v7 = v14 + v15;
    }
LABEL_8:
    *(_QWORD *)(a2 + 72) = v7;
    ++*(_DWORD *)(a2 + 64);
    *(_QWORD *)(a2 + 144) = MEMORY[0xFFFFF78000000320];
    goto LABEL_9;
  }
  while ( 1 )
  {
LABEL_9:
    v8 = *(_DWORD *)(a2 + 136);
    v9 = 0;
    if ( v8 != -1 )
      *(_DWORD *)(a2 + 136) = v8 + 1;
    if ( *(_DWORD *)(a2 + 20) == 1
      && (v16 = -10000000LL * g_TdrConfig[1], *(_QWORD *)(a2 + 56) = &v25, v25 = v16, *(_DWORD *)(a2 + 20) == 1)
      && VidSchiCheckTimeoutForced(a1) )
    {
      v9 = 1;
      v10 = 258;
    }
    else
    {
      v10 = VidSchWaitForEvents(
              a1,
              *(_DWORD *)(a2 + 64),
              (PVOID *)(a2 + 72),
              *(union _LARGE_INTEGER **)(a2 + 56),
              *(_BYTE *)(a2 + 152));
    }
    if ( (*(_DWORD *)(a2 + 20) != 1 || v10 != 258)
      && (KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 136)
       || !v6
       || !*(_DWORD *)(v6 + 1940) && !*(_DWORD *)(v6 + 1944)) )
    {
      return v10;
    }
    v24 = 0LL;
    if ( v9 )
    {
      v17 = 1;
    }
    else if ( *(_DWORD *)(a2 + 16) == 3 )
    {
      v17 = 3;
    }
    else
    {
      v17 = 2;
      v24 = v6;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 300LL) & 0x200) != 0 )
    {
      v18 = __rdtsc();
      v19 = __readmsr(0x400000F6u);
      v20 = *((unsigned int *)KeGetCurrentPrcb() + 381);
      v21 = 10 * (v18 - v19) / v20;
      v22 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v20, 10 * (v18 - v19) % v20);
      v22[3] = v19;
      v22[4] = v18;
      v22[5] = v21;
      WdLogEvent5_WdPresentTokenEvent(v22);
      if ( v21 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
        continue;
    }
    if ( VidSchIsTDRPending(a1) || v17 != 2 || !*(_BYTE *)(a1 + 44) )
    {
LABEL_51:
      if ( v6 )
      {
        if ( v17 == 2 && *(_DWORD *)(v6 + 1944) )
          v17 = 10;
        *(_DWORD *)(v6 + 1940) = 0;
        *(_DWORD *)(v6 + 1944) = 0;
      }
      goto LABEL_56;
    }
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 1944) )
        goto LABEL_51;
      if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v6, v23) || !(unsigned __int8)VidSchiResetEngines(v6, v23[0]) )
      {
        v17 = 9;
        *(_DWORD *)(v6 + 1940) = 0;
        goto LABEL_56;
      }
      *(_DWORD *)(v6 + 1940) = 0;
    }
    else
    {
LABEL_56:
      if ( VidSchIsTDRPending(a1) || (unsigned int)VidSchiReportHwHang(a1, *(_QWORD *)(a2 + 144), v17, v24) )
        return v10;
    }
  }
}
