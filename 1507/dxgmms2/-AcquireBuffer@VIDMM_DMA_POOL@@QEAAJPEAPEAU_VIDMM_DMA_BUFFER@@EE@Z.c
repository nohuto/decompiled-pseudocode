/*
 * XREFs of ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0040B2C
 * Callers:
 *     VidMmAcquireDmaBuffer @ 0x1C000E4F0 (VidMmAcquireDmaBuffer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C003B67C (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00400F4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C0040D6C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z @ 0x1C0059BEC (-IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0059EA8 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C005A708 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AcquireBuffer(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER **a2, char a3, char a4)
{
  char *v4; // r14
  int v9; // ebx
  struct _VIDMM_DMA_BUFFER *v10; // rdi
  struct _VIDMM_DMA_BUFFER *v11; // rcx
  struct _VIDMM_DMA_BUFFER **v12; // rax
  struct _VIDMM_DMA_BUFFER **v13; // rax
  struct _ERESOURCE *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rbx
  _QWORD *v19; // rax
  signed __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v25; // rax
  unsigned __int8 v26; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 v27; // [rsp+68h] [rbp+10h] BYREF

  v4 = (char *)this + 96;
  *a2 = 0LL;
  v9 = -2147483631;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *(struct _VIDMM_DMA_BUFFER **)v4;
      if ( *(_BYTE *)(*(_QWORD *)v4 + 24LL) )
        goto LABEL_15;
      if ( *((_BYTE *)v10 + 25) != 1 )
        break;
      VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, *(struct _VIDMM_DMA_BUFFER **)v4);
    }
    VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
    v11 = *(struct _VIDMM_DMA_BUFFER **)v10;
    v12 = (struct _VIDMM_DMA_BUFFER **)*((_QWORD *)v10 + 1);
    if ( *(struct _VIDMM_DMA_BUFFER **)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
      __fastfail(3u);
    *v12 = v11;
    *((_QWORD *)v11 + 1) = v12;
    v13 = (struct _VIDMM_DMA_BUFFER **)*((_QWORD *)v4 + 1);
    *(_QWORD *)v10 = v4;
    *((_QWORD *)v10 + 1) = v13;
    if ( *v13 != (struct _VIDMM_DMA_BUFFER *)v4 )
      __fastfail(3u);
    v14 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
    *v13 = v10;
    *((_QWORD *)v4 + 1) = v10;
    ExReleaseResourceLite(v14);
    v17 = *((_QWORD *)this + 7);
    if ( v17 != *((_QWORD *)v10 + 5)
      || *((_DWORD *)this + 18) != *((_DWORD *)v10 + 12)
      || *((_DWORD *)this + 21) != *((_DWORD *)v10 + 13) )
    {
      v18 = *((unsigned int *)this + 18);
      v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15);
      v19[3] = 270LL;
      v19[4] = 22LL;
      v19[5] = v10;
      v19[6] = v17;
      v19[7] = v18;
      WdLogEvent5_WdCriticalError(v19);
    }
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
      *((_QWORD *)v10 + 21) = 0LL;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = 0LL;
    v20 = _InterlockedIncrement64(&VIDMM_DMA_POOL::_DmaBufferUniqueness);
    *((_BYTE *)v10 + 24) = 1;
    *((_DWORD *)v10 + 7) |= 1u;
    v9 = 0;
    *((_QWORD *)v10 + 20) = v20;
    *a2 = v10;
LABEL_15:
    if ( v9 >= 0 )
      return (unsigned int)v9;
    if ( !(unsigned int)VIDMM_DMA_POOL::IsAllowedToGrow(
                          this,
                          *((_DWORD *)this + 10),
                          *((_DWORD *)this + 16),
                          *((_DWORD *)this + 19)) )
      break;
    if ( (int)VIDMM_DMA_POOL::AddDmaBufferToPool(
                this,
                *((_QWORD *)this + 5),
                *((unsigned int *)this + 16),
                *((unsigned int *)this + 19)) < 0 )
    {
      if ( a3 )
        return 3223191810LL;
      v26 = 0;
      VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, v10, a4 == 0, &v26);
      v23 = v26 == 0;
LABEL_22:
      if ( !v23 )
      {
        v25 = WdLogNewEntry5_WdEvent(v22, v21);
        *(_QWORD *)(v25 + 24) = v10;
        WdLogEvent5_WdEvent(v25);
        return (unsigned int)-1073741130;
      }
    }
  }
  if ( !a3 )
  {
    v27 = 0;
    VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, v10, a4 == 0, &v27);
    v23 = v27 == 0;
    goto LABEL_22;
  }
  return 3223191810LL;
}
