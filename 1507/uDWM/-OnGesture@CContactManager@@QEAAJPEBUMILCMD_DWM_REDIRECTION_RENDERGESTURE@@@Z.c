/*
 * XREFs of ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EDE8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800055B0 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800055F8 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180046DA4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047610 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047664 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x18007D198 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCIndirectTouchVisua.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x18007D3EC (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPenPressHoldVisual@.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPressTapVisual@@@Z @ 0x18007D524 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x18007D924 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTouchPressHoldVis.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x18007DDC4 (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18007DEBC (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x18007E080 (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ @ 0x18007E7FC (-IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800819F8 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x180081A70 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x180081B18 (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?_RemoveRemotePressHold@CContactManager@@AEAAXI@Z @ 0x180081D5C (-_RemoveRemotePressHold@CContactManager@@AEAAXI@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180081F14 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180088218 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x180088764 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008F7B4 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008F938 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009A718 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009A8C0 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009AA50 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CContactManager::OnGesture(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  int started; // esi
  signed int v7; // r15d
  __int64 v8; // rdx
  int v9; // ecx
  LONG v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  CContactManager *v14; // rcx
  CContactManager *v15; // rcx
  unsigned __int64 *v16; // rsi
  CContactManager *v17; // rcx
  int Touch; // eax
  unsigned __int64 *v19; // rsi
  CContactManager *v20; // rcx
  unsigned __int64 *v21; // rsi
  CContactManager *v22; // rcx
  CContactManager *v23; // rcx
  CContactManager *v24; // rcx
  CBaseObject *v25; // rcx
  int v26; // r9d
  unsigned __int64 *v27; // rsi
  CContactManager *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rsi
  unsigned __int64 *v36; // r14
  CContactManager *v37; // rcx
  unsigned __int64 *v38; // r14
  CContactManager *v39; // rcx
  unsigned __int64 *v40; // r14
  CContactManager *v41; // rcx
  unsigned __int64 *v42; // r14
  CContactManager *v43; // rcx
  unsigned __int64 *v44; // r14
  CContactManager *v45; // rcx
  CContactManager *v46; // rcx
  CBaseObject *v47; // r14
  struct tagRECT *v48; // r8
  CContactManager *v49; // rcx
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned int v52; // edx
  CBaseObject *v53; // rcx
  int v54; // eax
  CContactManager *v55; // rcx
  __int64 v56; // r14
  unsigned __int64 *v57; // rsi
  CContactManager *v58; // rcx
  __int64 v59; // rcx
  CContactManager *v60; // rcx
  __int64 v61; // r9
  __int64 v62; // rax
  CContactManager *v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdx
  bool v67; // zf
  __int64 v68; // rcx
  struct CVisual *v69; // rbx
  int v70; // esi
  _QWORD *v71; // r15
  __int64 v72; // r14
  CContactManager *v73; // rcx
  CContactManager *v74; // rcx
  int v75; // eax
  CContactManager *v76; // rcx
  CContactManager *v77; // rcx
  _QWORD *v78; // rcx
  __int64 v79; // rax
  unsigned int v80; // edx
  int v81; // eax
  __int64 v82; // rbx
  CContactManager *v83; // rcx
  CBaseObject *v84; // rcx
  __int64 v85; // r14
  unsigned __int64 *v86; // rsi
  CContactManager *v87; // rcx
  __int64 v88; // rcx
  CContactManager *v89; // rcx
  __int64 v90; // r9
  __int64 v91; // rax
  CContactManager *v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rdx
  __int64 v96; // rcx
  struct CVisual *v97; // rbx
  int v98; // esi
  _QWORD *v99; // r15
  __int64 v100; // r14
  CContactManager *v101; // rcx
  CContactManager *v102; // rcx
  unsigned int v104; // [rsp+20h] [rbp-59h]
  unsigned __int64 v105; // [rsp+40h] [rbp-39h] BYREF
  struct CVisual *v106[2]; // [rsp+48h] [rbp-31h] BYREF
  struct CVisual *v107; // [rsp+58h] [rbp-21h] BYREF
  CBaseObject *v108; // [rsp+60h] [rbp-19h] BYREF
  struct CVisual *v109; // [rsp+68h] [rbp-11h] BYREF
  CBaseObject *v110; // [rsp+70h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v111; // [rsp+78h] [rbp-1h] BYREF
  struct tagRECT v112; // [rsp+80h] [rbp+7h] BYREF

  v111 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = -1;
  v5 = 0;
  started = 0;
  v7 = -1;
  if ( *((_DWORD *)this + 20) )
  {
    while ( *(_DWORD *)(112LL * v5 + *((_QWORD *)this + 7)) != *((_DWORD *)a2 + 2) )
    {
      if ( ++v5 >= *((_DWORD *)this + 20) )
        goto LABEL_6;
    }
    v7 = v5;
  }
LABEL_6:
  v8 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    while ( *(_DWORD *)(*((_QWORD *)this + 11) + 40 * v8) != *((_DWORD *)a2 + 2) )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)this + 28) )
        goto LABEL_11;
    }
    v4 = v8;
  }
LABEL_11:
  v9 = *((_DWORD *)a2 + 4);
  v112.top = v9 - 25;
  v10 = v9 + 25;
  v11 = *((_DWORD *)a2 + 3);
  v112.bottom = v10;
  v112.left = v11 - 25;
  v112.right = v11 + 25;
  GetDesktopID(1LL, &v105);
  v12 = *((_DWORD *)a2 + 1);
  if ( v12 > 5 )
  {
    v31 = v12 - 6;
    if ( !v31 )
    {
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 2, (_DWORD *)a2 + 3, 75.0);
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 1, (_DWORD *)a2 + 3, 75.0);
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        3LL,
        (char *)a2 + 12,
        &v112,
        v105,
        0);
      goto LABEL_191;
    }
    v32 = v31 - 1;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          if ( v34 != 1 )
            goto LABEL_55;
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 2));
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 5));
          if ( v7 >= 0 )
          {
            _mm_lfence();
            v35 = 112LL * (unsigned int)v7;
            v36 = *(unsigned __int64 **)(v35 + *((_QWORD *)this + 7) + 48);
            if ( v36 )
            {
              (*(void (__fastcall **)(unsigned __int64 *))(*v36 + 184))(v36);
              CContactManager::RemoveFromTouchNode(v37, v36[34], (struct CVisual *)v36);
              CBaseObject::Release((CBaseObject *)v36);
            }
            v38 = *(unsigned __int64 **)(v35 + *((_QWORD *)this + 7) + 56);
            if ( v38 )
            {
              (*(void (__fastcall **)(unsigned __int64 *))(*v38 + 184))(v38);
              CContactManager::RemoveFromTouchNode(v39, v38[34], (struct CVisual *)v38);
              CBaseObject::Release((CBaseObject *)v38);
            }
            v40 = *(unsigned __int64 **)(v35 + *((_QWORD *)this + 7) + 88);
            if ( v40 )
            {
              (*(void (__fastcall **)(unsigned __int64 *))(*v40 + 184))(v40);
              CContactManager::RemoveFromTouchNode(v41, v40[34], (struct CVisual *)v40);
              CBaseObject::Release((CBaseObject *)v40);
            }
            v42 = *(unsigned __int64 **)(v35 + *((_QWORD *)this + 7) + 96);
            if ( v42 )
            {
              (*(void (__fastcall **)(unsigned __int64 *))(*v42 + 184))(v42);
              CContactManager::RemoveFromTouchNode(v43, v42[34], (struct CVisual *)v42);
              CBaseObject::Release((CBaseObject *)v42);
            }
            v44 = *(unsigned __int64 **)(v35 + *((_QWORD *)this + 7) + 64);
            if ( v44 )
            {
              (*(void (__fastcall **)(unsigned __int64 *))(*v44 + 184))(v44);
              CContactManager::RemoveFromTouchNode(v45, v44[34], (struct CVisual *)v44);
              CBaseObject::Release((CBaseObject *)v44);
            }
            *(_QWORD *)(v35 + *((_QWORD *)this + 7) + 48) = 0LL;
            *(_QWORD *)(v35 + *((_QWORD *)this + 7) + 56) = 0LL;
            *(_QWORD *)(v35 + *((_QWORD *)this + 7) + 88) = 0LL;
            *(_QWORD *)(v35 + *((_QWORD *)this + 7) + 96) = 0LL;
            *(_QWORD *)(v35 + *((_QWORD *)this + 7) + 64) = 0LL;
            *(_BYTE *)(v35 + *((_QWORD *)this + 7) + 104) = 0;
          }
          Touch = CreateTouchVisual<CPressTapVisual>(
                    *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v105,
                    &v108);
          started = Touch;
          if ( Touch < 0 )
          {
            v104 = 755;
            goto LABEL_41;
          }
          v47 = v108;
          CContactManager::AddToTouchNode(v46, v105, v108);
          if ( v7 < 0 )
            v48 = &v112;
          else
            v48 = (struct tagRECT *)(112LL * (unsigned int)v7 + *((_QWORD *)this + 7) + 24LL);
          started = CPressTapVisual::Start(
                      v47,
                      (const struct tagPOINT *)((char *)a2 + 12),
                      v48,
                      (const struct tagPOINT *)a2 + 3);
          if ( started < 0 )
          {
            CContactManager::RemoveFromTouchNode(v49, v105, v47);
            if ( v47 )
              CBaseObject::Release(v47);
            v104 = 771;
            goto LABEL_35;
          }
          if ( v7 >= 0 )
          {
            v50 = 112LL * (unsigned int)v7;
            *(_QWORD *)(v50 + *((_QWORD *)this + 7) + 96) = v47;
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v50 + *((_QWORD *)this + 7) + 96) + 8LL));
LABEL_84:
            v47 = v108;
LABEL_85:
            if ( !v47 )
              goto LABEL_191;
            v53 = v47;
            goto LABEL_87;
          }
          v110 = v47;
          v51 = *((_DWORD *)this + 44);
          v52 = v51 + 1;
          if ( v51 + 1 < v51 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_90:
            if ( !v47 )
              goto LABEL_191;
            (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v47 + 184LL))(v47);
            CContactManager::RemoveFromTouchNode(v55, *((_QWORD *)v47 + 34), v47);
            goto LABEL_85;
          }
          if ( v52 > *((_DWORD *)this + 43) )
          {
            v54 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v110);
            if ( v54 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v54, 0xC0u);
              goto LABEL_90;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * *((unsigned int *)this + 44)) = v110;
            *((_DWORD *)this + 44) = v52;
          }
          _InterlockedIncrement((volatile signed __int32 *)v47 + 2);
          goto LABEL_84;
        }
        if ( CDesktopManager::IsCurrentSessionRemotable() )
        {
          CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
        }
        else if ( v7 >= 0 )
        {
          v56 = 112LL * (unsigned int)v7;
          if ( *(_QWORD *)(v56 + *((_QWORD *)this + 7) + 64) )
          {
            _mm_lfence();
            v57 = *(unsigned __int64 **)(v56 + *((_QWORD *)this + 7) + 64);
            if ( v57 )
            {
              (*(void (__fastcall **)(unsigned __int64 *))(*v57 + 184))(v57);
              CContactManager::RemoveFromTouchNode(v58, v57[34], (struct CVisual *)v57);
              CBaseObject::Release((CBaseObject *)v57);
            }
            *(_QWORD *)(v56 + *((_QWORD *)this + 7) + 64) = 0LL;
            v59 = *((_QWORD *)this + 7);
            if ( !*(_QWORD *)(v59 + v56 + 96) )
            {
              if ( *(_BYTE *)(v59 + v56 + 105) )
              {
                if ( *((_BYTE *)this + 324) || *(_DWORD *)(v59 + v56 + 40) )
                {
                  if ( !*(_QWORD *)(v59 + v56 + 48) )
                  {
                    Touch = CreateTouchVisual<CDirectTouchVisual>(
                              *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                              v105,
                              (CTouchVisual **)(v56 + v59 + 48));
                    started = Touch;
                    if ( Touch < 0 )
                    {
                      v104 = 674;
                      goto LABEL_41;
                    }
                    CContactManager::AddToTouchNode(v60, v105, *(struct CVisual **)(v56 + *((_QWORD *)this + 7) + 48));
                  }
                  if ( *((_BYTE *)this + 324) )
                    v61 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
                  else
                    v61 = *(unsigned int *)(v56 + *((_QWORD *)this + 7) + 40);
                  CDirectTouchVisual::StartDown(
                    *(_QWORD *)(v56 + *((_QWORD *)this + 7) + 48),
                    (char *)a2 + 12,
                    &v112,
                    v61);
                }
              }
              else
              {
                if ( !*(_QWORD *)(v59 + v56 + 56) )
                {
                  Touch = CreateTouchVisual<CIndirectTouchVisual>(
                            *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                            v105,
                            (CTouchVisual **)(v56 + v59 + 56));
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v104 = 684;
                    goto LABEL_41;
                  }
                  v62 = *((_QWORD *)this + 7);
                  v63 = *(CContactManager **)(v56 + v62 + 56);
                  *((_DWORD *)v63 + 100) = *(_DWORD *)(v56 + v62);
                  CContactManager::AddToTouchNode(v63, v105, *(struct CVisual **)(v56 + *((_QWORD *)this + 7) + 56));
                }
                v64 = *((_QWORD *)this + 7);
                v65 = *(unsigned int *)(v56 + v64 + 40);
                v66 = v56 + v64 + 8;
                v67 = *(_DWORD *)(v56 + v64 + 4) == 0;
                v68 = *(_QWORD *)(v56 + v64 + 56);
                if ( v67 )
                  CIndirectTouchVisual::StartHover(v68, v66, v65);
                else
                  CIndirectTouchVisual::StartEngage(v68, v66, v65);
              }
            }
          }
        }
        v69 = 0LL;
        v70 = *((_DWORD *)this + 76) - 1;
        v109 = 0LL;
        if ( v70 < 0 )
          goto LABEL_123;
        v71 = (_QWORD *)((char *)this + 280);
        v72 = 16LL * v70;
        do
        {
          if ( *(_DWORD *)(*v71 + v72) == *((_DWORD *)a2 + 2) )
          {
            v69 = *(struct CVisual **)(*v71 + v72 + 8);
            DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v70);
          }
          v72 -= 16LL;
          --v70;
        }
        while ( v70 >= 0 );
        v109 = v69;
        if ( !v69 )
        {
LABEL_123:
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                    *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v105,
                    &v109);
          started = Touch;
          if ( Touch < 0 )
          {
            v104 = 714;
            goto LABEL_41;
          }
          v69 = v109;
          CContactManager::AddToTouchNode(v73, v105, v109);
        }
        started = CTouchPressHoldVisual::StartAbort(v69, (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_191;
        CContactManager::RemoveFromTouchNode(v74, v105, v69);
        if ( v69 )
          CBaseObject::Release(v69);
        v104 = 722;
      }
      else
      {
        if ( CDesktopManager::IsCurrentSessionRemotable() )
        {
          CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
          v75 = *((_DWORD *)a2 + 2);
          v106[1] = 0LL;
          LODWORD(v106[0]) = v75;
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                    *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v105,
                    &v106[1]);
          started = Touch;
          if ( Touch < 0 )
          {
            v104 = 616;
            goto LABEL_41;
          }
          CContactManager::AddToTouchNode(v76, v105, v106[1]);
          started = CTouchPressHoldVisual::StartHold(v106[1], (const struct tagPOINT *)((char *)a2 + 12));
          if ( started >= 0 )
          {
            v78 = (_QWORD *)((char *)this + 248);
            v79 = *((unsigned int *)this + 68);
            v80 = v79 + 1;
            if ( (int)v79 + 1 >= (unsigned int)v79 )
            {
              started = 0;
              if ( v80 <= *((_DWORD *)this + 67) )
              {
                *(_OWORD *)(*v78 + 16 * v79) = *(_OWORD *)v106;
                *((_DWORD *)this + 68) = v80;
                goto LABEL_191;
              }
              v81 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v78, 0x10u, 1, v106);
              started = v81;
              if ( v81 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v81, 0xC0u);
              if ( started >= 0 )
                goto LABEL_191;
            }
            else
            {
              started = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
            }
          }
          CContactManager::RemoveFromTouchNode(v77, v105, v106[1]);
          v53 = v106[1];
          if ( !v106[1] )
            goto LABEL_191;
LABEL_87:
          CBaseObject::Release(v53);
          goto LABEL_191;
        }
        if ( v7 < 0 )
          goto LABEL_55;
        v82 = 112LL * (unsigned int)v7;
        if ( *(_DWORD *)(v82 + *((_QWORD *)this + 7) + 4) != 1 )
          goto LABEL_55;
        Touch = CContactManager::EnsureTouchPressHoldForContact(this, v7, v105);
        started = Touch;
        if ( Touch < 0 )
        {
          v104 = 640;
          goto LABEL_41;
        }
        started = CTouchPressHoldVisual::StartHold(
                    *(CTouchPressHoldVisual **)(*((_QWORD *)this + 7) + v82 + 64),
                    (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_191;
        CContactManager::RemoveFromTouchNode(v83, v105, *(struct CVisual **)(v82 + *((_QWORD *)this + 7) + 64));
        v84 = *(CBaseObject **)(v82 + *((_QWORD *)this + 7) + 64);
        if ( v84 )
        {
          CBaseObject::Release(v84);
          *(_QWORD *)(v82 + *((_QWORD *)this + 7) + 64) = 0LL;
        }
        v104 = 646;
      }
    }
    else
    {
      if ( CDesktopManager::IsCurrentSessionRemotable() )
      {
        CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
      }
      else if ( v7 >= 0 )
      {
        v85 = 112LL * (unsigned int)v7;
        if ( *(_QWORD *)(v85 + *((_QWORD *)this + 7) + 64) )
        {
          _mm_lfence();
          v86 = *(unsigned __int64 **)(v85 + *((_QWORD *)this + 7) + 64);
          if ( v86 )
          {
            (*(void (__fastcall **)(unsigned __int64 *))(*v86 + 184))(v86);
            CContactManager::RemoveFromTouchNode(v87, v86[34], (struct CVisual *)v86);
            CBaseObject::Release((CBaseObject *)v86);
          }
          *(_QWORD *)(v85 + *((_QWORD *)this + 7) + 64) = 0LL;
          v88 = *((_QWORD *)this + 7);
          if ( !*(_QWORD *)(v88 + v85 + 96) )
          {
            if ( *(_BYTE *)(v88 + v85 + 105) )
            {
              if ( *((_BYTE *)this + 324) || *(_DWORD *)(v88 + v85 + 40) )
              {
                if ( !*(_QWORD *)(v88 + v85 + 48) )
                {
                  Touch = CreateTouchVisual<CDirectTouchVisual>(
                            *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                            v105,
                            (CTouchVisual **)(v85 + v88 + 48));
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v104 = 551;
                    goto LABEL_41;
                  }
                  CContactManager::AddToTouchNode(v89, v105, *(struct CVisual **)(v85 + *((_QWORD *)this + 7) + 48));
                }
                if ( *((_BYTE *)this + 324) )
                  v90 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
                else
                  v90 = *(unsigned int *)(v85 + *((_QWORD *)this + 7) + 40);
                CDirectTouchVisual::StartDown(
                  *(_QWORD *)(v85 + *((_QWORD *)this + 7) + 48),
                  (char *)a2 + 12,
                  &v112,
                  v90);
              }
            }
            else
            {
              if ( !*(_QWORD *)(v88 + v85 + 56) )
              {
                Touch = CreateTouchVisual<CIndirectTouchVisual>(
                          *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                          v105,
                          (CTouchVisual **)(v85 + v88 + 56));
                started = Touch;
                if ( Touch < 0 )
                {
                  v104 = 561;
                  goto LABEL_41;
                }
                v91 = *((_QWORD *)this + 7);
                v92 = *(CContactManager **)(v85 + v91 + 56);
                *((_DWORD *)v92 + 100) = *(_DWORD *)(v85 + v91);
                CContactManager::AddToTouchNode(v92, v105, *(struct CVisual **)(v85 + *((_QWORD *)this + 7) + 56));
              }
              v93 = *((_QWORD *)this + 7);
              v94 = *(unsigned int *)(v85 + v93 + 40);
              v95 = v85 + v93 + 8;
              v67 = *(_DWORD *)(v85 + v93 + 4) == 0;
              v96 = *(_QWORD *)(v85 + v93 + 56);
              if ( v67 )
                CIndirectTouchVisual::StartHover(v96, v95, v94);
              else
                CIndirectTouchVisual::StartEngage(v96, v95, v94);
            }
          }
        }
      }
      v97 = 0LL;
      v98 = *((_DWORD *)this + 76) - 1;
      v107 = 0LL;
      if ( v98 < 0 )
        goto LABEL_182;
      v99 = (_QWORD *)((char *)this + 280);
      v100 = 16LL * v98;
      do
      {
        if ( *(_DWORD *)(*v99 + v100) == *((_DWORD *)a2 + 2) )
        {
          v97 = *(struct CVisual **)(*v99 + v100 + 8);
          DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v98);
        }
        v100 -= 16LL;
        --v98;
      }
      while ( v98 >= 0 );
      v107 = v97;
      if ( !v97 )
      {
LABEL_182:
        Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                  *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v105,
                  &v107);
        started = Touch;
        if ( Touch < 0 )
        {
          v104 = 591;
          goto LABEL_41;
        }
        v97 = v107;
        CContactManager::AddToTouchNode(v101, v105, v107);
      }
      started = CTouchPressHoldVisual::StartRightTap(v97, (const struct tagPOINT *)((char *)a2 + 12));
      if ( started >= 0 )
        goto LABEL_191;
      CContactManager::RemoveFromTouchNode(v102, v105, v97);
      if ( v97 )
        CBaseObject::Release(v97);
      v104 = 599;
    }
LABEL_35:
    v26 = started;
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, v104);
    goto LABEL_191;
  }
  if ( v12 == 5 )
  {
    if ( (v7 < 0 || *(_BYTE *)(112LL * (unsigned int)v7 + *((_QWORD *)this + 7) + 105))
      && (int)CContactManager::FindStationaryAnimation((__int64)this, *((_DWORD *)a2 + 2), 1) < 0 )
    {
      CContactManager::StartStationaryAnimationWithDelay(v30, v29, 2LL, (char *)a2 + 12, &v112, v105, 0);
    }
    goto LABEL_191;
  }
  if ( !v12 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      this,
      *((unsigned int *)a2 + 2),
      4LL,
      (char *)a2 + 12,
      0LL,
      v105,
      0);
    goto LABEL_191;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      this,
      *((unsigned int *)a2 + 2),
      5LL,
      (char *)a2 + 12,
      0LL,
      v105,
      0);
    goto LABEL_191;
  }
  v14 = (CContactManager *)(unsigned int)(v13 - 1);
  if ( !(_DWORD)v14 )
  {
    if ( (v4 & 0x80000000) != 0 )
      goto LABEL_43;
    _mm_lfence();
    v27 = *(unsigned __int64 **)(*((_QWORD *)this + 11) + 40LL * v4 + 16);
    if ( v27 )
    {
      (*(void (__fastcall **)(unsigned __int64 *))(*v27 + 184))(v27);
      CContactManager::RemoveFromTouchNode(v28, v27[34], (struct CVisual *)v27);
      CBaseObject::Release((CBaseObject *)v27);
    }
    *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v4 + 16) = 0LL;
    Touch = CContactManager::StartPenBarrelVisual(v14, (struct CPenContact *)(*((_QWORD *)this + 11) + 40LL * v4), v105);
    started = Touch;
    if ( Touch >= 0 )
    {
LABEL_43:
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        6LL,
        (char *)a2 + 12,
        0LL,
        v105,
        0);
      goto LABEL_191;
    }
    v104 = 461;
    goto LABEL_41;
  }
  v15 = (CContactManager *)(unsigned int)((_DWORD)v14 - 1);
  if ( (_DWORD)v15 )
  {
    if ( (_DWORD)v15 == 1 )
    {
      if ( (v4 & 0x80000000) == 0 )
      {
        _mm_lfence();
        v16 = *(unsigned __int64 **)(*((_QWORD *)this + 11) + 40LL * v4 + 16);
        if ( v16 )
        {
          (*(void (__fastcall **)(unsigned __int64 *))(*v16 + 184))(v16);
          CContactManager::RemoveFromTouchNode(v17, v16[34], (struct CVisual *)v16);
          CBaseObject::Release((CBaseObject *)v16);
        }
        *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v4 + 16) = 0LL;
        Touch = CContactManager::StartPenBarrelVisual(
                  v15,
                  (struct CPenContact *)(*((_QWORD *)this + 11) + 40LL * v4),
                  v105);
        started = Touch;
        if ( Touch < 0 )
        {
          v104 = 504;
LABEL_41:
          v26 = Touch;
          goto LABEL_42;
        }
      }
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        7LL,
        (char *)a2 + 12,
        0LL,
        v105,
        0);
      goto LABEL_191;
    }
LABEL_55:
    started = -2147024809;
    goto LABEL_191;
  }
  if ( (v4 & 0x80000000) != 0 )
    goto LABEL_55;
  v19 = *(unsigned __int64 **)(*((_QWORD *)this + 11) + 40LL * v4 + 8);
  if ( v19 )
  {
    (*(void (__fastcall **)(unsigned __int64 *))(*v19 + 184))(v19);
    CContactManager::RemoveFromTouchNode(v20, v19[34], (struct CVisual *)v19);
    CBaseObject::Release((CBaseObject *)v19);
  }
  *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v4 + 8) = 0LL;
  v21 = *(unsigned __int64 **)(*((_QWORD *)this + 11) + 40LL * v4 + 16);
  if ( v21 )
  {
    (*(void (__fastcall **)(_QWORD))(*v21 + 184))(*(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v4 + 16));
    CContactManager::RemoveFromTouchNode(v22, v21[34], (struct CVisual *)v21);
    CBaseObject::Release((CBaseObject *)v21);
  }
  *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v4 + 16) = 0LL;
  Touch = CreateTouchVisual<CPenPressHoldVisual>(
            *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
            v105,
            (CTouchVisual **)(*((_QWORD *)this + 11) + 16LL + 40LL * v4));
  started = Touch;
  if ( Touch < 0 )
  {
    v104 = 484;
    goto LABEL_41;
  }
  CContactManager::AddToTouchNode(v23, v105, *(struct CVisual **)(*((_QWORD *)this + 11) + 40LL * v4 + 16));
  started = CPenPressHoldVisual::Start(
              *(CPenPressHoldVisual **)(*((_QWORD *)this + 11) + 40LL * v4 + 16),
              (const struct tagPOINT *)((char *)a2 + 12));
  if ( started < 0 )
  {
    CContactManager::RemoveFromTouchNode(v24, v105, *(struct CVisual **)(*((_QWORD *)this + 11) + 40LL * v4 + 16));
    v25 = *(CBaseObject **)(*((_QWORD *)this + 11) + 40LL * v4 + 16);
    if ( v25 )
    {
      CBaseObject::Release(v25);
      *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v4 + 16) = 0LL;
    }
    v104 = 491;
    goto LABEL_35;
  }
LABEL_191:
  CContactManager::CleanupFinishedAnimations(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v111);
  return (unsigned int)started;
}
