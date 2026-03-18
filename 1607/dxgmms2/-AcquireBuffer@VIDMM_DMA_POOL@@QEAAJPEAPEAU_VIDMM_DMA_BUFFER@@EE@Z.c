/*
 * XREFs of ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0041540
 * Callers:
 *     VidMmAcquireDmaBuffer @ 0x1C0001DB0 (VidMmAcquireDmaBuffer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C006D96C (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z @ 0x1C0041438 (-IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0041754 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00418A8 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0069804 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AcquireBuffer(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER **a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r12
  char v5; // r15
  unsigned int v8; // ebp
  struct _VIDMM_DMA_BUFFER **v9; // rdi
  struct _VIDMM_DMA_BUFFER *v10; // rbx
  struct _VIDMM_DMA_BUFFER *v11; // rcx
  struct _VIDMM_DMA_BUFFER **v12; // rax
  struct _VIDMM_DMA_BUFFER ***v13; // rax
  struct _ERESOURCE *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  signed __int64 v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  bool v30; // zf
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdi
  _QWORD *v36; // rax
  __int64 v37; // rax
  unsigned __int8 v38; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 v39; // [rsp+58h] [rbp+10h] BYREF

  v4 = a4;
  v5 = a3;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  v8 = 0;
  v9 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 96);
  *a2 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *v9;
        if ( *((_BYTE *)*v9 + 24) )
          break;
        if ( *((_BYTE *)v10 + 25) != 1 )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = v10;
          ExAcquireResourceSharedLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock, 1u);
          v11 = *(struct _VIDMM_DMA_BUFFER **)v10;
          v12 = (struct _VIDMM_DMA_BUFFER **)*((_QWORD *)v10 + 1);
          if ( *(struct _VIDMM_DMA_BUFFER **)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
            __fastfail(3u);
          *v12 = v11;
          *((_QWORD *)v11 + 1) = v12;
          v13 = (struct _VIDMM_DMA_BUFFER ***)*((_QWORD *)this + 13);
          if ( *v13 != v9 )
            __fastfail(3u);
          v14 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
          *(_QWORD *)v10 = v9;
          *((_QWORD *)v10 + 1) = v13;
          *v13 = (struct _VIDMM_DMA_BUFFER **)v10;
          *((_QWORD *)this + 13) = v10;
          ExReleaseResourceLite(v14);
          v19 = *((_QWORD *)this + 7);
          if ( v19 != *((_QWORD *)v10 + 5)
            || *((_DWORD *)this + 18) != *((_DWORD *)v10 + 12)
            || *((_DWORD *)this + 21) != *((_DWORD *)v10 + 13) )
          {
            v35 = *((unsigned int *)this + 18);
            v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17, v18);
            v36[3] = 270LL;
            v36[4] = 22LL;
            v36[5] = v10;
            v36[6] = v19;
            v36[7] = v35;
            WdLogEvent5_WdCriticalError(v36);
          }
          if ( (*((_BYTE *)this + 32) & 1) != 0 )
            *((_QWORD *)v10 + 21) = 0LL;
          *((_QWORD *)v10 + 2) = 0LL;
          *((_QWORD *)v10 + 3) = 0LL;
          v20 = _InterlockedIncrement64(&VIDMM_DMA_POOL::_DmaBufferUniqueness);
          *((_BYTE *)v10 + 24) = 1;
          *((_DWORD *)v10 + 7) |= 1u;
          *((_QWORD *)v10 + 20) = v20;
          *a2 = v10;
          return v8;
        }
        VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, *v9);
      }
      if ( !(unsigned int)VIDMM_DMA_POOL::IsAllowedToGrow(
                            this,
                            *((_DWORD *)this + 10),
                            *((_DWORD *)this + 16),
                            *((_DWORD *)this + 19)) )
        break;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v32, v31, v33, v34) + 24) = *((unsigned int *)this + 23);
      }
      if ( VIDMM_DMA_POOL::AddDmaBufferToPool(
             this,
             *((_QWORD *)this + 5),
             *((_DWORD *)this + 16),
             *((_DWORD *)this + 19)) < 0 )
      {
        if ( v5 )
          return 3223191810LL;
        v38 = 0;
        VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, v10, v4 == 0, &v38);
        v30 = v38 == 0;
        goto LABEL_24;
      }
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v27, v26, v28, v29) + 24) = v10;
    }
    if ( v5 )
      return 3223191810LL;
    v39 = 0;
    VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, v10, v4 == 0, &v39);
    v30 = v39 == 0;
LABEL_24:
    if ( !v30 )
    {
      v37 = WdLogNewEntry5_WdEvent(this, a2, a3, a4);
      *(_QWORD *)(v37 + 24) = v10;
      WdLogEvent5_WdEvent(v37);
      return (unsigned int)-1073741130;
    }
  }
}
