/*
 * XREFs of ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800
 * Callers:
 *     <none>
 * Callees:
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180001EC0 (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x180001F50 (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x1800020B8 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x1800022B0 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800035B4 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180003670 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180003A94 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?OnMouseLeftButton@CButton@@UEAAX_N@Z @ 0x180003AE0 (-OnMouseLeftButton@CButton@@UEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x18000590C (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18000B414 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18000B5D0 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x18000B630 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x18000B684 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180017DE8 (--0CWindowData@@QEAA@XZ.c)
 *     ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x180022ACC (-ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180022B80 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z @ 0x18002A254 (-GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETER.c)
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x18002BD48 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x18002BE18 (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x18002BECC (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002EED0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18003CFFC (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x18003D2A0 (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x18003D328 (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18007341C (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x180078634 (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x180078714 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x180078C10 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x1800792C8 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x1800793F8 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x1800799F8 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR@@@Z @ 0x180079B64 (-SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICD.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180079BFC (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180079D24 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007A078 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007A220 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x18007ECCC (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EDE8 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x18009C7B4 (-OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18009C824 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18009D184 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

__int64 __fastcall CWindowList::ProcessSyncDwmMessage(
        CWindowList *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned int a6,
        struct _REMOTE_PORT_VIEW *a7,
        int *a8,
        unsigned int *a9)
{
  int updated; // ebx
  __int64 v14; // rcx
  __int64 v15; // r12
  struct CWindowData *v16; // r15
  unsigned int v17; // r14d
  int v18; // r13d
  __int64 v19; // rax
  struct IDwmWindow *v20; // r12
  struct CWindowData *v21; // rdi
  int v22; // ebx
  __int64 v23; // rdi
  int v24; // eax
  struct CVisual *v25; // rbx
  unsigned int v26; // r12d
  LONG v27; // r14d
  LONG v28; // r15d
  bool v29; // zf
  int v30; // r15d
  CButton *v31; // rcx
  struct CVisual *v32; // rdx
  CBaseObject *v33; // r15
  __int64 v34; // r12
  CButton *v35; // rbx
  void (__fastcall *v36)(CButton *, char); // rdi
  int *v37; // rdi
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  volatile signed __int32 *v42; // rcx
  unsigned int v43; // r14d
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  unsigned int v48; // r8d
  CAnimationClockCoordinator *v49; // rcx
  unsigned int v50; // r8d
  CAnimationClockCoordinator *v51; // rcx
  CAnimationClockCoordinator *v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // r8
  __int64 v57; // rcx
  struct _GUID v58; // xmm0
  CAnimationClockCoordinator *v59; // rcx
  HRESULT v60; // eax
  CWindowData *v61; // rax
  CWindowData *v62; // rax
  __int64 v63; // rax
  CWindowList *v64; // rcx
  int v65; // eax
  float *v66; // rdx
  CBaseObject *v67; // rcx
  unsigned __int8 v68; // [rsp+48h] [rbp-B8h]
  unsigned int v69; // [rsp+4Ch] [rbp-B4h] BYREF
  struct tagPOINT v70; // [rsp+50h] [rbp-B0h] BYREF
  float v71; // [rsp+58h] [rbp-A8h] BYREF
  float v72; // [rsp+5Ch] [rbp-A4h]
  struct CVisual *v73; // [rsp+60h] [rbp-A0h] BYREF
  CWindowList *v74; // [rsp+68h] [rbp-98h]
  HANDLE hObject; // [rsp+70h] [rbp-90h] BYREF
  struct _RTL_CRITICAL_SECTION *v76; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v77; // [rsp+80h] [rbp-80h]
  struct _GUID v78; // [rsp+90h] [rbp-70h] BYREF
  __int128 v79; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v80; // [rsp+B0h] [rbp-50h] BYREF
  struct _GUID v81; // [rsp+C0h] [rbp-40h] BYREF
  struct _GUID v82; // [rsp+D0h] [rbp-30h] BYREF
  struct _GUID v83; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v84[64]; // [rsp+F0h] [rbp-10h] BYREF

  *a9 = 0;
  v74 = a1;
  updated = -2147024872;
  v77 = a9;
  if ( a2 != 1073741849 )
  {
    switch ( a2 )
    {
      case 0x4000001Au:
        if ( a5 && a4 == 156 )
        {
          CWindowList::GetTitleBarInfo(a1, (struct MILCMD_DWM_REDIRECTION_GETTITLEBARINFO *)a3);
          *a9 = 156;
          updated = 0;
        }
        goto LABEL_62;
      case 0x4000001Eu:
        if ( a4 != 36 )
          goto LABEL_62;
        v41 = *(_QWORD *)(a3 + 12);
        if ( v41 && !(unsigned int)DwmValidateWindow(v41, a6) )
          goto LABEL_167;
        updated = CWindowList::RegisterThumbnail(a1, a6, (struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *)a3);
        goto LABEL_47;
      case 0x4000001Fu:
        if ( a4 != 57 )
          goto LABEL_62;
        updated = CWindowList::UpdateThumbnailProperties(
                    a1,
                    a6,
                    (struct MILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES *)a3);
        goto LABEL_47;
      case 0x40000020u:
        if ( a4 != 12 )
          goto LABEL_62;
        updated = CWindowList::UnregisterThumbnail(
                    a1,
                    a6,
                    (const struct MILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL *)a3);
        goto LABEL_47;
      case 0x40000022u:
        if ( a4 != 20 )
          goto LABEL_62;
        updated = CWindowList::QueryThumbnailSourceSize(
                    a1,
                    a6,
                    (struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE *)a3);
        *a9 = 20;
        goto LABEL_47;
      case 0x40000023u:
        if ( a4 != 24 )
          goto LABEL_62;
        v39 = *(_QWORD *)(a3 + 4);
        if ( v39 && !(unsigned int)DwmValidateWindow(v39, a6) )
          updated = -2147024891;
        else
          updated = CWindowList::QueryWindowThumbnailSourceSize(
                      a1,
                      (struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *)a3);
        *a9 = 24;
        goto LABEL_47;
      case 0x40000028u:
        if ( a4 != 32 )
          goto LABEL_62;
        updated = CWindowList::SetColorizationParameters(
                    a1,
                    (const struct MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS *)a3);
        goto LABEL_47;
      case 0x40000029u:
        if ( a4 != 32 )
          goto LABEL_62;
        CWindowList::GetColorizationParameters(a1, (struct MILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS *)a3);
        v37 = a8;
        updated = 0;
        *a9 = 32;
        goto LABEL_41;
      case 0x4000002Au:
        if ( !a5 )
          goto LABEL_62;
        if ( a4 <= 0x18 )
          goto LABEL_62;
        v43 = *(_DWORD *)(a3 + 20) + 24;
        if ( *(_DWORD *)(a3 + 20) >= 0xFFFFFFE8 || a4 < v43 || !*(_DWORD *)(a3 + 4) )
          goto LABEL_62;
        updated = CWindowList::GetWindowAttribute(a1, (struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
        *a9 = v43;
        goto LABEL_47;
      case 0x40000033u:
        if ( a4 != 20 )
          goto LABEL_62;
        updated = CWindowList::GetGlobalState(a1, (struct MILCMD_DWM_REDIRECTION_GETGLOBALSTATE *)a3);
        *a9 = 20;
        goto LABEL_47;
      case 0x40000038u:
        if ( !CDesktopManager::IsLivePreviewAllowed() )
        {
          updated = -2147024846;
          goto LABEL_98;
        }
        if ( a4 != 48 )
          goto LABEL_98;
        updated = CWindowList::PostActivateLivePreview(
                    a1,
                    (const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *)a3);
        goto LABEL_47;
      case 0x40000039u:
        if ( a4 != 24 )
          goto LABEL_62;
        v45 = *(_QWORD *)(a3 + 4);
        if ( v45 && !(unsigned int)DwmValidateWindow(v45, a6) )
          goto LABEL_167;
        updated = CWindowList::SetIconicThumbnail(
                    a1,
                    a6,
                    (const struct MILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL *)a3,
                    a7);
        goto LABEL_47;
      case 0x4000003Bu:
        if ( a4 != 16 )
          goto LABEL_62;
        updated = CWindowList::QueryThumbnailType(a1, a6, (struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE *)a3);
        *a9 = 16;
        goto LABEL_47;
      case 0x4000003Cu:
        if ( !CDesktopManager::IsLivePreviewAllowed() )
        {
          updated = -2147024846;
          goto LABEL_98;
        }
        if ( a4 != 32 )
          goto LABEL_98;
        v46 = *(_QWORD *)(a3 + 4);
        if ( v46 && !(unsigned int)DwmValidateWindow(v46, a6) )
          goto LABEL_167;
        updated = CWindowList::SetIconicLivePreviewBitmap(
                    a1,
                    a6,
                    (const struct MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP *)a3,
                    a7);
LABEL_47:
        v37 = a8;
        goto LABEL_48;
      case 0x4000003Du:
        if ( a4 != 12 )
          goto LABEL_62;
        v40 = *(_QWORD *)(a3 + 4);
        if ( v40 && !(unsigned int)DwmValidateWindow(v40, a6) )
          goto LABEL_167;
        updated = CWindowList::InvalidateIconicBitmaps(
                    a1,
                    a6,
                    (const struct MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS *)a3);
        goto LABEL_47;
      case 0x40000040u:
        if ( a4 != 32 )
          goto LABEL_62;
        updated = CContactManager::OnGesture(
                    *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
                    (const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *)a3);
        goto LABEL_47;
      case 0x40000041u:
        if ( a4 != 16 )
          goto LABEL_62;
        updated = CContactManager::OnFlick(
                    *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
                    (const struct MILCMD_DWM_REDIRECTION_RENDERFLICK *)a3);
        goto LABEL_47;
      case 0x40000047u:
        if ( a4 != 48 )
          goto LABEL_62;
        updated = CWindowList::StartTransition(a1, (struct MILCMD_DWM_REDIRECTION_STARTTRANSITION *)a3);
        *a9 = 48;
        goto LABEL_47;
      case 0x4000004Fu:
        if ( a4 != 8 )
          goto LABEL_62;
        updated = CWindowList::HandleHardwareExpressionActivation(a1, *(_DWORD *)(a3 + 4));
        goto LABEL_47;
      case 0x40000052u:
        if ( a4 != 52 )
          goto LABEL_62;
        updated = CWindowList::UpdateSharedVirtualDesktopVisual(
                    a1,
                    a6,
                    (const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *)a3,
                    a7);
        goto LABEL_47;
      case 0x40000055u:
        if ( a4 != 16 )
          goto LABEL_62;
        v44 = *(_QWORD *)(a3 + 4);
        if ( v44 && !(unsigned int)DwmValidateWindow(v44, a6) )
          goto LABEL_167;
        updated = CWindowList::SetIconicBitmapBackgroundColor(
                    a1,
                    (const struct MILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR *)a3);
        goto LABEL_47;
      case 0x40000058u:
        if ( a4 != 24 )
          goto LABEL_62;
        v48 = *(_DWORD *)(a3 + 20);
        v49 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
        v83 = *(struct _GUID *)(a3 + 4);
        updated = CAnimationClockCoordinator::OnCreateAnimationClock(v49, &v83, v48);
        goto LABEL_47;
      case 0x40000059u:
        if ( a4 != 24 )
          goto LABEL_62;
        v50 = *(_DWORD *)(a3 + 20);
        v51 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
        v78 = *(struct _GUID *)(a3 + 4);
        updated = CAnimationClockCoordinator::OnBeginAnimationClock(v51, &v78, v50);
        goto LABEL_47;
      case 0x4000005Au:
        if ( a4 != 20 )
          goto LABEL_62;
        v52 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
        v81 = *(struct _GUID *)(a3 + 4);
        updated = CAnimationClockCoordinator::OnEndAnimationClock(v52, &v81);
        goto LABEL_47;
      case 0x4000005Bu:
        if ( a4 != 32 )
          goto LABEL_62;
        v53 = *(unsigned int *)(a3 + 20);
        v54 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
        v79 = *(_OWORD *)(a3 + 4);
        updated = CAnimationClockCoordinator::OnGetAnimationClockTime(v54, &v79, v53, a3 + 24);
        *a9 = 32;
        goto LABEL_47;
      case 0x4000005Cu:
        if ( a4 != 32 )
          goto LABEL_62;
        v55 = a3 + 24;
        if ( !*(_QWORD *)(a3 + 24) )
          v55 = 0LL;
        v56 = *(unsigned int *)(a3 + 20);
        v57 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
        v80 = *(_OWORD *)(a3 + 4);
        updated = CAnimationClockCoordinator::OnSetAnimationClockTime(v57, &v80, v56, v55);
        goto LABEL_47;
      case 0x4000005Du:
        if ( a4 != 28 )
          goto LABEL_62;
        v58 = *(struct _GUID *)(a3 + 4);
        hObject = 0LL;
        v59 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
        v82 = v58;
        updated = CAnimationClockCoordinator::OnGetAnimationClockToken(v59, &v82, &hObject);
        if ( updated >= 0 )
        {
          v60 = NtDCompositionDuplicateHandleToProcess();
          updated = v60 | 0x10000000;
          if ( v60 >= 0 )
            *(_QWORD *)(a3 + 20) = v74;
          CloseHandle(hObject);
        }
        *a9 = 28;
        goto LABEL_47;
      case 0x40000063u:
        goto LABEL_131;
      case 0x40000069u:
        if ( a4 != 64 )
          goto LABEL_62;
        updated = CWindowList::TransitionBitmap(a1, (const struct MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP *)a3, a7);
        goto LABEL_47;
      case 0x4000006Cu:
        if ( a4 == 28 )
        {
          CWindowList::UpdateAccentBlurRect(a1, (const struct MILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE *)a3);
        }
        else
        {
LABEL_131:
          if ( a4 == 76 )
          {
            v76 = &CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                                           *(_QWORD *)(a3 + 56));
            v37 = a8;
            updated = CMagnifierControl::OnMagnifierSyncApiMessage(MagnifierControlForDesktop, a2, a3, a5);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v76);
LABEL_48:
            if ( updated == -2147467263 )
              return 2147500033LL;
            goto LABEL_41;
          }
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x36Cu);
        return 0LL;
      default:
        return 2147500033LL;
    }
  }
  if ( a4 != 52 )
  {
LABEL_62:
    v37 = a8;
    goto LABEL_41;
  }
  v14 = *(_QWORD *)(a3 + 4);
  if ( !v14 || (unsigned int)DwmValidateWindow(v14, a6) )
  {
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v15 = *(_QWORD *)(a3 + 4);
    v16 = 0LL;
    v17 = -2;
    v69 = -2;
    v18 = 1;
    if ( !v15 )
      goto LABEL_37;
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                     + 8LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
            v15);
    v20 = (struct IDwmWindow *)v19;
    if ( !v19 )
      goto LABEL_37;
    v21 = (struct CWindowData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    if ( v21 )
    {
      v22 = 0;
    }
    else
    {
      v61 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 16LL))(
                             WPF::g_pProcessHeap,
                             1216LL);
      if ( !v61 || (v62 = CWindowData::CWindowData(v61), (v21 = v62) == 0LL) )
      {
        v22 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x603u);
        goto LABEL_159;
      }
      *((_QWORD *)v62 + 3) = v20;
      (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v20)(v20, v62);
      v63 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v20 + 24LL))(v20);
      v64 = v74;
      *((_QWORD *)v21 + 5) = v63;
      v65 = CWindowList::SyncWindowData(v64, v20, v21);
      v22 = v65;
      if ( v65 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v65, 0x607u);
LABEL_10:
        if ( v22 >= 0 )
        {
          if ( v16 )
          {
            v23 = *((_QWORD *)v16 + 46);
            if ( v23 )
            {
              v68 = 1;
              if ( (*(_BYTE *)(a3 + 24) & 1) == 0 )
              {
                v24 = *(_DWORD *)(a3 + 12);
                if ( v24 != 513 && v24 != 161 )
                  v68 = 0;
              }
              v25 = 0LL;
              v26 = *(_DWORD *)(a3 + 40);
              v27 = *(_QWORD *)(a3 + 16) - *(_DWORD *)(v23 + 104);
              v70 = *(struct tagPOINT *)(a3 + 16);
              v28 = v70.y - *(_DWORD *)(v23 + 108);
              v29 = (*(_BYTE *)(v23 + 84) & 2) == 0;
              v73 = 0LL;
              v70.x = v27;
              v70.y = v28;
              if ( !v29 )
              {
                CVisual::GetCurrentTransform((CVisual *)v23, (struct D2DMatrix *)v84);
                if ( !D2DMatrixInverse((struct D2DMatrix *)v84, v66, (const struct D2DMatrix *)v84) )
                {
                  v17 = 0;
                  v69 = 0;
                  goto LABEL_19;
                }
                v71 = (float)v27;
                v72 = (float)v28;
                D3DXVec2TransformCoord(
                  (struct D2DVector2 *)&v71,
                  (const struct D2DVector2 *)&v71,
                  (const struct D2DMatrix *)v84);
                v70.y = (int)v72;
                v70.x = (int)v71;
              }
              CTopLevelWindow::DoHitTest((CTopLevelWindow *)v23, &v70, &v73, &v69);
              v17 = v69;
              v25 = v73;
LABEL_19:
              v30 = 4;
              if ( v26 <= 0x15 )
              {
                switch ( v26 )
                {
                  case 8u:
                    v30 = 1;
                    break;
                  case 9u:
                    v30 = 2;
                    break;
                  case 0x14u:
                    v30 = 3;
                    break;
                  case 0x15u:
                    v30 = 0;
                    break;
                }
              }
              v31 = *(CButton **)(v23 + 760);
              if ( v31 )
              {
                CButton::SetMouseCapture(v31, 0);
                v67 = *(CBaseObject **)(v23 + 760);
                if ( v67 )
                {
                  CBaseObject::Release(v67);
                  *(_QWORD *)(v23 + 760) = 0LL;
                }
              }
              if ( v30 != 4 )
              {
                v42 = *(volatile signed __int32 **)(v23 + 8LL * v30 + 504);
                if ( v42 )
                {
                  *(_QWORD *)(v23 + 760) = v42;
                  _InterlockedIncrement(v42 + 2);
                  CButton::SetMouseCapture((CButton *)v42, 1);
                  v17 = v69;
                  v25 = v73;
                }
              }
              v32 = *(struct CVisual **)(v23 + 760);
              if ( v32 )
              {
                if ( v26 != v17 )
                  v32 = 0LL;
                CTopLevelWindow::ChangeMouseOver((CTopLevelWindow *)v23, v32);
              }
              else
              {
                if ( v25 == (struct CVisual *)v23 )
                {
                  v25 = 0LL;
                  v73 = 0LL;
                }
                v33 = *(CBaseObject **)(v23 + 752);
                if ( v25 != v33 )
                {
                  *(_QWORD *)(v23 + 752) = v25;
                  if ( v25 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)v25 + 2);
                    v17 = v69;
                  }
                  if ( v33 )
                    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v33 + 96LL))(v33);
                  v34 = *(_QWORD *)(v23 + 752);
                  if ( v34 )
                    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v34 + 88LL))(*(_QWORD *)(v23 + 752));
                  if ( v33 )
                    CBaseObject::Release(v33);
                }
              }
              v35 = *(CButton **)(v23 + 752);
              if ( v35 )
              {
                v36 = *(void (__fastcall **)(CButton *, char))(*(_QWORD *)v35 + 104LL);
                if ( v36 == CButton::OnMouseLeftButton )
                  CButton::OnMouseLeftButton(v35, v68);
                else
                  v36(v35, v68);
              }
            }
          }
LABEL_37:
          *(_DWORD *)(a3 + 44) = v17;
          if ( v17 == -2 )
            v18 = 0;
          *(_DWORD *)(a3 + 48) = v18;
          goto LABEL_40;
        }
LABEL_159:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x5E2u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x156Fu);
LABEL_40:
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        v37 = a8;
        updated = 0;
        *v77 = 52;
        goto LABEL_41;
      }
    }
    v16 = v21;
    goto LABEL_10;
  }
LABEL_167:
  updated = -2147024891;
LABEL_98:
  v37 = a8;
LABEL_41:
  if ( v37 )
    *v37 = updated;
  return 0LL;
}
