/*
 * XREFs of ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z @ 0x1800791D8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x18007CB00 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessCreate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_CREATE *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  *((_QWORD *)this + 109) = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 110) = *((_QWORD *)a3 + 1);
  v3 = CWindowNode::WindowManagerAddRemove(this, 1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x80u);
  return v4;
}
