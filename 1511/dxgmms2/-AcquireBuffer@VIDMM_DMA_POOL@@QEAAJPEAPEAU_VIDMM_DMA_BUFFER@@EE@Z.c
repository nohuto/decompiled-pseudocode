/*
 * XREFs of ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0052B30
 * Callers:
 *     VidMmAcquireDmaBuffer @ 0x1C0011870 (VidMmAcquireDmaBuffer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0067D00 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z @ 0x1C0052A24 (-IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0052D30 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C006025C (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0060494 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AcquireBuffer(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER **a2, char a3, char a4)
{
  char *v4; // r14
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rax
  __int64 result; // rax
  __int64 *v15; // rcx
  __int64 **v16; // rax
  char **v17; // rax
  struct _ERESOURCE *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rdi
  _QWORD *v25; // rax
  signed __int64 v26; // rax
  unsigned __int8 v27; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 v28; // [rsp+58h] [rbp+10h] BYREF

  v4 = (char *)this + 96;
  *a2 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(__int64 **)v4;
      if ( !*(_BYTE *)(*(_QWORD *)v4 + 24LL) )
        break;
      if ( (unsigned int)VIDMM_DMA_POOL::IsAllowedToGrow(
                           this,
                           *((_DWORD *)this + 10),
                           *((_DWORD *)this + 16),
                           *((_DWORD *)this + 19)) )
      {
        if ( VIDMM_DMA_POOL::AddDmaBufferToPool(
               this,
               *((_QWORD *)this + 5),
               *((_DWORD *)this + 16),
               *((_DWORD *)this + 19)) < 0 )
        {
          if ( a3 )
            return 3223191810LL;
          v27 = 0;
          VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, (struct _VIDMM_DMA_BUFFER *)v9, a4 == 0, &v27);
          v12 = v27 == 0;
          goto LABEL_9;
        }
      }
      else
      {
        if ( a3 )
          return 3223191810LL;
        v28 = 0;
        VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, (struct _VIDMM_DMA_BUFFER *)v9, a4 == 0, &v28);
        v12 = v28 == 0;
LABEL_9:
        if ( !v12 )
        {
          v13 = WdLogNewEntry5_WdEvent(v11, v10);
          *(_QWORD *)(v13 + 24) = v9;
          WdLogEvent5_WdEvent(v13);
          return 3221226166LL;
        }
      }
    }
    if ( *((_BYTE *)v9 + 25) != 1 )
      break;
    VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, *(struct _VIDMM_DMA_BUFFER **)v4);
  }
  ExAcquireResourceSharedLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock, 1u);
  v15 = (__int64 *)*v9;
  v16 = (__int64 **)v9[1];
  if ( *(__int64 **)(*v9 + 8) != v9 || *v16 != v9 )
    __fastfail(3u);
  *v16 = v15;
  v15[1] = (__int64)v16;
  v17 = (char **)*((_QWORD *)v4 + 1);
  *v9 = (__int64)v4;
  v9[1] = (__int64)v17;
  if ( *v17 != v4 )
    __fastfail(3u);
  v18 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
  *v17 = (char *)v9;
  *((_QWORD *)v4 + 1) = v9;
  ExReleaseResourceLite(v18);
  v23 = *((_QWORD *)this + 7);
  if ( v23 != v9[5] || *((_DWORD *)this + 18) != *((_DWORD *)v9 + 12) || *((_DWORD *)this + 21) != *((_DWORD *)v9 + 13) )
  {
    v24 = *((unsigned int *)this + 18);
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21, v22);
    v25[3] = 270LL;
    v25[4] = 22LL;
    v25[5] = v9;
    v25[6] = v23;
    v25[7] = v24;
    WdLogEvent5_WdCriticalError(v25);
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
    v9[21] = 0LL;
  v9[2] = 0LL;
  v9[3] = 0LL;
  v26 = _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_DmaBufferUniqueness, 1uLL);
  *((_BYTE *)v9 + 24) = 1;
  *((_DWORD *)v9 + 7) |= 1u;
  v9[20] = v26 + 1;
  result = 0LL;
  *a2 = (struct _VIDMM_DMA_BUFFER *)v9;
  return result;
}
