/*
 * XREFs of GetPhysicalScreenRect @ 0x14021550C
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14029B9AC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     CreatePseudoDigitizerDevice @ 0x14029FFC8 (CreatePseudoDigitizerDevice.c)
 *     xxxRemoteConsoleShadowStart @ 0x1402D2D90 (xxxRemoteConsoleShadowStart.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall GetPhysicalScreenRect(_OWORD *a1, __int64 a2)
{
  __int128 v3; // xmm0
  _OWORD *result; // rax

  v3 = *(_OWORD *)(**(_QWORD **)(W32GetUserSessionState(a1, a2) + 56968) + 24LL);
  result = a1;
  *a1 = v3;
  return result;
}
