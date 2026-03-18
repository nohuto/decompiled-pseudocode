/*
 * XREFs of VidSchWaitForCompletionEvent @ 0x1C003C908
 * Callers:
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0022F10 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C003817C (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C00392E0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSubmitCommand @ 0x1C0039780 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0039D10 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitPagingCommand @ 0x1C003AA00 (VidSchiSubmitPagingCommand.c)
 *     VidSchiWaitFlushCompletion @ 0x1C003C6BC (VidSchiWaitFlushCompletion.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C003C720 (VidSchWaitForQueuedPresentLimit.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0052D30 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchiAllocateDmaPacket @ 0x1C005F4A8 (VidSchiAllocateDmaPacket.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C0061938 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C0061A5C (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C008B054 (VidSchiWaitForCompletePreemption.c)
 *     VidSchBlockUntilNoUnorderedWaitsInContext @ 0x1C008B190 (VidSchBlockUntilNoUnorderedWaitsInContext.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchiCheckTimeoutForced @ 0x1C000B870 (VidSchiCheckTimeoutForced.c)
 *     VidSchWaitForEvents @ 0x1C0010748 (VidSchWaitForEvents.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     VidSchiReportHwHang @ 0x1C0023200 (VidSchiReportHwHang.c)
 *     VidSchiPrepareToResetEngine @ 0x1C008A8AC (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C008A9C4 (VidSchiResetEngines.c)
 */

__int64 __fastcall VidSchWaitForCompletionEvent(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ecx
  __int64 v6; // r14
  __int64 v7; // rax
  int v8; // eax
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r12d
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r15d
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+88h] [rbp+10h]
  __int64 v27; // [rsp+98h] [rbp+20h] BYREF

  if ( bTracingEnabled && (_DWORD)a3 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_q(a1, &EventBlockThread, a3, a3);
  v5 = *(_DWORD *)(a2 + 32);
  v6 = 0LL;
  if ( (v5 & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a2 + 48) + 376);
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
      v14 = *(_QWORD *)(a2 + 24);
      v15 = *(int *)(a2 + 16);
      if ( v14 )
      {
        v16 = 56 * v15;
        v17 = v14 + 312;
      }
      else
      {
        if ( (v5 & 1) != 0 )
        {
          v7 = v6 + 56 * v15 + 200;
          goto LABEL_8;
        }
        v16 = 56 * v15;
        v17 = a1 + 1528;
      }
      v7 = v16 + v17;
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
      && (v18 = -10000000LL * g_TdrConfig[1], *(_QWORD *)(a2 + 56) = &v27, v27 = v18, *(_DWORD *)(a2 + 20) == 1)
      && VidSchiCheckTimeoutForced(a1) )
    {
      v9 = 1;
      v12 = 258;
    }
    else
    {
      v12 = VidSchWaitForEvents(
              a1,
              *(_DWORD *)(a2 + 64),
              (PVOID *)(a2 + 72),
              *(union _LARGE_INTEGER **)(a2 + 56),
              *(_BYTE *)(a2 + 152));
    }
    if ( (*(_DWORD *)(a2 + 20) != 1 || v12 != 258)
      && (KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 128)
       || !v6
       || !*(_DWORD *)(v6 + 1900) && !*(_DWORD *)(v6 + 1904)) )
    {
      return v12;
    }
    v26 = 0LL;
    if ( v9 )
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
      v26 = v6;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 284LL) & 0x200) != 0 )
    {
      v20 = __rdtsc();
      v21 = __readmsr(0x400000F6u);
      v22 = *((unsigned int *)KeGetCurrentPrcb() + 381);
      v23 = 10 * (v20 - v21) / v22;
      v24 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v22, 10 * (v20 - v21) % v22, v10, v11);
      v24[3] = v21;
      v24[4] = v20;
      v24[5] = v23;
      WdLogEvent5_WdPresentTokenEvent(v24);
      if ( v23 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
        continue;
    }
    if ( VidSchIsTDRPending(a1) || v19 != 2 || !*(_BYTE *)(a1 + 44) )
    {
LABEL_51:
      if ( v6 )
      {
        if ( v19 == 2 && *(_DWORD *)(v6 + 1904) )
          v19 = 10;
        *(_DWORD *)(v6 + 1900) = 0;
        *(_DWORD *)(v6 + 1904) = 0;
      }
      goto LABEL_56;
    }
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 1904) )
        goto LABEL_51;
      if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v6, v25) || !(unsigned __int8)VidSchiResetEngines(v6, v25[0]) )
      {
        v19 = 9;
        *(_DWORD *)(v6 + 1900) = 0;
        goto LABEL_56;
      }
      *(_DWORD *)(v6 + 1900) = 0;
    }
    else
    {
LABEL_56:
      if ( VidSchIsTDRPending(a1) || (unsigned int)VidSchiReportHwHang(a1, *(_QWORD *)(a2 + 144), v19, v26) )
        return v12;
    }
  }
}
