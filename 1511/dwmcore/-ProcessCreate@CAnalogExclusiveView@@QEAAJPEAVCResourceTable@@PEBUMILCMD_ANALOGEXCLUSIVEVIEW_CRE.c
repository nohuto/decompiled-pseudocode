/*
 * XREFs of ?ProcessCreate@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_CREATE@@@Z @ 0x1800F992C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterExclusiveView@CAnalogCompositorClient@@QEAAJPEAVCAnalogExclusiveView@@@Z @ 0x18013D558 (-RegisterExclusiveView@CAnalogCompositorClient@@QEAAJPEAVCAnalogExclusiveView@@@Z.c)
 */

__int64 __fastcall CAnalogExclusiveView::ProcessCreate(
        CAnalogExclusiveView *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANALOGEXCLUSIVEVIEW_CREATE *a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  *((_DWORD *)this + 13) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 12) = *((_DWORD *)a3 + 5);
  *((_QWORD *)this + 11) = *((_QWORD *)a3 + 1);
  if ( (_QWORD)xmmword_1801A3FB0 )
  {
    v4 = CAnalogCompositorClient::RegisterExclusiveView(this, this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x3Eu);
  }
  else
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x3Du);
  }
  return v3;
}
