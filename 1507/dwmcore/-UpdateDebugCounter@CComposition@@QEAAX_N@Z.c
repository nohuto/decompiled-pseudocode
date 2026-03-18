/*
 * XREFs of ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x1800E3D20
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x180068664 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x18009381C (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?SetEnabled@CDebugFrameCounter@@QEAAX_N@Z @ 0x1800E3CF0 (-SetEnabled@CDebugFrameCounter@@QEAAX_N@Z.c)
 */

void __fastcall CComposition::UpdateDebugCounter(CComposition *this, char a2)
{
  char v2; // dl
  __int64 v4; // r9

  if ( a2 )
  {
    if ( ++*((_DWORD *)this + 120) != 1 )
      return;
    v2 = 1;
  }
  else
  {
    if ( (*((_DWORD *)this + 120))-- != 1 )
      return;
    v2 = 0;
  }
  CDebugFrameCounter::SetEnabled(*((CDebugFrameCounter **)this + 61), v2);
  CRenderTargetManager::ForceFullRender(*(CRenderTargetManager **)(v4 + 32));
}
