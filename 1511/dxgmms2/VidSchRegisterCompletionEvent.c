/*
 * XREFs of VidSchRegisterCompletionEvent @ 0x1C003C834
 * Callers:
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C003817C (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchSubmitCommand @ 0x1C0039780 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0039D10 (VidSchiAllocateQueuePacket.c)
 *     VidSchiWaitFlushCompletion @ 0x1C003C6BC (VidSchiWaitFlushCompletion.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C003C720 (VidSchWaitForQueuedPresentLimit.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0052D30 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchBlockUntilNoUnorderedWaitsInContext @ 0x1C008B190 (VidSchBlockUntilNoUnorderedWaitsInContext.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007F60 (VidSchiInterlockedInsertTailList.c)
 */

void __fastcall VidSchRegisterCompletionEvent(__int64 a1, __int64 a2)
{
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rdx
  KSPIN_LOCK *v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx

  KeInitializeEvent((PRKEVENT)(a2 + 96), SynchronizationEvent, 0);
  *(_DWORD *)(a2 + 32) |= 8u;
  v4 = *(_DWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 128) = KeGetCurrentThread();
  if ( !v4 )
  {
    if ( (v5 & 2) != 0 )
    {
      v12 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      if ( (v5 & 1) == 0 )
      {
        v9 = a1 + 1752;
        goto LABEL_6;
      }
      v12 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a2 + 48) + 376);
    }
    v9 = v12 + 368;
LABEL_6:
    v10 = (KSPIN_LOCK *)(a1 + 1840);
    v11 = (_QWORD *)a2;
LABEL_7:
    VidSchiInterlockedInsertTailList(v10, v9, v11, 0LL);
    return;
  }
  v6 = v4 - 1;
  if ( !v6 )
  {
    v9 = a1 + 1768;
    goto LABEL_6;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    v13 = *(_QWORD *)(a2 + 24);
    v10 = (KSPIN_LOCK *)(a1 + 1840);
    v11 = (_QWORD *)a2;
    if ( v13 )
      v9 = v13 + 120;
    else
      v9 = a1 + 1784;
    goto LABEL_7;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *(_QWORD *)(a2 + 24) + 104LL;
    goto LABEL_6;
  }
  if ( v8 == 1 )
  {
    v9 = a1 + 1800;
    goto LABEL_6;
  }
}
