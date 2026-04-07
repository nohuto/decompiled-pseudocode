/*
 * XREFs of ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180086864
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F670 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003A92C (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003A950 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180047F00 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800486FC (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180048750 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F338 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F6A0 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F800 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800704C4 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x18007056C (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800706E8 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18007086C (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x1800852A4 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x1800854D0 (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPenPressHoldVisual@@@.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPressTapVisual@@@Z @ 0x1800855F4 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x18008598C (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchPressHoldVisua.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180085E4C (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x180085E98 (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x180085F54 (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ @ 0x180086570 (-IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ.c)
 *     ?_RemoveRemotePressHold@CContactManager@@AEAAXI@Z @ 0x180087D60 (-_RemoveRemotePressHold@CContactManager@@AEAAXI@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18008B0C8 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x18008B604 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800975EC (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180098B08 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180098C90 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180098E00 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CContactManager::OnGesture(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *a2)
{
  unsigned int v4; // esi
  int started; // ebx
  signed int v6; // r14d
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  LONG v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  CContactManager *v14; // rcx
  CContactManager *v15; // rcx
  CContactManager *v16; // rcx
  int Touch; // eax
  __int64 v18; // rsi
  CContactManager *v19; // rcx
  CContactManager *v20; // rcx
  CContactManager *v21; // rcx
  CBaseObject *v22; // rcx
  int v23; // r9d
  CContactManager *v24; // rcx
  int v25; // edx
  __int64 v26; // rcx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  CContactManager *v31; // rcx
  __int64 v32; // rbx
  CContactManager *v33; // rcx
  CContactManager *v34; // rcx
  CContactManager *v35; // rcx
  CContactManager *v36; // rcx
  CContactManager *v37; // rcx
  volatile signed __int32 *v38; // rsi
  struct tagRECT *v39; // r8
  CContactManager *v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // eax
  unsigned int v43; // edx
  CContactManager *v44; // rcx
  CBaseObject *v45; // rcx
  int v46; // eax
  CContactManager *v47; // rcx
  __int64 v48; // rsi
  struct CTouchVisual *v49; // rdx
  __int64 v50; // rcx
  CContactManager *v51; // rcx
  int v52; // r9d
  __int64 v53; // rax
  CContactManager *v54; // rcx
  __int64 v55; // rcx
  bool v56; // zf
  __int64 v57; // rcx
  struct CVisual *v58; // rsi
  int v59; // ebx
  _QWORD *v60; // r13
  __int64 v61; // r14
  CContactManager *v62; // rcx
  CContactManager *v63; // rcx
  CContactManager *v64; // rcx
  CContactManager *v65; // rcx
  _QWORD *v66; // rcx
  __int64 v67; // rax
  unsigned int v68; // edx
  int v69; // eax
  __int64 v70; // rsi
  CContactManager *v71; // rcx
  CBaseObject *v72; // rcx
  CContactManager *v73; // rcx
  __int64 v74; // rsi
  struct CTouchVisual *v75; // rdx
  __int64 v76; // rcx
  CContactManager *v77; // rcx
  int v78; // r9d
  __int64 v79; // rax
  CContactManager *v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  struct CVisual *v83; // rsi
  int v84; // ebx
  _QWORD *v85; // r13
  __int64 v86; // r14
  CContactManager *v87; // rcx
  CContactManager *v88; // rcx
  unsigned int v90; // [rsp+20h] [rbp-59h]
  unsigned __int64 v91; // [rsp+40h] [rbp-39h] BYREF
  struct CVisual *v92[2]; // [rsp+48h] [rbp-31h] BYREF
  CBaseObject *v93; // [rsp+58h] [rbp-21h] BYREF
  struct CVisual *v94; // [rsp+60h] [rbp-19h] BYREF
  struct CVisual *v95; // [rsp+68h] [rbp-11h] BYREF
  volatile signed __int32 *v96; // [rsp+70h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v97; // [rsp+78h] [rbp-1h] BYREF
  struct tagRECT v98; // [rsp+80h] [rbp+7h] BYREF

  v97 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = -1;
  started = 0;
  v6 = -1;
  v7 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( *(_DWORD *)(112LL * v7 + *((_QWORD *)this + 7)) != *((_DWORD *)a2 + 2) )
    {
      if ( ++v7 >= *((_DWORD *)this + 20) )
        goto LABEL_6;
    }
    v6 = v7;
  }
LABEL_6:
  v8 = 0;
  if ( *((_DWORD *)this + 28) )
  {
    while ( *(_DWORD *)(*((_QWORD *)this + 11) + 40LL * v8) != *((_DWORD *)a2 + 2) )
    {
      if ( ++v8 >= *((_DWORD *)this + 28) )
        goto LABEL_11;
    }
    v4 = v8;
  }
LABEL_11:
  v9 = *((_DWORD *)a2 + 4);
  v98.top = v9 - 25;
  v10 = v9 + 25;
  v11 = *((_DWORD *)a2 + 3);
  v98.bottom = v10;
  v98.left = v11 - 25;
  v98.right = v11 + 25;
  GetDesktopID(1LL, &v91);
  v12 = *((_DWORD *)a2 + 1);
  if ( v12 > 5 )
  {
    v27 = v12 - 6;
    if ( !v27 )
    {
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 2, (_DWORD *)a2 + 3, 75.0);
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 1, (_DWORD *)a2 + 3, 75.0);
      CContactManager::StartStationaryAnimationWithDelay(
        (__int64)this,
        *((_DWORD *)a2 + 2),
        3u,
        (__int64 *)((char *)a2 + 12),
        (__int64)&v98,
        v91,
        0);
      goto LABEL_168;
    }
    v28 = v27 - 1;
    if ( v28 )
    {
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          if ( v30 != 1 )
            goto LABEL_47;
          CContactManager::CancelStationaryAnimation((__int64)this, *((_DWORD *)a2 + 2));
          CContactManager::CancelStationaryAnimation((__int64)this, *((_DWORD *)a2 + 5));
          if ( v6 >= 0 )
          {
            v32 = 112LL * (unsigned int)v6;
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v31,
              *(struct CTouchVisual **)(v32 + *((_QWORD *)this + 7) + 48));
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v33,
              *(struct CTouchVisual **)(v32 + *((_QWORD *)this + 7) + 56));
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v34,
              *(struct CTouchVisual **)(v32 + *((_QWORD *)this + 7) + 88));
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v35,
              *(struct CTouchVisual **)(v32 + *((_QWORD *)this + 7) + 96));
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v36,
              *(struct CTouchVisual **)(v32 + *((_QWORD *)this + 7) + 64));
            *(_QWORD *)(v32 + *((_QWORD *)this + 7) + 48) = 0LL;
            *(_QWORD *)(v32 + *((_QWORD *)this + 7) + 56) = 0LL;
            *(_QWORD *)(v32 + *((_QWORD *)this + 7) + 88) = 0LL;
            *(_QWORD *)(v32 + *((_QWORD *)this + 7) + 96) = 0LL;
            *(_QWORD *)(v32 + *((_QWORD *)this + 7) + 64) = 0LL;
            *(_BYTE *)(v32 + *((_QWORD *)this + 7) + 104) = 0;
          }
          Touch = CreateTouchVisual<CPressTapVisual>(
                    *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v91,
                    &v93);
          started = Touch;
          if ( Touch < 0 )
          {
            v90 = 755;
            goto LABEL_33;
          }
          v38 = (volatile signed __int32 *)v93;
          CContactManager::AddToTouchNode(v37, v91, v93);
          if ( v6 < 0 )
            v39 = &v98;
          else
            v39 = (struct tagRECT *)(112LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 24LL);
          started = CPressTapVisual::Start(
                      (CPressTapVisual *)v38,
                      (const struct tagPOINT *)((char *)a2 + 12),
                      v39,
                      (const struct tagPOINT *)a2 + 3);
          if ( started < 0 )
          {
            CContactManager::RemoveFromTouchNode(v40, v91, (struct CVisual *)v38);
            if ( v38 )
              CBaseObject::Release((CBaseObject *)v38);
            v90 = 771;
            goto LABEL_29;
          }
          if ( v6 >= 0 )
          {
            v41 = 112LL * (unsigned int)v6;
            *(_QWORD *)(v41 + *((_QWORD *)this + 7) + 96) = v38;
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v41 + *((_QWORD *)this + 7) + 96) + 8LL));
LABEL_66:
            v38 = (volatile signed __int32 *)v93;
LABEL_67:
            if ( !v38 )
              goto LABEL_168;
            v45 = (CBaseObject *)v38;
            goto LABEL_69;
          }
          v96 = v38;
          v42 = *((_DWORD *)this + 44);
          v43 = v42 + 1;
          if ( v42 + 1 < v42 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_72:
            CContactManager::StopAndRemoveFromRootNode(v44, (struct CTouchVisual *)v38);
            goto LABEL_67;
          }
          if ( v43 > *((_DWORD *)this + 43) )
          {
            v46 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v96);
            if ( v46 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v46, 0xC0u);
              goto LABEL_72;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * *((unsigned int *)this + 44)) = v96;
            *((_DWORD *)this + 44) = v43;
          }
          _InterlockedIncrement(v38 + 2);
          goto LABEL_66;
        }
        if ( CDesktopManager::IsCurrentSessionRemotable() )
        {
          CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
        }
        else if ( v6 >= 0 )
        {
          v48 = 112LL * (unsigned int)v6;
          v49 = *(struct CTouchVisual **)(v48 + *((_QWORD *)this + 7) + 64);
          if ( v49 )
          {
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v47, v49);
            *(_QWORD *)(v48 + *((_QWORD *)this + 7) + 64) = 0LL;
            v50 = *((_QWORD *)this + 7);
            if ( !*(_QWORD *)(v48 + v50 + 96) )
            {
              if ( *(_BYTE *)(v48 + v50 + 105) )
              {
                if ( *((_BYTE *)this + 324) || *(_DWORD *)(v48 + v50 + 40) )
                {
                  if ( !*(_QWORD *)(v48 + v50 + 48) )
                  {
                    Touch = CreateTouchVisual<CDirectTouchVisual>(
                              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                              v91,
                              (CDirectTouchVisual **)(v48 + v50 + 48));
                    started = Touch;
                    if ( Touch < 0 )
                    {
                      v90 = 674;
                      goto LABEL_33;
                    }
                    CContactManager::AddToTouchNode(v51, v91, *(struct CVisual **)(v48 + *((_QWORD *)this + 7) + 48));
                  }
                  if ( *((_BYTE *)this + 324) )
                    v52 = CContactManager::DWMSC_PRESENTATIONMODE;
                  else
                    v52 = *(_DWORD *)(v48 + *((_QWORD *)this + 7) + 40);
                  CDirectTouchVisual::StartDown(
                    *(_QWORD *)(v48 + *((_QWORD *)this + 7) + 48),
                    (const struct tagPOINT *)((char *)a2 + 12),
                    &v98,
                    v52);
                }
              }
              else
              {
                if ( !*(_QWORD *)(v48 + v50 + 56) )
                {
                  Touch = CreateTouchVisual<CIndirectTouchVisual>(
                            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                            v91,
                            (CTouchVisual **)(v48 + v50 + 56));
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v90 = 684;
                    goto LABEL_33;
                  }
                  v53 = *((_QWORD *)this + 7);
                  v54 = *(CContactManager **)(v48 + v53 + 56);
                  *((_DWORD *)v54 + 100) = *(_DWORD *)(v48 + v53);
                  CContactManager::AddToTouchNode(v54, v91, *(struct CVisual **)(v48 + *((_QWORD *)this + 7) + 56));
                }
                v55 = *((_QWORD *)this + 7);
                v56 = *(_DWORD *)(v48 + v55 + 4) == 0;
                v57 = *(_QWORD *)(v48 + v55 + 56);
                if ( v56 )
                  CIndirectTouchVisual::StartHover(v57);
                else
                  CIndirectTouchVisual::StartEngage(v57);
              }
            }
          }
        }
        v58 = 0LL;
        v59 = *((_DWORD *)this + 76) - 1;
        v94 = 0LL;
        if ( v59 < 0 )
          goto LABEL_102;
        v60 = (_QWORD *)((char *)this + 280);
        v61 = 16LL * v59;
        do
        {
          if ( *(_DWORD *)(v61 + *v60) == *((_DWORD *)a2 + 2) )
          {
            v58 = *(struct CVisual **)(v61 + *v60 + 8);
            DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280);
          }
          v61 -= 16LL;
          --v59;
        }
        while ( v59 >= 0 );
        v94 = v58;
        if ( !v58 )
        {
LABEL_102:
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                    *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v91,
                    &v94);
          started = Touch;
          if ( Touch < 0 )
          {
            v90 = 714;
            goto LABEL_33;
          }
          v58 = v94;
          CContactManager::AddToTouchNode(v62, v91, v94);
        }
        started = CTouchPressHoldVisual::StartAbort(v58, (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_168;
        CContactManager::RemoveFromTouchNode(v63, v91, v58);
        if ( v58 )
          CBaseObject::Release(v58);
        v90 = 722;
      }
      else
      {
        if ( CDesktopManager::IsCurrentSessionRemotable() )
        {
          CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
          LODWORD(v92[0]) = *((_DWORD *)a2 + 2);
          v92[1] = 0LL;
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                    *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v91,
                    &v92[1]);
          started = Touch;
          if ( Touch < 0 )
          {
            v90 = 616;
            goto LABEL_33;
          }
          CContactManager::AddToTouchNode(v64, v91, v92[1]);
          started = CTouchPressHoldVisual::StartHold(v92[1], (const struct tagPOINT *)((char *)a2 + 12));
          if ( started >= 0 )
          {
            v66 = (_QWORD *)((char *)this + 248);
            v67 = *((unsigned int *)this + 68);
            v68 = v67 + 1;
            if ( (int)v67 + 1 >= (unsigned int)v67 )
            {
              started = 0;
              if ( v68 <= *((_DWORD *)this + 67) )
              {
                *(_OWORD *)(*v66 + 16 * v67) = *(_OWORD *)v92;
                *((_DWORD *)this + 68) = v68;
                goto LABEL_168;
              }
              v69 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v66, 0x10u, 1, v92);
              started = v69;
              if ( v69 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v69, 0xC0u);
              if ( started >= 0 )
                goto LABEL_168;
            }
            else
            {
              started = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
            }
          }
          CContactManager::RemoveFromTouchNode(v65, v91, v92[1]);
          v45 = v92[1];
          if ( !v92[1] )
            goto LABEL_168;
LABEL_69:
          CBaseObject::Release(v45);
          goto LABEL_168;
        }
        if ( v6 < 0 )
          goto LABEL_47;
        v70 = 112LL * (unsigned int)v6;
        if ( *(_DWORD *)(v70 + *((_QWORD *)this + 7) + 4) != 1 )
          goto LABEL_47;
        Touch = CContactManager::EnsureTouchPressHoldForContact(this, v6, v91);
        started = Touch;
        if ( Touch < 0 )
        {
          v90 = 640;
          goto LABEL_33;
        }
        started = CTouchPressHoldVisual::StartHold(
                    *(CTouchPressHoldVisual **)(*((_QWORD *)this + 7) + v70 + 64),
                    (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_168;
        CContactManager::RemoveFromTouchNode(v71, v91, *(struct CVisual **)(v70 + *((_QWORD *)this + 7) + 64));
        v72 = *(CBaseObject **)(v70 + *((_QWORD *)this + 7) + 64);
        if ( v72 )
        {
          CBaseObject::Release(v72);
          *(_QWORD *)(v70 + *((_QWORD *)this + 7) + 64) = 0LL;
        }
        v90 = 646;
      }
    }
    else
    {
      if ( CDesktopManager::IsCurrentSessionRemotable() )
      {
        CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
      }
      else if ( v6 >= 0 )
      {
        v74 = 112LL * (unsigned int)v6;
        v75 = *(struct CTouchVisual **)(v74 + *((_QWORD *)this + 7) + 64);
        if ( v75 )
        {
          CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v73, v75);
          *(_QWORD *)(v74 + *((_QWORD *)this + 7) + 64) = 0LL;
          v76 = *((_QWORD *)this + 7);
          if ( !*(_QWORD *)(v74 + v76 + 96) )
          {
            if ( *(_BYTE *)(v74 + v76 + 105) )
            {
              if ( *((_BYTE *)this + 324) || *(_DWORD *)(v74 + v76 + 40) )
              {
                if ( !*(_QWORD *)(v74 + v76 + 48) )
                {
                  Touch = CreateTouchVisual<CDirectTouchVisual>(
                            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                            v91,
                            (CDirectTouchVisual **)(v74 + v76 + 48));
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v90 = 551;
                    goto LABEL_33;
                  }
                  CContactManager::AddToTouchNode(v77, v91, *(struct CVisual **)(v74 + *((_QWORD *)this + 7) + 48));
                }
                if ( *((_BYTE *)this + 324) )
                  v78 = CContactManager::DWMSC_PRESENTATIONMODE;
                else
                  v78 = *(_DWORD *)(v74 + *((_QWORD *)this + 7) + 40);
                CDirectTouchVisual::StartDown(
                  *(_QWORD *)(v74 + *((_QWORD *)this + 7) + 48),
                  (const struct tagPOINT *)((char *)a2 + 12),
                  &v98,
                  v78);
              }
            }
            else
            {
              if ( !*(_QWORD *)(v74 + v76 + 56) )
              {
                Touch = CreateTouchVisual<CIndirectTouchVisual>(
                          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                          v91,
                          (CTouchVisual **)(v74 + v76 + 56));
                started = Touch;
                if ( Touch < 0 )
                {
                  v90 = 561;
                  goto LABEL_33;
                }
                v79 = *((_QWORD *)this + 7);
                v80 = *(CContactManager **)(v74 + v79 + 56);
                *((_DWORD *)v80 + 100) = *(_DWORD *)(v74 + v79);
                CContactManager::AddToTouchNode(v80, v91, *(struct CVisual **)(v74 + *((_QWORD *)this + 7) + 56));
              }
              v81 = *((_QWORD *)this + 7);
              v56 = *(_DWORD *)(v74 + v81 + 4) == 0;
              v82 = *(_QWORD *)(v74 + v81 + 56);
              if ( v56 )
                CIndirectTouchVisual::StartHover(v82);
              else
                CIndirectTouchVisual::StartEngage(v82);
            }
          }
        }
      }
      v83 = 0LL;
      v84 = *((_DWORD *)this + 76) - 1;
      v95 = 0LL;
      if ( v84 < 0 )
        goto LABEL_159;
      v85 = (_QWORD *)((char *)this + 280);
      v86 = 16LL * v84;
      do
      {
        if ( *(_DWORD *)(v86 + *v85) == *((_DWORD *)a2 + 2) )
        {
          v83 = *(struct CVisual **)(v86 + *v85 + 8);
          DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280);
        }
        v86 -= 16LL;
        --v84;
      }
      while ( v84 >= 0 );
      v95 = v83;
      if ( !v83 )
      {
LABEL_159:
        Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                  *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v91,
                  &v95);
        started = Touch;
        if ( Touch < 0 )
        {
          v90 = 591;
          goto LABEL_33;
        }
        v83 = v95;
        CContactManager::AddToTouchNode(v87, v91, v95);
      }
      started = CTouchPressHoldVisual::StartRightTap(v83, (const struct tagPOINT *)((char *)a2 + 12));
      if ( started >= 0 )
        goto LABEL_168;
      CContactManager::RemoveFromTouchNode(v88, v91, v83);
      if ( v83 )
        CBaseObject::Release(v83);
      v90 = 599;
    }
LABEL_29:
    v23 = started;
LABEL_34:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, v90);
    goto LABEL_168;
  }
  if ( v12 == 5 )
  {
    if ( (v6 < 0 || *(_BYTE *)(112LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 105))
      && (int)CContactManager::FindStationaryAnimation((__int64)this, *((_DWORD *)a2 + 2), 1) < 0 )
    {
      CContactManager::StartStationaryAnimationWithDelay(
        v26,
        v25,
        2u,
        (__int64 *)((char *)a2 + 12),
        (__int64)&v98,
        v91,
        0);
    }
    goto LABEL_168;
  }
  if ( !v12 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      (__int64)this,
      *((_DWORD *)a2 + 2),
      4u,
      (__int64 *)((char *)a2 + 12),
      0LL,
      v91,
      0);
    goto LABEL_168;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      (__int64)this,
      *((_DWORD *)a2 + 2),
      5u,
      (__int64 *)((char *)a2 + 12),
      0LL,
      v91,
      0);
    goto LABEL_168;
  }
  v14 = (CContactManager *)(unsigned int)(v13 - 1);
  if ( !(_DWORD)v14 )
  {
    if ( (v4 & 0x80000000) != 0
      || (CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
            v14,
            *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 40LL * v4 + 16)),
          *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v4 + 16) = 0LL,
          Touch = CContactManager::StartPenBarrelVisual(
                    v24,
                    (struct CPenContact *)(*((_QWORD *)this + 11) + 40LL * v4),
                    v91),
          started = Touch,
          Touch >= 0) )
    {
      CContactManager::StartStationaryAnimationWithDelay(
        (__int64)this,
        *((_DWORD *)a2 + 2),
        6u,
        (__int64 *)((char *)a2 + 12),
        0LL,
        v91,
        0);
      goto LABEL_168;
    }
    v90 = 461;
    goto LABEL_33;
  }
  v15 = (CContactManager *)(unsigned int)((_DWORD)v14 - 1);
  if ( (_DWORD)v15 )
  {
    if ( (_DWORD)v15 == 1 )
    {
      if ( (v4 & 0x80000000) == 0 )
      {
        CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
          v15,
          *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 40LL * v4 + 16));
        *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v4 + 16) = 0LL;
        Touch = CContactManager::StartPenBarrelVisual(
                  v16,
                  (struct CPenContact *)(*((_QWORD *)this + 11) + 40LL * v4),
                  v91);
        started = Touch;
        if ( Touch < 0 )
        {
          v90 = 504;
LABEL_33:
          v23 = Touch;
          goto LABEL_34;
        }
      }
      CContactManager::StartStationaryAnimationWithDelay(
        (__int64)this,
        *((_DWORD *)a2 + 2),
        7u,
        (__int64 *)((char *)a2 + 12),
        0LL,
        v91,
        0);
      goto LABEL_168;
    }
LABEL_47:
    started = -2147024809;
    goto LABEL_168;
  }
  if ( (v4 & 0x80000000) != 0 )
    goto LABEL_47;
  v18 = 5LL * v4;
  CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
    v15,
    *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v18 + 8));
  *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v18 + 8) = 0LL;
  CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
    v19,
    *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v18 + 16));
  *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v18 + 16) = 0LL;
  Touch = CreateTouchVisual<CPenPressHoldVisual>(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            v91,
            (CTouchVisual **)(*((_QWORD *)this + 11) + 16LL + 8 * v18));
  started = Touch;
  if ( Touch < 0 )
  {
    v90 = 484;
    goto LABEL_33;
  }
  CContactManager::AddToTouchNode(v20, v91, *(struct CVisual **)(*((_QWORD *)this + 11) + 8 * v18 + 16));
  started = CPenPressHoldVisual::Start(
              *(CPenPressHoldVisual **)(*((_QWORD *)this + 11) + 8 * v18 + 16),
              (const struct tagPOINT *)((char *)a2 + 12));
  if ( started < 0 )
  {
    CContactManager::RemoveFromTouchNode(v21, v91, *(struct CVisual **)(*((_QWORD *)this + 11) + 8 * v18 + 16));
    v22 = *(CBaseObject **)(*((_QWORD *)this + 11) + 8 * v18 + 16);
    if ( v22 )
    {
      CBaseObject::Release(v22);
      *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v18 + 16) = 0LL;
    }
    v90 = 491;
    goto LABEL_29;
  }
LABEL_168:
  CContactManager::CleanupFinishedAnimations(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v97);
  return (unsigned int)started;
}
