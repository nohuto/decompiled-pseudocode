/*
 * XREFs of ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0011760
 * Callers:
 *     VidMmUnreferenceDmaBuffer @ 0x1C001C7F0 (VidMmUnreferenceDmaBuffer.c)
 *     VidSchiDiscardQueuePacket @ 0x1C008A4A8 (VidSchiDiscardQueuePacket.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1C008C39C (VidSchUnreferenceDmaBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::UnreferenceDmaBuffer(VIDMM_GLOBAL *this, struct _VIDMM_DMA_BUFFER *a2, char a3)
{
  __int64 v3; // r10
  __int64 i; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx

  if ( a3 )
  {
    VidSchUnreferenceDmaBuffer(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL), a2);
  }
  else
  {
    v3 = *((_QWORD *)a2 + 13);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 36); i = (unsigned int)(i + 1) )
    {
      v5 = *(_QWORD *)(v3 + 8 * i);
      if ( v5 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 156), 0xFFFFFFFF);
    }
    v6 = *((_QWORD *)a2 + 8);
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 156), 0xFFFFFFFF);
    ++*((_DWORD *)a2 + 5);
  }
}
