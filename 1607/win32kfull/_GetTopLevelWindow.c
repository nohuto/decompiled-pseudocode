/*
 * XREFs of _GetTopLevelWindow @ 0x1C0075DF0
 * Callers:
 *     DCESpeedHitTest @ 0x1C0058D3C (DCESpeedHitTest.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00637B4 (CreateOrGetRedirectionBitmap.c)
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C0072364 (ShouldUseLogPixelsForWindowMetrics.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00725BC (IsTopLevelOrLayeredChildWindow.c)
 *     ProtectedContentAccessCheck @ 0x1C0075D78 (ProtectedContentAccessCheck.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C0078810 (NtUserGetWindowCompositionAttribute.c)
 *     GetWindowEffectiveCloakState @ 0x1C0078CC8 (GetWindowEffectiveCloakState.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C007A660 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     CitGetWindowInfo @ 0x1C00AED20 (CitGetWindowInfo.c)
 *     ShouldProcessHungWindow @ 0x1C00D5530 (ShouldProcessHungWindow.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C00DC684 (DetermineInputTargetPrecedenceTransform.c)
 *     xxxMouseActivate @ 0x1C0109300 (xxxMouseActivate.c)
 *     IsCompositionInputWindowUIDisabled @ 0x1C0118264 (IsCompositionInputWindowUIDisabled.c)
 *     WindowHasAnyCompositionTargetWithInputSink @ 0x1C011DC0C (WindowHasAnyCompositionTargetWithInputSink.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C0127B40 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01CAC88 (xxxSetForegroundCheckNoActivate.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01CD3F4 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01DBDF0 (GetDPITransformationMonitor.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01DC0C0 (IsChildWindowDpiMessageEnabledX.c)
 *     PhysicalToLogicalInPlacePoint @ 0x1C01DC23C (PhysicalToLogicalInPlacePoint.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01E0A50 (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01F1D50 (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F1F34 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F866C (_GetNextQueueWindow.c)
 *     xxxInitializeMoveSizeData @ 0x1C0203F8C (xxxInitializeMoveSizeData.c)
 *     NtUserGetTopLevelWindow @ 0x1C0214F90 (NtUserGetTopLevelWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTopLevelWindow(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9

  if ( a1 )
  {
    do
    {
      v1 = *(_QWORD *)(a1 + 88);
      if ( v1 )
      {
        v2 = *(_QWORD *)(a1 + 24);
        v3 = 0LL;
        if ( v2 )
        {
          v4 = *(_QWORD *)(v2 + 8);
          if ( v4 )
            v3 = *(_QWORD *)(v4 + 16);
        }
        if ( v1 == v3 )
          break;
      }
      a1 = *(_QWORD *)(a1 + 88);
    }
    while ( v1 );
  }
  return a1;
}
