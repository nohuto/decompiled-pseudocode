/*
 * XREFs of ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800354E4
 * Callers:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180035990 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x180071B44 (-_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x180074764 (-_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x18008F1E4 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009BAB8 (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSolidRectangleInstruction::SetRect(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    *(_OWORD *)(a1 + 32) = *a2;
  }
  else
  {
    result = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return result;
}
