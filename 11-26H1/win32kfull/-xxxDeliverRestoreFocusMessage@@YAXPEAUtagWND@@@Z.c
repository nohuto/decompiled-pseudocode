/*
 * XREFs of ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x140178FF8
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxSetModernAppWindow @ 0x1401C9464 (xxxSetModernAppWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140179C24 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

void __fastcall xxxDeliverRestoreFocusMessage(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v2; // rbx
  struct tagQ **v3; // rdi
  __int64 v4; // rcx

  v2 = a1;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 232LL) < 0 )
    v2 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1592LL);
  if ( v2 )
  {
    v3 = (struct tagQ **)*((_QWORD *)v2 + 2);
    if ( v3[58] == *(struct tagQ **)(W32GetUserSessionState(a1, a2) + 18928) )
    {
      if ( (unsigned int)CoreWindowProp::IsPartOfCompositeApplication(v2) )
      {
        if ( v3 == (struct tagQ **)PtiCurrent(v4) )
          xxxSendMessage(v2, 0x2FBu);
        else
          PostEventMessageEx((struct tagTHREADINFO *)v3, v3[58], 0x1Du, v2, 0, 0LL, 0LL, 0LL);
      }
    }
  }
}
