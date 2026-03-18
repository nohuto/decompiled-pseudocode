/*
 * XREFs of ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x180117140
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18003B930 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_ENABLEDEBUGCOUNTER@@@Z @ 0x18010FC58 (-Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 * Callees:
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x180072CD0 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?SetEnabled@CDebugFrameCounter@@QEAAX_N@Z @ 0x180117110 (-SetEnabled@CDebugFrameCounter@@QEAAX_N@Z.c)
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
