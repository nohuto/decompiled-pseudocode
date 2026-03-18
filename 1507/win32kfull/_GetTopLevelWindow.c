/*
 * XREFs of _GetTopLevelWindow @ 0x1C0062200
 * Callers:
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C0004690 (-RequestModernAppClose@@YAHXZ.c)
 *     WindowHasAnyCompositionTargetWithInputSink @ 0x1C0007AB4 (WindowHasAnyCompositionTargetWithInputSink.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C000DDF8 (CreateOrGetRedirectionBitmap.c)
 *     xxxMouseActivate @ 0x1C0040CEC (xxxMouseActivate.c)
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C005BED4 (xxxInheritWindowMonitor.c)
 *     ProtectedContentAccessCheck @ 0x1C0062114 (ProtectedContentAccessCheck.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C0063AFC (IsTopLevelOrLayeredChildWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C0064940 (NtUserGetWindowCompositionAttribute.c)
 *     GetWindowEffectiveCloakState @ 0x1C0064DD0 (GetWindowEffectiveCloakState.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00656F0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     CitGetWindowInfo @ 0x1C0080E80 (CitGetWindowInfo.c)
 *     IsCompositionInputWindowUIDisabled @ 0x1C00DFA10 (IsCompositionInputWindowUIDisabled.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C00F9A64 (DetermineInputTargetPrecedenceTransform.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00FB2A0 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     ShouldProcessHungWindow @ 0x1C00FF760 (ShouldProcessHungWindow.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01D13A0 (xxxSetForegroundCheckNoActivate.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D49B0 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01E5048 (GetDPITransformationMonitor.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01E5344 (IsChildWindowDpiMessageEnabledX.c)
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01FA66C (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FA850 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     _GetNextQueueWindow @ 0x1C0200FC8 (_GetNextQueueWindow.c)
 *     xxxInitializeMoveSizeData @ 0x1C020C6A4 (xxxInitializeMoveSizeData.c)
 *     NtUserGetTopLevelWindow @ 0x1C021C090 (NtUserGetTopLevelWindow.c)
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
