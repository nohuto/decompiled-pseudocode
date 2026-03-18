/*
 * XREFs of ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0052D30
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0052B30 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C006025C (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C0080458 (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000F96C (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchIsWorkerThread @ 0x1C0012180 (VidSchIsWorkerThread.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchRegisterCompletionEvent @ 0x1C003C834 (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 */

void __fastcall VIDMM_DMA_POOL::WaitDmaBufferNotBusy(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        char a3,
        unsigned __int8 *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rbx
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD v18[20]; // [rsp+20h] [rbp-B8h] BYREF

  if ( a4 )
    *a4 = 0;
  memset(v18, 0, sizeof(v18));
  LODWORD(v18[2]) = 0;
  if ( VidSchIsWorkerThread(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 408LL)) )
  {
    v12 = *((unsigned int *)a2 + 12);
    v13 = *((_QWORD *)a2 + 5);
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10, v11);
    v14[3] = 270LL;
    v14[4] = 22LL;
    v14[5] = a2;
    v14[6] = v13;
    v14[7] = v12;
    WdLogEvent5_WdCriticalError(v14);
  }
  v15 = *((_DWORD *)a2 + 7);
  LOBYTE(v18[19]) = a3;
  if ( (v15 & 2) == 0 )
  {
    v16 = *((_QWORD *)this + 3);
    if ( v16 )
      v17 = *(_QWORD *)(v16 + 216);
    else
      v17 = 0LL;
    v18[3] = v17;
    LODWORD(v18[4]) ^= (LOBYTE(v18[4]) ^ (unsigned __int8)(2 * (v17 != 0))) & 2;
  }
  VidSchRegisterCompletionEvent(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 408LL), (__int64)v18);
  while ( *((_BYTE *)a2 + 24) == 1 )
  {
    if ( (unsigned int)VidSchWaitForCompletionEvent(
                         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 408LL),
                         (__int64)v18,
                         1LL) == -1073741130 )
    {
      if ( a4 )
        *a4 = 1;
      break;
    }
  }
  VidSchiInterlockedRemoveEntryList(
    (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 408LL) + 1840LL),
    v18,
    0LL);
}
