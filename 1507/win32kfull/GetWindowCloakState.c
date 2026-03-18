/*
 * XREFs of GetWindowCloakState @ 0x1C0065D00
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C004061C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     NextTopWindow @ 0x1C0042A00 (NextTopWindow.c)
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     FBadWindow @ 0x1C004490C (FBadWindow.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     DCESpeedHitTest @ 0x1C0065270 (DCESpeedHitTest.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00656F0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00665FC (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 *     zzzImeSetOwnerWindow @ 0x1C0081158 (zzzImeSetOwnerWindow.c)
 *     zzzImeSetFutureOwner @ 0x1C0081268 (zzzImeSetFutureOwner.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0082470 (NtUserSetWindowCompositionAttribute.c)
 *     ShouldProcessHungWindow @ 0x1C00FF760 (ShouldProcessHungWindow.c)
 *     xxxAddShadow @ 0x1C0104418 (xxxAddShadow.c)
 *     _ChildWindowFromPointEx @ 0x1C011A1EC (_ChildWindowFromPointEx.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01E4B20 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01FFA14 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C0200FC8 (_GetNextQueueWindow.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022B488 (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C022CF64 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     _RealChildWindowFromPoint @ 0x1C023BFBC (_RealChildWindowFromPoint.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     _FindProp @ 0x1C0065DC0 (_FindProp.c)
 */

__int64 __fastcall GetWindowCloakState(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _OWORD **Prop; // rax
  _OWORD *v8; // rax
  __int16 v9; // ax
  __int16 v11; // [rsp+20h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 88);
  v2 = 0;
  if ( v1 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v5 = 0LL;
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 8);
      if ( v6 )
        v5 = *(_QWORD *)(v6 + 16);
    }
    if ( v1 == v5 )
      goto LABEL_21;
  }
  if ( (*(_BYTE *)(a1 + 50) & 8) != 0 && GetTopLevelWindow(a1) )
  {
LABEL_21:
    if ( *(_QWORD *)(a1 + 168)
      && (Prop = (_OWORD **)FindProp(a1, (unsigned __int16)atomDWMProp, 1LL)) != 0LL
      && (v8 = *Prop) != 0LL )
    {
      v9 = *v8;
    }
    else
    {
      v9 = v11 & 0xE000;
    }
    if ( (v9 & 0x400) != 0 )
      v2 = 1;
    if ( (v9 & 0x800) != 0 )
      v2 |= 2u;
  }
  return v2;
}
