/*
 * XREFs of _GetTopLevelWindow @ 0x14004D980
 * Callers:
 *     ?IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x140013EDC (-IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140046B9C (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x14004C3E8 (TransformVectorWithInputTargetPrecedence.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x14004DA2C (-ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z.c)
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x14004DB50 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x14008BAC4 (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     GetDPITransformationMonitor @ 0x14008BDAC (GetDPITransformationMonitor.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14008D494 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z @ 0x140098104 (-SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x140099DDC (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1400A8258 (IsTopLevelOrLayeredChildWindow.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     CreateOrGetRedirectionBitmap @ 0x14014D538 (CreateOrGetRedirectionBitmap.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x140163388 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x14017A228 (-GetWindowCloakStateComponentUIAware@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1401CB2E8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::NotifyPartEnter @ 0x1401D69BC (_anonymous_namespace_--NotifyPartEnter.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1401DA998 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     _lambda_bb68417babed644e5befeb743872af35_::operator() @ 0x1401DAEAC (_lambda_bb68417babed644e5befeb743872af35_--operator().c)
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1401F5B28 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 *     ProtectedContentAccessCheck @ 0x1401F6B6C (ProtectedContentAccessCheck.c)
 *     NtUserLayoutCompleted @ 0x1401F7530 (NtUserLayoutCompleted.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1402060B0 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     NtUserBeginLayoutUpdate @ 0x140218660 (NtUserBeginLayoutUpdate.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x14024F4BC (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     NtUserGetTopLevelWindow @ 0x140251670 (NtUserGetTopLevelWindow.c)
 *     CitGetWindowInfo @ 0x14025D590 (CitGetWindowInfo.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?AltF4Callback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x14029B000 (-AltF4Callback@@YA-AW4tagHotKeyCallBackResult@@_K_J@Z.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1402ACA20 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     NtUserNavigateFocus @ 0x1402B88D0 (NtUserNavigateFocus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTopLevelWindow(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // r8

  if ( a1 )
  {
    while ( 1 )
    {
      result = *(_QWORD *)(a1 + 104);
      if ( result )
      {
        v2 = *(_QWORD *)(a1 + 24);
        if ( v2 )
        {
          v3 = *(_QWORD *)(v2 + 8);
          if ( v3 )
          {
            if ( result == *(_QWORD *)(v3 + 24) )
              break;
          }
        }
      }
      a1 = *(_QWORD *)(a1 + 104);
      if ( !result )
        return result;
    }
  }
  return a1;
}
