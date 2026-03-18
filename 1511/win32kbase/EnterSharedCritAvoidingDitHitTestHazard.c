/*
 * XREFs of EnterSharedCritAvoidingDitHitTestHazard @ 0x1C0043380
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0039070 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     GreGetDCPoint @ 0x1C00422D0 (GreGetDCPoint.c)
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 *     UserReleaseDC @ 0x1C0042CF0 (UserReleaseDC.c)
 *     NtUserGetDC @ 0x1C0042DC0 (NtUserGetDC.c)
 *     UserEnterUserCritSecShared @ 0x1C0044820 (UserEnterUserCritSecShared.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045CF0 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     DrvGetCurrentDpiInfo @ 0x1C0046F34 (DrvGetCurrentDpiInfo.c)
 *     ReferenceDwmApiPort @ 0x1C0069FA0 (ReferenceDwmApiPort.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00786E0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007BBC0 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C00B2C80 (W32pLkmdDataCollectionCallback.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00B8FB0 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     NtHWCursorUpdatePointer @ 0x1C00B9380 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *__fastcall EnterSharedCritAvoidingDitHitTestHazard(int a1, int a2)
{
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PRKSEMAPHORE v11; // rcx

  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceShared(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( a1 || (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && a2 && v4 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v4 == gptiRit )
        return v4;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v11 = (PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v4 == gptiRit )
        return v4;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v11 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v11, UserRequest, 0, 0, 0LL);
  }
  return v4;
}
