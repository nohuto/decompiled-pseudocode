/*
 * XREFs of ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C005A708
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0040B2C (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0059EA8 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C005A640 (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 * Callees:
 *     VidSchIsWorkerThread @ 0x1C0005B30 (VidSchIsWorkerThread.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C001E478 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0078B5C (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 */

void __fastcall VIDMM_DMA_POOL::WaitDmaBufferNotBusy(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        char a3,
        unsigned __int8 *a4)
{
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rax
  _QWORD v13[20]; // [rsp+28h] [rbp-59h] BYREF

  if ( a4 )
    *a4 = 0;
  memset(v13, 0, sizeof(v13));
  LODWORD(v13[2]) = 0;
  v8 = *(_QWORD *)this;
  if ( VidSchIsWorkerThread(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 384LL)) )
    HIDWORD(v13[2]) = 1;
  else
    LOBYTE(v13[19]) = a3;
  if ( (*((_DWORD *)a2 + 7) & 2) != 0 )
  {
    v11 = v13[4];
  }
  else
  {
    v9 = *((_QWORD *)this + 3);
    if ( v9 )
      v10 = *(_QWORD *)(v9 + 216);
    else
      v10 = 0LL;
    v13[3] = v10;
    v11 = (LOBYTE(v13[4]) ^ (unsigned __int8)(4 * (v10 != 0))) & 4 ^ LODWORD(v13[4]);
    LODWORD(v13[4]) = v11;
  }
  if ( VidSchIsWorkerThread(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 384LL)) && (v11 & 4) == 0 )
  {
    v12 = *((unsigned int *)this + 2);
    LODWORD(v13[4]) = v11 | 0x22;
    LODWORD(v13[6]) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 1896LL) + 48 * v12 + 2);
  }
  VidSchRegisterCompletionEvent(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 384LL), v13);
  while ( *((_BYTE *)a2 + 24) == 1 )
  {
    if ( (unsigned int)VidSchWaitForCompletionEvent(*(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(*(_QWORD *)this + 16LL)
                                                                              + 384LL)) == -1073741130 )
    {
      if ( a4 )
        *a4 = 1;
      break;
    }
  }
  VidSchiInterlockedRemoveEntryList(
    (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 384LL) + 1888LL),
    v13,
    0LL);
}
