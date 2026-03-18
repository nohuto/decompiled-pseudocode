/*
 * XREFs of ?Detach@CWindowNode@@QEAAJXZ @ 0x18007DC50
 * Callers:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z @ 0x1800680F0 (-ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x18007D9D0 (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x18007CB00 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowNode::Detach(CWindowNode *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CWindowNode::WindowManagerAddRemove(this, 0);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x1371u);
  else
    *((_QWORD *)this + 109) = 0LL;
  return v3;
}
