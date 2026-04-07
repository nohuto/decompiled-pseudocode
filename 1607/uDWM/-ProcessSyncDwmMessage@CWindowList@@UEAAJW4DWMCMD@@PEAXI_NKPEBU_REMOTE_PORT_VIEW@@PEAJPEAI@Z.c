/*
 * XREFs of ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F670
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180001680 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180005E54 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180006058 (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x1800060E8 (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x180006300 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x18000638C (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x180006414 (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180006D2C (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180006E5C (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x1800071D8 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?OnMouseLeftButton@CButton@@UEAAX_N@Z @ 0x180007220 (-OnMouseLeftButton@CButton@@UEAAX_N@Z.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x180009690 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18001A154 (--0CWindowData@@QEAA@XZ.c)
 *     ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x180025514 (-ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x1800255B0 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180030820 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z @ 0x180030988 (-GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETER.c)
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180030E98 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x180031128 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x1800311F8 (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180031270 (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032660 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003BDB0 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003BF6C (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x18003BFCC (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x18003C020 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18007C330 (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x180080BF4 (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x180080CD4 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x1800811D8 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x1800813B0 (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x1800816E8 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x180081814 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 *     ?SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR@@@Z @ 0x180081E0C (-SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICD.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180081EAC (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180081FE4 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180082470 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x180086784 (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180086864 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x18009A908 (-OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18009B460 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
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
  const struct _REMOTE_PORT_VIEW *v10; // rdx
  int WindowThumbnailSourceSize; // esi
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rbx
  unsigned int v18; // r12d
  int v19; // eax
  __int64 v20; // rax
  struct IDwmWindow *v21; // rsi
  _QWORD *v22; // rax
  int v23; // esi
  __int64 v24; // rbx
  int v25; // eax
  struct CVisual *v26; // rsi
  LONG v27; // r13d
  LONG v28; // r12d
  bool v29; // zf
  unsigned int v30; // eax
  int v31; // r13d
  CButton *v32; // rcx
  struct CVisual *v33; // rdx
  CBaseObject *v34; // r13
  __int64 v35; // rcx
  CButton *v36; // rcx
  void (__fastcall *v37)(CButton *, char); // rax
  unsigned int v39; // ebx
  int WindowAttribute; // eax
  __int64 v41; // rcx
  volatile signed __int32 *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  unsigned int v49; // r8d
  CAnimationClockCoordinator *v50; // rcx
  unsigned int v51; // r8d
  CAnimationClockCoordinator *v52; // rcx
  CAnimationClockCoordinator *v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // r9
  unsigned int v57; // r8d
  CAnimationClockCoordinator *v58; // rcx
  struct _GUID v59; // xmm0
  CAnimationClockCoordinator *v60; // rcx
  int v61; // eax
  CWindowData *v62; // rax
  CWindowData *v63; // rax
  __int64 v64; // rax
  struct CWindowData *v65; // r8
  int v66; // eax
  float *v67; // rdx
  CBaseObject *v68; // rcx
  unsigned __int8 v69; // [rsp+40h] [rbp-C0h]
  unsigned int v70; // [rsp+44h] [rbp-BCh]
  unsigned int v71; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE hObject; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v73; // [rsp+58h] [rbp-A8h] BYREF
  float v74; // [rsp+60h] [rbp-A0h] BYREF
  float v75; // [rsp+64h] [rbp-9Ch]
  struct CVisual *v76; // [rsp+68h] [rbp-98h] BYREF
  struct _RTL_CRITICAL_SECTION *v77; // [rsp+70h] [rbp-90h] BYREF
  __int64 v78; // [rsp+78h] [rbp-88h] BYREF
  struct _GUID v79; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v80; // [rsp+90h] [rbp-70h] BYREF
  struct _GUID v81; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v82; // [rsp+B0h] [rbp-50h] BYREF
  struct _GUID v83; // [rsp+C0h] [rbp-40h] BYREF
  struct _GUID v84; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v85[64]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = a7;
  hObject = a7;
  *a9 = 0;
  WindowThumbnailSourceSize = -2147024872;
  if ( a2 == 1073741849 )
  {
    if ( a4 == 52 )
    {
      v15 = *(_QWORD *)(a3 + 4);
      if ( v15 && !(unsigned int)DwmValidateWindow(v15, a6) )
      {
LABEL_171:
        WindowThumbnailSourceSize = -2147024891;
        goto LABEL_42;
      }
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v16 = *(_QWORD *)(a3 + 4);
      v17 = 0LL;
      v18 = -2;
      v71 = -2;
      v19 = 1;
      if ( !v16 )
        goto LABEL_38;
      v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 6) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6));
      v21 = (struct IDwmWindow *)v20;
      if ( !v20 )
        goto LABEL_37;
      v22 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      if ( v22 )
      {
        v23 = 0;
      }
      else
      {
        v62 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                               WPF::g_pProcessHeap,
                               1232LL);
        if ( !v62 || (v63 = CWindowData::CWindowData(v62), (hObject = v63) == 0LL) )
        {
          v23 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x56Au);
          goto LABEL_162;
        }
        *((_QWORD *)v63 + 3) = v21;
        (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v21)(v21, v63);
        v64 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v21 + 24LL))(v21);
        v65 = (struct CWindowData *)hObject;
        *((_QWORD *)hObject + 5) = v64;
        v66 = CWindowList::SyncWindowData(a1, v21, v65);
        v23 = v66;
        if ( v66 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x56Eu);
LABEL_10:
          if ( v23 >= 0 )
          {
            if ( v17 )
            {
              v24 = v17[48];
              if ( v24 )
              {
                v69 = 1;
                if ( (*(_BYTE *)(a3 + 24) & 1) == 0 )
                {
                  v25 = *(_DWORD *)(a3 + 12);
                  if ( v25 != 513 && v25 != 161 )
                    v69 = 0;
                }
                v26 = 0LL;
                v70 = *(_DWORD *)(a3 + 40);
                v73 = *(struct tagPOINT *)(a3 + 16);
                v27 = v73.y - *(_DWORD *)(v24 + 108);
                v28 = v73.x - *(_DWORD *)(v24 + 104);
                v29 = (*(_BYTE *)(v24 + 84) & 2) == 0;
                v76 = 0LL;
                v73.x = v28;
                v73.y = v27;
                if ( !v29 )
                {
                  CVisual::GetCurrentTransform((CVisual *)v24, (struct D2DMatrix *)v85);
                  if ( !D2DMatrixInverse((struct D2DMatrix *)v85, v67, (const struct D2DMatrix *)v85) )
                  {
                    v18 = 0;
                    v71 = 0;
                    goto LABEL_19;
                  }
                  v74 = (float)v28;
                  v75 = (float)v27;
                  D3DXVec2TransformCoord(
                    (struct D2DVector2 *)&v74,
                    (const struct D2DVector2 *)&v74,
                    (const struct D2DMatrix *)v85);
                  v73.y = (int)v75;
                  v73.x = (int)v74;
                }
                CTopLevelWindow::DoHitTest((CTopLevelWindow *)v24, &v73, &v76, &v71);
                v18 = v71;
                v26 = v76;
LABEL_19:
                v30 = v70;
                v31 = 4;
                if ( v70 <= 0x15 )
                {
                  switch ( v70 )
                  {
                    case 8u:
                      v31 = 1;
                      break;
                    case 9u:
                      v31 = 2;
                      break;
                    case 0x14u:
                      v31 = 3;
                      break;
                    case 0x15u:
                      v31 = 0;
                      break;
                  }
                }
                v32 = *(CButton **)(v24 + 760);
                if ( v32 )
                {
                  CButton::SetMouseCapture(v32, 0);
                  v68 = *(CBaseObject **)(v24 + 760);
                  if ( v68 )
                  {
                    CBaseObject::Release(v68);
                    *(_QWORD *)(v24 + 760) = 0LL;
                  }
                  v30 = v70;
                }
                if ( v31 != 4 )
                {
                  v42 = *(volatile signed __int32 **)(v24 + 8LL * v31 + 504);
                  if ( v42 )
                  {
                    *(_QWORD *)(v24 + 760) = v42;
                    _InterlockedIncrement(v42 + 2);
                    CButton::SetMouseCapture((CButton *)v42, 1);
                    v18 = v71;
                    v26 = v76;
                  }
                  v30 = v70;
                }
                v33 = *(struct CVisual **)(v24 + 760);
                if ( v33 )
                {
                  if ( v30 != v18 )
                    v33 = 0LL;
                  CTopLevelWindow::ChangeMouseOver((CTopLevelWindow *)v24, v33);
                }
                else
                {
                  if ( v26 == (struct CVisual *)v24 )
                  {
                    v26 = 0LL;
                    v76 = 0LL;
                  }
                  v34 = *(CBaseObject **)(v24 + 752);
                  if ( v26 != v34 )
                  {
                    *(_QWORD *)(v24 + 752) = v26;
                    if ( v26 )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)v26 + 2);
                      v18 = v71;
                    }
                    if ( v34 )
                      (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v34 + 96LL))(v34);
                    v35 = *(_QWORD *)(v24 + 752);
                    if ( v35 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 88LL))(v35);
                    if ( v34 )
                      CBaseObject::Release(v34);
                  }
                }
                v36 = *(CButton **)(v24 + 752);
                if ( v36 )
                {
                  v37 = *(void (__fastcall **)(CButton *, char))(*(_QWORD *)v36 + 104LL);
                  if ( v37 == CButton::OnMouseLeftButton )
                    CButton::OnMouseLeftButton(v36, v69);
                  else
                    v37(v36, v69);
                }
              }
            }
LABEL_37:
            v19 = 1;
LABEL_38:
            *(_DWORD *)(a3 + 44) = v18;
            if ( v18 == -2 )
              v19 = 0;
            *(_DWORD *)(a3 + 48) = v19;
            goto LABEL_41;
          }
LABEL_162:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x54Du);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x12A8u);
LABEL_41:
          LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
          *a9 = 52;
          WindowThumbnailSourceSize = 0;
          goto LABEL_42;
        }
        v22 = hObject;
      }
      v17 = v22;
      goto LABEL_10;
    }
  }
  else
  {
    if ( a2 == 1073741866 )
    {
      if ( !a5 )
        goto LABEL_42;
      if ( a4 <= 0x18 )
        goto LABEL_42;
      v39 = *(_DWORD *)(a3 + 20) + 24;
      if ( *(_DWORD *)(a3 + 20) >= 0xFFFFFFE8 || a4 < v39 || !*(_DWORD *)(a3 + 4) )
        goto LABEL_42;
      WindowAttribute = CWindowList::GetWindowAttribute(a1, (struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
      *a9 = v39;
LABEL_52:
      WindowThumbnailSourceSize = WindowAttribute;
    }
    else
    {
      switch ( a2 )
      {
        case 0x4000001Au:
          if ( a5 && a4 == 156 )
          {
            CWindowList::GetTitleBarInfo(a1, (struct MILCMD_DWM_REDIRECTION_GETTITLEBARINFO *)a3);
            *a9 = 156;
            WindowThumbnailSourceSize = 0;
          }
          goto LABEL_42;
        case 0x4000001Eu:
          if ( a4 != 36 )
            goto LABEL_42;
          v43 = *(_QWORD *)(a3 + 12);
          if ( v43 && !(unsigned int)DwmValidateWindow(v43, a6) )
            goto LABEL_171;
          WindowAttribute = CWindowList::RegisterThumbnail(
                              a1,
                              a6,
                              (struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *)a3);
          goto LABEL_52;
        case 0x4000001Fu:
          if ( a4 != 57 )
            goto LABEL_42;
          WindowAttribute = CWindowList::UpdateThumbnailProperties(
                              a1,
                              a6,
                              (struct MILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES *)a3);
          goto LABEL_52;
        case 0x40000020u:
          if ( a4 != 12 )
            goto LABEL_42;
          WindowAttribute = CWindowList::UnregisterThumbnail(
                              a1,
                              a6,
                              (const struct MILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL *)a3);
          goto LABEL_52;
        case 0x40000022u:
          if ( a4 != 20 )
            goto LABEL_42;
          WindowAttribute = CWindowList::QueryThumbnailSourceSize(
                              a1,
                              a6,
                              (struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE *)a3);
          *a9 = 20;
          goto LABEL_52;
        case 0x40000023u:
          if ( a4 != 24 )
            goto LABEL_42;
          v41 = *(_QWORD *)(a3 + 4);
          if ( v41 && !(unsigned int)DwmValidateWindow(v41, a6) )
            WindowThumbnailSourceSize = -2147024891;
          else
            WindowThumbnailSourceSize = CWindowList::QueryWindowThumbnailSourceSize(
                                          a1,
                                          (struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *)a3);
          *a9 = 24;
          break;
        case 0x40000028u:
          if ( a4 != 32 )
            goto LABEL_42;
          WindowAttribute = CWindowList::SetColorizationParameters(
                              a1,
                              (const struct MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS *)a3);
          goto LABEL_52;
        case 0x40000029u:
          if ( a4 == 32 )
          {
            CWindowList::GetColorizationParameters(a1, (struct MILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS *)a3);
            *a9 = 32;
            WindowThumbnailSourceSize = 0;
          }
          goto LABEL_42;
        case 0x40000033u:
          if ( a4 != 20 )
            goto LABEL_42;
          WindowAttribute = CWindowList::GetGlobalState(a1, (struct MILCMD_DWM_REDIRECTION_GETGLOBALSTATE *)a3);
          *a9 = 20;
          goto LABEL_52;
        case 0x40000038u:
          if ( !CDesktopManager::IsLivePreviewAllowed() )
          {
            WindowThumbnailSourceSize = -2147024846;
            goto LABEL_42;
          }
          if ( a4 != 48 )
            goto LABEL_42;
          WindowAttribute = CWindowList::PostActivateLivePreview(
                              a1,
                              (const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *)a3);
          goto LABEL_52;
        case 0x40000039u:
          if ( a4 != 24 )
            goto LABEL_42;
          v45 = *(_QWORD *)(a3 + 4);
          if ( !v45 )
            goto LABEL_119;
          if ( !(unsigned int)DwmValidateWindow(v45, a6) )
            goto LABEL_171;
          v10 = (const struct _REMOTE_PORT_VIEW *)hObject;
LABEL_119:
          WindowAttribute = CWindowList::SetIconicThumbnail(
                              a1,
                              a6,
                              (const struct MILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL *)a3,
                              v10);
          goto LABEL_52;
        case 0x4000003Bu:
          if ( a4 != 16 )
            goto LABEL_42;
          WindowAttribute = CWindowList::QueryThumbnailType(
                              a1,
                              a6,
                              (struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE *)a3);
          *a9 = 16;
          goto LABEL_52;
        case 0x4000003Cu:
          if ( !CDesktopManager::IsLivePreviewAllowed() )
          {
            WindowThumbnailSourceSize = -2147024846;
            goto LABEL_42;
          }
          if ( a4 != 32 )
            goto LABEL_42;
          v46 = *(_QWORD *)(a3 + 4);
          if ( v46 && !(unsigned int)DwmValidateWindow(v46, a6) )
            goto LABEL_171;
          WindowAttribute = CWindowList::SetIconicLivePreviewBitmap(
                              a1,
                              a6,
                              (const struct MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP *)a3,
                              (const struct _REMOTE_PORT_VIEW *)hObject);
          goto LABEL_52;
        case 0x4000003Du:
          if ( a4 != 12 )
            goto LABEL_42;
          v47 = *(_QWORD *)(a3 + 4);
          if ( v47 && !(unsigned int)DwmValidateWindow(v47, a6) )
            goto LABEL_171;
          WindowAttribute = CWindowList::InvalidateIconicBitmaps(
                              a1,
                              a6,
                              (const struct MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS *)a3);
          goto LABEL_52;
        case 0x40000040u:
          if ( a4 != 32 )
            goto LABEL_42;
          WindowAttribute = CContactManager::OnGesture(
                              *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 18),
                              (const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *)a3);
          goto LABEL_52;
        case 0x40000041u:
          if ( a4 != 16 )
            goto LABEL_42;
          WindowAttribute = CContactManager::OnFlick(
                              *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 18),
                              (const struct MILCMD_DWM_REDIRECTION_RENDERFLICK *)a3);
          goto LABEL_52;
        case 0x40000047u:
          if ( a4 != 48 )
            goto LABEL_42;
          WindowAttribute = CWindowList::StartTransition(a1, (struct MILCMD_DWM_REDIRECTION_STARTTRANSITION *)a3);
          *a9 = 48;
          goto LABEL_52;
        case 0x4000004Fu:
          if ( a4 != 8 )
            goto LABEL_42;
          WindowAttribute = CWindowList::HandleHardwareExpressionActivation(a1, *(_DWORD *)(a3 + 4));
          goto LABEL_52;
        case 0x40000052u:
          if ( a4 != 52 )
            goto LABEL_42;
          WindowAttribute = CWindowList::UpdateSharedVirtualDesktopVisual(
                              a1,
                              a6,
                              (const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *)a3,
                              a7);
          goto LABEL_52;
        case 0x40000055u:
          if ( a4 != 16 )
            goto LABEL_42;
          v44 = *(_QWORD *)(a3 + 4);
          if ( v44 && !(unsigned int)DwmValidateWindow(v44, a6) )
            goto LABEL_171;
          WindowAttribute = CWindowList::SetIconicBitmapBackgroundColor(
                              a1,
                              (const struct MILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR *)a3);
          goto LABEL_52;
        case 0x40000058u:
          if ( a4 != 24 )
            goto LABEL_42;
          v49 = *(_DWORD *)(a3 + 20);
          v50 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 19);
          v79 = *(struct _GUID *)(a3 + 4);
          WindowAttribute = CAnimationClockCoordinator::OnCreateAnimationClock(v50, &v79, v49);
          goto LABEL_52;
        case 0x40000059u:
          if ( a4 != 24 )
            goto LABEL_42;
          v51 = *(_DWORD *)(a3 + 20);
          v52 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 19);
          v80 = *(struct _GUID *)(a3 + 4);
          WindowAttribute = CAnimationClockCoordinator::OnBeginAnimationClock(v52, &v80, v51);
          goto LABEL_52;
        case 0x4000005Au:
          if ( a4 != 20 )
            goto LABEL_42;
          v53 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 19);
          v81 = *(struct _GUID *)(a3 + 4);
          WindowAttribute = CAnimationClockCoordinator::OnEndAnimationClock(v53, &v81);
          goto LABEL_52;
        case 0x4000005Bu:
          if ( a4 != 32 )
            goto LABEL_42;
          v54 = *(unsigned int *)(a3 + 20);
          v55 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 19);
          v82 = *(_OWORD *)(a3 + 4);
          WindowAttribute = CAnimationClockCoordinator::OnGetAnimationClockTime(v55, &v82, v54, a3 + 24);
          *a9 = 32;
          goto LABEL_52;
        case 0x4000005Cu:
          if ( a4 != 32 )
            goto LABEL_42;
          v56 = a3 + 24;
          v57 = *(_DWORD *)(a3 + 20);
          if ( !*(_QWORD *)(a3 + 24) )
            v56 = 0LL;
          v58 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 19);
          v83 = *(struct _GUID *)(a3 + 4);
          WindowAttribute = CAnimationClockCoordinator::OnSetAnimationClockTime(v58, &v83, v57, v56);
          goto LABEL_52;
        case 0x4000005Du:
          if ( a4 != 28 )
            goto LABEL_42;
          v59 = *(struct _GUID *)(a3 + 4);
          hObject = 0LL;
          v60 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 19);
          v84 = v59;
          WindowThumbnailSourceSize = CAnimationClockCoordinator::OnGetAnimationClockToken(v60, &v84, &hObject);
          if ( WindowThumbnailSourceSize >= 0 )
          {
            v61 = NtDCompositionDuplicateHandleToProcess(hObject, a6, &v78);
            WindowThumbnailSourceSize = v61 | 0x10000000;
            if ( v61 >= 0 )
              *(_QWORD *)(a3 + 20) = v78;
            CloseHandle(hObject);
          }
          *a9 = 28;
          break;
        case 0x40000063u:
          if ( a4 != 76 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x343u);
            return 0LL;
          }
          v77 = &CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                                         *(_QWORD *)(a3 + 56));
          WindowThumbnailSourceSize = CMagnifierControl::OnMagnifierSyncApiMessage(
                                        MagnifierControlForDesktop,
                                        a2,
                                        a3,
                                        a5);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v77);
          break;
        case 0x40000069u:
          if ( a4 != 64 )
            goto LABEL_42;
          WindowAttribute = CWindowList::TransitionBitmap(
                              a1,
                              (const struct MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP *)a3,
                              a7);
          goto LABEL_52;
        case 0x4000006Cu:
          if ( a4 != 28 )
            goto LABEL_42;
          WindowAttribute = CWindowList::UpdateAccentBlurRect(
                              a1,
                              (const struct MILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE *)a3);
          goto LABEL_52;
        default:
          return 2147500033LL;
      }
    }
    if ( WindowThumbnailSourceSize == -2147467263 )
      return 2147500033LL;
  }
LABEL_42:
  if ( a8 )
    *a8 = WindowThumbnailSourceSize;
  return 0LL;
}
