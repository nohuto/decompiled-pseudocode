/*
 * XREFs of PtiKbdFromQ @ 0x14009809C
 * Callers:
 *     xxxProcessHidInput @ 0x14001EB20 (xxxProcessHidInput.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400976DC (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     ?CheckQuitMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@H@Z @ 0x140097FB0 (-CheckQuitMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@H@Z.c)
 *     DoTimer @ 0x1400983E4 (DoTimer.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1401724EC (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     EditionKeyEventLLHook @ 0x140172CB0 (EditionKeyEventLLHook.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x140192D18 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _PostThreadMessageEx @ 0x1401D3210 (_PostThreadMessageEx.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x14027AA50 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiKbdFromQ(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 104);
}
