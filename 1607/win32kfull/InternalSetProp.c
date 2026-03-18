/*
 * XREFs of InternalSetProp @ 0x1C00A782C
 * Callers:
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C000E2AC (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0063658 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     xxxFlashWindow @ 0x1C0096FE8 (xxxFlashWindow.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0099960 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00A7124 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?Save@Feedback@@YAXAEBUtagSTORE@1@@Z @ 0x1C00A7810 (-Save@Feedback@@YAXAEBUtagSTORE@1@@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00A7ADC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     CkptRestore @ 0x1C00AFD64 (CkptRestore.c)
 *     NtUserSetBrokeredForeground @ 0x1C00ED700 (NtUserSetBrokeredForeground.c)
 *     xxxCreateWindowSmIcon @ 0x1C011E944 (xxxCreateWindowSmIcon.c)
 *     _SetTargetingWindowValue @ 0x1C0120BA4 (_SetTargetingWindowValue.c)
 *     ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C0121260 (-GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C01265B8 (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C012E380 (NtUserShutdownBlockReasonCreate.c)
 *     _SetTouchWindowFlags @ 0x1C012F8D8 (_SetTouchWindowFlags.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C014857C (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     UserAssociateHwnd @ 0x1C01DEBC0 (UserAssociateHwnd.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01E1528 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01E1AB8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01EE1FC (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     NtUserSetAppImeLevel @ 0x1C0219210 (NtUserSetAppImeLevel.c)
 *     NtUserfnDDEINIT @ 0x1C021C2A0 (NtUserfnDDEINIT.c)
 *     SetDisplayAffinity @ 0x1C0231484 (SetDisplayAffinity.c)
 *     _SetWindowContextHelpId @ 0x1C0234AA0 (_SetWindowContextHelpId.c)
 * Callees:
 *     _FindProp @ 0x1C007B010 (_FindProp.c)
 *     CreateProp @ 0x1C007B05C (CreateProp.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int16 v6; // bx
  __int64 Prop; // rax
  __int64 v8; // r10

  v6 = a2;
  if ( a2 )
  {
    Prop = FindProp(a1, a2, a4 & 1);
    if ( Prop )
    {
LABEL_5:
      *(_QWORD *)Prop = a3;
      return 1LL;
    }
    Prop = CreateProp(v8);
    if ( Prop )
    {
      *(_WORD *)(Prop + 8) = v6;
      *(_WORD *)(Prop + 10) = a4;
      goto LABEL_5;
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  return 0LL;
}
