/*
 * XREFs of ?AddDrawAtlasedRectsInstruction@CAtlasedRectsVisual@@QEAAJPEAVCResource@@0@Z @ 0x1800081C4
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001D3B0 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawAtlasedRectsInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180008230 (-Create@CDrawAtlasedRectsInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::AddDrawAtlasedRectsInstruction(
        CAtlasedRectsVisual *this,
        struct CResource *a2,
        struct CResource *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct CRenderDataInstruction *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v4 = CDrawAtlasedRectsInstruction::Create(a3, a2, &v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x13Du);
  }
  else
  {
    v6 = CVisual::AddInstruction(this, v8);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x13Fu);
  }
  if ( v8 )
    CBaseObject::Release(v8);
  return v5;
}
