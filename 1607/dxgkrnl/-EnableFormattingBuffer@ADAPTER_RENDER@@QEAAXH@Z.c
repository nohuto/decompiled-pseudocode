/*
 * XREFs of ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C0148DA8
 * Callers:
 *     ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1C0169238 (-EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z.c)
 * Callees:
 *     ?DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001F19C (-DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::EnableFormattingBuffer(ADAPTER_RENDER *this, int a2)
{
  if ( *((_BYTE *)this + 584) )
  {
    if ( a2 )
      ADAPTER_RENDER::CreateFormattingBuffer(this);
    else
      ADAPTER_RENDER::DestroyFormattingBuffer(this);
  }
}
