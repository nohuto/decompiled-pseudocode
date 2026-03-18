/*
 * XREFs of ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0041754
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0041540 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0069804 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C0091678 (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 * Callees:
 *     VidSchIsWorkerThread @ 0x1C0002000 (VidSchIsWorkerThread.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000E3F8 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0042420 (VidSchRegisterCompletionEvent.c)
 */

void __fastcall VIDMM_DMA_POOL::WaitDmaBufferNotBusy(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  char v5; // bp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rbx
  _QWORD *v18; // rax
  _QWORD v19[20]; // [rsp+20h] [rbp-B8h] BYREF

  v5 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v8 + 32) = a2;
  }
  if ( a4 )
    *a4 = 0;
  memset(v19, 0, sizeof(v19));
  LODWORD(v19[2]) = 0;
  if ( VidSchIsWorkerThread(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 384LL)) )
  {
    v16 = *((unsigned int *)a2 + 12);
    v17 = *((_QWORD *)a2 + 5);
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11, v12);
    v18[3] = 270LL;
    v18[4] = 22LL;
    v18[5] = a2;
    v18[6] = v17;
    v18[7] = v16;
    WdLogEvent5_WdCriticalError(v18);
  }
  v13 = *((_DWORD *)a2 + 7);
  LOBYTE(v19[19]) = v5;
  if ( (v13 & 2) == 0 )
  {
    v14 = *((_QWORD *)this + 3);
    if ( v14 )
      v15 = *(_QWORD *)(v14 + 216);
    else
      v15 = 0LL;
    v19[3] = v15;
    LODWORD(v19[4]) ^= (LOBYTE(v19[4]) ^ (unsigned __int8)(2 * (v15 != 0))) & 2;
  }
  VidSchRegisterCompletionEvent(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 384LL), v19);
  while ( *((_BYTE *)a2 + 24) == 1 )
  {
    if ( (unsigned int)VidSchWaitForCompletionEvent(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 384LL), v19, 1LL) == -1073741130 )
    {
      if ( a4 )
        *a4 = 1;
      break;
    }
  }
  VidSchiInterlockedRemoveEntryList(
    (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 384LL) + 1872LL),
    v19,
    0LL);
}
