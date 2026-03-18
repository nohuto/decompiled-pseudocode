/*
 * XREFs of VidSchRegisterCompletionEvent @ 0x1C0078B5C
 * Callers:
 *     VidSchiAllocateQueuePacket @ 0x1C002F130 (VidSchiAllocateQueuePacket.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0056D10 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C005A708 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0077804 (VidSchiWaitFlushCompletion.c)
 *     VidSchBlockUntilNoUnorderedWaitsInContext @ 0x1C0077B70 (VidSchBlockUntilNoUnorderedWaitsInContext.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C007A090 (VidSchWaitForQueuedPresentLimit.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0006280 (VidSchiInterlockedInsertTailList.c)
 */

void __fastcall VidSchRegisterCompletionEvent(__int64 a1, __int64 a2)
{
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rdx
  KSPIN_LOCK *v11; // rcx
  _QWORD *v12; // r8

  KeInitializeEvent((PRKEVENT)(a2 + 96), SynchronizationEvent, 0);
  *(_DWORD *)(a2 + 32) |= 0x10u;
  v4 = *(_DWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 128) = KeGetCurrentThread();
  if ( v4 )
  {
    v6 = v4 - 1;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( !v7 )
      {
        v10 = *(_QWORD *)(a2 + 24);
        v11 = (KSPIN_LOCK *)(a1 + 1888);
        v12 = (_QWORD *)a2;
        if ( v10 )
          v9 = v10 + 120;
        else
          v9 = a1 + 1832;
        goto LABEL_18;
      }
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
          return;
        v9 = a1 + 1848;
      }
      else
      {
        v9 = *(_QWORD *)(a2 + 24) + 104LL;
      }
    }
    else
    {
      v9 = a1 + 1816;
    }
  }
  else if ( (v5 & 4) != 0 )
  {
    v9 = *(_QWORD *)(a2 + 24) + 368LL;
  }
  else if ( (v5 & 2) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a2 + 48) + 368) + 336LL;
  }
  else
  {
    v9 = a1 + 1800;
  }
  v11 = (KSPIN_LOCK *)(a1 + 1888);
  v12 = (_QWORD *)a2;
LABEL_18:
  VidSchiInterlockedInsertTailList(v11, v9, v12, 0LL);
}
