/*
 * XREFs of ?BeginCommand@CResource@@QEAAJPEAXII@Z @ 0x18001D2AC
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x1800205D0 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x18003C2A4 (-SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z.c)
 *     ?GetInstructionForLivePreview@CTopLevelAtlasedRectsVisual@@QEAAJ_NPEAPEAVCDrawAtlasedRectsInstruction@@@Z @ 0x18007D574 (-GetInstructionForLivePreview@CTopLevelAtlasedRectsVisual@@QEAAJ_NPEAPEAVCDrawAtlasedRectsInstru.c)
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x1800891B8 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCResource@@1@Z @ 0x180089AF8 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCResource@@1@Z.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x18008AADC (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CResource::BeginCommand(CResource *this, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebx

  a2[1] = *((_DWORD *)this + 6);
  v4 = MilChannel_BeginCommand(*((struct MIL_CHANNEL__ **)this + 2), a2, a3, a4);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0xA0u);
  return v5;
}
