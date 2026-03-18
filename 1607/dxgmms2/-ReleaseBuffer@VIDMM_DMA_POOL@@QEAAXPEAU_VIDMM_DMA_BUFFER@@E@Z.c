/*
 * XREFs of ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0001DC4
 * Callers:
 *     VidMmReleaseDmaBuffer @ 0x1C001D5F0 (VidMmReleaseDmaBuffer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C006D96C (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C0087FC8 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     VidSchiDiscardQueuePacket @ 0x1C009FC70 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DMA_POOL::ReleaseBuffer(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER *a2, char a3)
{
  __int64 v6; // rax
  bool v7; // zf
  int v8; // eax

  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v6 + 24) = a2;
    *(_QWORD *)(v6 + 32) = *((_QWORD *)this + 2);
  }
  if ( a3 )
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 8, 0xFFFFFFFF) == 1;
  }
  else
  {
    v8 = *((_DWORD *)a2 + 8);
    if ( v8 > 0 )
      *((_DWORD *)a2 + 8) = v8 - 1;
    v7 = *((_DWORD *)a2 + 8) == 0;
  }
  if ( v7 )
    *((_BYTE *)a2 + 24) = 0;
}
