/*
 * XREFs of ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001182C
 * Callers:
 *     VidMmReleaseDmaBuffer @ 0x1C001C730 (VidMmReleaseDmaBuffer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0067D00 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C007A210 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     VidSchiDiscardQueuePacket @ 0x1C008A4A8 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DMA_POOL::ReleaseBuffer(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER *a2, char a3)
{
  bool v3; // zf
  int v4; // eax

  if ( a3 )
  {
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 8, 0xFFFFFFFF) == 1;
  }
  else
  {
    v4 = *((_DWORD *)a2 + 8);
    if ( v4 > 0 )
      *((_DWORD *)a2 + 8) = v4 - 1;
    v3 = *((_DWORD *)a2 + 8) == 0;
  }
  if ( v3 )
    *((_BYTE *)a2 + 24) = 0;
}
