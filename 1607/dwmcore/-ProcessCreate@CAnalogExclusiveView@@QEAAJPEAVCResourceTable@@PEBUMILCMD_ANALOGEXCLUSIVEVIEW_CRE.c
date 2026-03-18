/*
 * XREFs of ?ProcessCreate@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_CREATE@@@Z @ 0x18010E91C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterExclusiveView@CAnalogCompositorClient@@QEAAJPEAVCAnalogExclusiveView@@@Z @ 0x180167574 (-RegisterExclusiveView@CAnalogCompositorClient@@QEAAJPEAVCAnalogExclusiveView@@@Z.c)
 */

__int64 __fastcall CAnalogExclusiveView::ProcessCreate(
        CAnalogExclusiveView *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANALOGEXCLUSIVEVIEW_CREATE *a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 5);
  *((_QWORD *)this + 20) = *((_QWORD *)a3 + 1);
  if ( (_QWORD)xmmword_1801F03A0 )
  {
    v4 = CAnalogCompositorClient::RegisterExclusiveView(this, this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x3Fu);
  }
  else
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x3Eu);
  }
  return v3;
}
