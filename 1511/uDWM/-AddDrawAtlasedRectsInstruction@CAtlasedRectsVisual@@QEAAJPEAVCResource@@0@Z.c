/*
 * XREFs of ?AddDrawAtlasedRectsInstruction@CAtlasedRectsVisual@@QEAAJPEAVCResource@@0@Z @ 0x1800123E0
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x1800205D0 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawAtlasedRectsInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18001244C (-Create@CDrawAtlasedRectsInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x14Bu);
  }
  else
  {
    v6 = CVisual::AddInstruction(this, v8);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x14Du);
  }
  if ( v8 )
    CBaseObject::Release(v8);
  return v5;
}
