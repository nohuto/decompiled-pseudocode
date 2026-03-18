/*
 * XREFs of InternalSetProp @ 0x1C0081908
 * Callers:
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C0009180 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C000E358 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxFlashWindow @ 0x1C00776EC (xxxFlashWindow.c)
 *     xxxCreateWindowSmIcon @ 0x1C007D400 (xxxCreateWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00815D0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?Save@Feedback@@YAXAEBUtagSTORE@1@@Z @ 0x1C00818EC (-Save@Feedback@@YAXAEBUtagSTORE@1@@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0082A58 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     CkptRestore @ 0x1C0085C30 (CkptRestore.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00E9EA0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _SetTargetingWindowValue @ 0x1C00F9120 (_SetTargetingWindowValue.c)
 *     _SetTouchWindowFlags @ 0x1C00FFB48 (_SetTouchWindowFlags.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0117AC8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     _SetWindowContextHelpId @ 0x1C0124760 (_SetWindowContextHelpId.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0130DE0 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserSetBrokeredForeground @ 0x1C01549C0 (NtUserSetBrokeredForeground.c)
 *     UserAssociateHwnd @ 0x1C01E7ED4 (UserAssociateHwnd.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01EA498 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01EAA28 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F6BBC (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     NtUserSetAppImeLevel @ 0x1C021F7A0 (NtUserSetAppImeLevel.c)
 *     NtUserfnDDEINIT @ 0x1C0221F40 (NtUserfnDDEINIT.c)
 *     SetDisplayAffinity @ 0x1C0239014 (SetDisplayAffinity.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _FindProp @ 0x1C0065DC0 (_FindProp.c)
 *     CreateProp @ 0x1C0065E08 (CreateProp.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int16 v6; // bx
  __int64 Prop; // rax
  __int64 v8; // rcx

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
