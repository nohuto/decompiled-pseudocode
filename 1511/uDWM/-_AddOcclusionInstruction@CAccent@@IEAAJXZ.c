/*
 * XREFs of ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x180015410
 * Callers:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180014140 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x1800155F0 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 *     ?Initialize@CAccent@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180015800 (-Initialize@CAccent@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x1800158BC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z @ 0x18001402C (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 */

__int64 __fastcall CAccent::_AddOcclusionInstruction(CAccent *this)
{
  unsigned int v1; // edi
  int v3; // eax
  int v4; // eax
  struct _MARGINS v6; // [rsp+30h] [rbp-18h] BYREF
  struct CRenderDataInstruction *v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v7 = 0LL;
  *(_QWORD *)&v6.cxLeftWidth = 0LL;
  *(_QWORD *)&v6.cyTopHeight = 0LL;
  if ( *((_DWORD *)this + 66) != 2 )
  {
    v3 = *((_DWORD *)this + 67);
    if ( (v3 & 8) == 0 && (v3 & 2) == 0 && (v3 & 0x800) == 0 && !*((_BYTE *)this + 351) )
    {
      CDrawOcclusionRectangleInstruction::Create(&v6, &v7);
      v4 = CVisual::AddInstruction(this, v7);
      v1 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0xE1u);
      if ( v7 )
        CBaseObject::Release(v7);
    }
  }
  return v1;
}
