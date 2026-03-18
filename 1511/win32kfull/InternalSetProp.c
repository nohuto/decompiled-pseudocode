/*
 * XREFs of InternalSetProp @ 0x1C0079054
 * Callers:
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C000C914 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0075FB4 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     CkptRestore @ 0x1C007734C (CkptRestore.c)
 *     ?Save@Feedback@@YAXAEBUtagSTORE@1@@Z @ 0x1C00790BC (-Save@Feedback@@YAXAEBUtagSTORE@1@@Z.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C007C284 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0080330 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00804CC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxFlashWindow @ 0x1C00C6ACC (xxxFlashWindow.c)
 *     ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C00C7350 (-GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C00D2DD0 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserSetBrokeredForeground @ 0x1C00D58E0 (NtUserSetBrokeredForeground.c)
 *     xxxCreateWindowSmIcon @ 0x1C00FE3C0 (xxxCreateWindowSmIcon.c)
 *     _SetTargetingWindowValue @ 0x1C00FF024 (_SetTargetingWindowValue.c)
 *     _SetTouchWindowFlags @ 0x1C010DFF8 (_SetTouchWindowFlags.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0142A3C (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     _SetWindowContextHelpId @ 0x1C014D700 (_SetWindowContextHelpId.c)
 *     UserAssociateHwnd @ 0x1C01E8348 (UserAssociateHwnd.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01EA9A8 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01EAF38 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F706C (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     NtUserSetAppImeLevel @ 0x1C021F5C0 (NtUserSetAppImeLevel.c)
 *     NtUserfnDDEINIT @ 0x1C0222110 (NtUserfnDDEINIT.c)
 *     SetDisplayAffinity @ 0x1C0239428 (SetDisplayAffinity.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _FindProp @ 0x1C0054934 (_FindProp.c)
 *     CreateProp @ 0x1C0054980 (CreateProp.c)
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
    UserSetLastError(87);
  }
  return 0LL;
}
