/*
 * XREFs of ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C000C0C4
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0043F50 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00A03FC (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer(_VIDSCH_QUEUE_PACKET *this)
{
  __int64 i; // r10
  __int64 **v2; // rax
  __int64 v3; // r11

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 152); i = (unsigned int)(i + 1) )
  {
    v2 = *(__int64 ***)(*((_QWORD *)this + 75) + 8 * i);
    if ( v2 )
    {
      v3 = **v2;
      if ( (*(_WORD *)(v3 + 76) & 0x3F) == *(_WORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 96LL) + 6LL) )
      {
        *(_QWORD *)(*((_QWORD *)this + 32) + 16LL * (unsigned int)i) = *(_QWORD *)(v3 + 376);
        *(_DWORD *)(*((_QWORD *)this + 32) + 16LL * (unsigned int)i + 8) = *(_DWORD *)(v3 + 16);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 32) + 16LL * (unsigned int)i) = 0LL;
        *(_DWORD *)(*((_QWORD *)this + 32) + 16LL * (unsigned int)i + 8) = 0;
      }
    }
  }
}
