/*
 * XREFs of ?SetRect@CRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003C46C
 * Callers:
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003B48C (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJQEAUMIL_CHANNEL__@@K@Z @ 0x18003BF6C (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJQEAUMIL_CHANNEL__@@K@Z.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18009C3AC (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleInstruction::SetRect(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    *(_OWORD *)(a1 + 24) = *a2;
  }
  else
  {
    result = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return result;
}
