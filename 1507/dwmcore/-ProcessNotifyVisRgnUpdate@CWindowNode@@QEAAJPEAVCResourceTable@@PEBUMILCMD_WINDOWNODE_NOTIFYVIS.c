/*
 * XREFs of ?ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVISRGNUPDATE@@@Z @ 0x180105D64
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x180121C34 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessNotifyVisRgnUpdate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_NOTIFYVISRGNUPDATE *a3)
{
  CDxAccumulationContext *v3; // rcx
  unsigned int v4; // ebx
  int updated; // eax

  v3 = (CDxAccumulationContext *)*((_QWORD *)this + 156);
  v4 = 0;
  if ( v3 )
  {
    updated = CDxAccumulationContext::UpdateDxClipShape(v3, 1);
    v4 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x9FFu);
  }
  return v4;
}
