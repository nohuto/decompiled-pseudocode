/*
 * XREFs of ?Detach@CWindowNode@@QEAAJXZ @ 0x18005E8E8
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800640B0 (--1CWindowNode@@MEAA@XZ.c)
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z @ 0x1800949E0 (-ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180063284 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowNode::Detach(CWindowNode *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CWindowNode::WindowManagerAddRemove(this, 0);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x1348u);
  else
    *((_QWORD *)this + 103) = 0LL;
  return v3;
}
