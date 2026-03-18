/*
 * XREFs of ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180026480
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x1800268A8 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CWindowNode::DetachFromChannel(CWindowNode *this, struct CChannelContext *a2, __int64 a3, __int64 a4)
{
  char v4; // di
  int v7; // eax

  v4 = a3;
  if ( (_BYTE)a3 )
  {
    v7 = CWindowNode::Detach(this);
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1BEu);
  }
  LOBYTE(a3) = v4;
  CNotificationResource::DetachFromChannel(this, a2, a3, a4);
}
