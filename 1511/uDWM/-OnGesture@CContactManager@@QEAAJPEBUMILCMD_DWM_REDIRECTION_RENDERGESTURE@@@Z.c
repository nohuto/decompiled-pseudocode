/*
 * XREFs of ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800863AC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032890 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180013478 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800134C0 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180046CA4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047510 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047564 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F33C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F6C0 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F83C (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x180070734 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800707DC (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x180070A84 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18007749C (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x180084BC8 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCIndirectTouchVisua.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x180084E1C (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPenPressHoldVisual@.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPressTapVisual@@@Z @ 0x180084F54 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x180085354 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTouchPressHoldVis.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x1800857F4 (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x1800858EC (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ @ 0x180086060 (-IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ.c)
 *     ?_RemoveRemotePressHold@CContactManager@@AEAAXI@Z @ 0x180087C4C (-_RemoveRemotePressHold@CContactManager@@AEAAXI@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18008BE28 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x18008C374 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009BDE8 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009BF90 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009C120 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
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
  int v29; // edx
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
  int v61; // r9d
  __int64 v62; // rax
  CContactManager *v63; // rcx
  __int64 v64; // rcx
  bool v65; // zf
  __int64 v66; // rcx
  struct CVisual *v67; // rbx
  signed int v68; // esi
  _QWORD *v69; // r15
  __int64 v70; // r14
  CContactManager *v71; // rcx
  CContactManager *v72; // rcx
  int v73; // eax
  CContactManager *v74; // rcx
  CContactManager *v75; // rcx
  _QWORD *v76; // rcx
  __int64 v77; // rax
  unsigned int v78; // edx
  int v79; // eax
  __int64 v80; // rbx
  CContactManager *v81; // rcx
  CBaseObject *v82; // rcx
  __int64 v83; // r14
  unsigned __int64 *v84; // rsi
  CContactManager *v85; // rcx
  __int64 v86; // rcx
  CContactManager *v87; // rcx
  int v88; // r9d
  __int64 v89; // rax
  CContactManager *v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  struct CVisual *v93; // rbx
  signed int v94; // esi
  _QWORD *v95; // r15
  __int64 v96; // r14
  CContactManager *v97; // rcx
  CContactManager *v98; // rcx
  unsigned int v100; // [rsp+20h] [rbp-59h]
  unsigned __int64 v101; // [rsp+40h] [rbp-39h] BYREF
  struct CVisual *v102[2]; // [rsp+48h] [rbp-31h] BYREF
  struct CVisual *v103; // [rsp+58h] [rbp-21h] BYREF
  CBaseObject *v104; // [rsp+60h] [rbp-19h] BYREF
  struct CVisual *v105; // [rsp+68h] [rbp-11h] BYREF
  CBaseObject *v106; // [rsp+70h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v107; // [rsp+78h] [rbp-1h] BYREF
  struct tagRECT v108; // [rsp+80h] [rbp+7h] BYREF

  v107 = &CDesktopManager::s_csDwmInstance;
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
  v108.top = v9 - 25;
  v10 = v9 + 25;
  v11 = *((_DWORD *)a2 + 3);
  v108.bottom = v10;
  v108.left = v11 - 25;
  v108.right = v11 + 25;
  GetDesktopID(1LL, &v101);
  v12 = *((_DWORD *)a2 + 1);
  if ( v12 > 5 )
  {
    v31 = v12 - 6;
    if ( !v31 )
    {
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 2, (_DWORD *)a2 + 3, 75.0);
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 1, (_DWORD *)a2 + 3, 75.0);
      CContactManager::StartStationaryAnimationWithDelay(
        (__int64)this,
        *((_DWORD *)a2 + 2),
        3u,
        (__int64 *)((char *)a2 + 12),
        (__int64)&v108,
        v101,
        0);
      goto LABEL_187;
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
                    v101,
                    &v104);
          started = Touch;
          if ( Touch < 0 )
          {
            v100 = 755;
            goto LABEL_41;
          }
          v47 = v104;
          CContactManager::AddToTouchNode(v46, v101, v104);
          if ( v7 < 0 )
            v48 = &v108;
          else
            v48 = (struct tagRECT *)(112LL * (unsigned int)v7 + *((_QWORD *)this + 7) + 24LL);
          started = CPressTapVisual::Start(
                      v47,
                      (const struct tagPOINT *)((char *)a2 + 12),
                      v48,
                      (const struct tagPOINT *)a2 + 3);
          if ( started < 0 )
          {
            CContactManager::RemoveFromTouchNode(v49, v101, v47);
            if ( v47 )
              CBaseObject::Release(v47);
            v100 = 771;
            goto LABEL_35;
          }
          if ( v7 >= 0 )
          {
            v50 = 112LL * (unsigned int)v7;
            *(_QWORD *)(v50 + *((_QWORD *)this + 7) + 96) = v47;
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v50 + *((_QWORD *)this + 7) + 96) + 8LL));
LABEL_84:
            v47 = v104;
LABEL_85:
            if ( !v47 )
              goto LABEL_187;
            v53 = v47;
            goto LABEL_87;
          }
          v106 = v47;
          v51 = *((_DWORD *)this + 44);
          v52 = v51 + 1;
          if ( v51 + 1 < v51 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_90:
            if ( !v47 )
              goto LABEL_187;
            (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v47 + 184LL))(v47);
            CContactManager::RemoveFromTouchNode(v55, *((_QWORD *)v47 + 34), v47);
            goto LABEL_85;
          }
          if ( v52 > *((_DWORD *)this + 43) )
          {
            v54 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v106);
            if ( v54 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v54, 0xC0u);
              goto LABEL_90;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * *((unsigned int *)this + 44)) = v106;
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
          v57 = *(unsigned __int64 **)(v56 + *((_QWORD *)this + 7) + 64);
          if ( v57 )
          {
            (*(void (__fastcall **)(unsigned __int64 *))(*v57 + 184))(v57);
            CContactManager::RemoveFromTouchNode(v58, v57[34], (struct CVisual *)v57);
            CBaseObject::Release((CBaseObject *)v57);
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
                              v101,
                              (CDirectTouchVisual **)(v56 + v59 + 48));
                    started = Touch;
                    if ( Touch < 0 )
                    {
                      v100 = 674;
                      goto LABEL_41;
                    }
                    CContactManager::AddToTouchNode(v60, v101, *(struct CVisual **)(v56 + *((_QWORD *)this + 7) + 48));
                  }
                  if ( *((_BYTE *)this + 324) )
                    v61 = CContactManager::DWMSC_PRESENTATIONMODE;
                  else
                    v61 = *(_DWORD *)(v56 + *((_QWORD *)this + 7) + 40);
                  CDirectTouchVisual::StartDown(
                    *(_QWORD *)(v56 + *((_QWORD *)this + 7) + 48),
                    (const struct tagPOINT *)((char *)a2 + 12),
                    &v108,
                    v61);
                }
              }
              else
              {
                if ( !*(_QWORD *)(v59 + v56 + 56) )
                {
                  Touch = CreateTouchVisual<CIndirectTouchVisual>(
                            *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                            v101,
                            (CTouchVisual **)(v56 + v59 + 56));
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v100 = 684;
                    goto LABEL_41;
                  }
                  v62 = *((_QWORD *)this + 7);
                  v63 = *(CContactManager **)(v56 + v62 + 56);
                  *((_DWORD *)v63 + 100) = *(_DWORD *)(v56 + v62);
                  CContactManager::AddToTouchNode(v63, v101, *(struct CVisual **)(v56 + *((_QWORD *)this + 7) + 56));
                }
                v64 = *((_QWORD *)this + 7);
                v65 = *(_DWORD *)(v56 + v64 + 4) == 0;
                v66 = *(_QWORD *)(v56 + v64 + 56);
                if ( v65 )
                  CIndirectTouchVisual::StartHover(v66);
                else
                  CIndirectTouchVisual::StartEngage(v66);
              }
            }
          }
        }
        v67 = 0LL;
        v68 = *((_DWORD *)this + 76) - 1;
        v105 = 0LL;
        if ( v68 < 0 )
          goto LABEL_121;
        v69 = (_QWORD *)((char *)this + 280);
        v70 = 16LL * v68;
        do
        {
          if ( *(_DWORD *)(*v69 + v70) == *((_DWORD *)a2 + 2) )
          {
            v67 = *(struct CVisual **)(*v69 + v70 + 8);
            DynArray<CIconicBitmapPending,0>::RemoveAt((__int64 *)this + 35, v68);
          }
          v70 -= 16LL;
          --v68;
        }
        while ( v68 >= 0 );
        v105 = v67;
        if ( !v67 )
        {
LABEL_121:
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                    *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v101,
                    &v105);
          started = Touch;
          if ( Touch < 0 )
          {
            v100 = 714;
            goto LABEL_41;
          }
          v67 = v105;
          CContactManager::AddToTouchNode(v71, v101, v105);
        }
        started = CTouchPressHoldVisual::StartAbort(v67, (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_187;
        CContactManager::RemoveFromTouchNode(v72, v101, v67);
        if ( v67 )
          CBaseObject::Release(v67);
        v100 = 722;
      }
      else
      {
        if ( CDesktopManager::IsCurrentSessionRemotable() )
        {
          CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
          v73 = *((_DWORD *)a2 + 2);
          v102[1] = 0LL;
          LODWORD(v102[0]) = v73;
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                    *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v101,
                    &v102[1]);
          started = Touch;
          if ( Touch < 0 )
          {
            v100 = 616;
            goto LABEL_41;
          }
          CContactManager::AddToTouchNode(v74, v101, v102[1]);
          started = CTouchPressHoldVisual::StartHold(v102[1], (const struct tagPOINT *)((char *)a2 + 12));
          if ( started >= 0 )
          {
            v76 = (_QWORD *)((char *)this + 248);
            v77 = *((unsigned int *)this + 68);
            v78 = v77 + 1;
            if ( (int)v77 + 1 >= (unsigned int)v77 )
            {
              started = 0;
              if ( v78 <= *((_DWORD *)this + 67) )
              {
                *(_OWORD *)(*v76 + 16 * v77) = *(_OWORD *)v102;
                *((_DWORD *)this + 68) = v78;
                goto LABEL_187;
              }
              v79 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v76, 0x10u, 1, v102);
              started = v79;
              if ( v79 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v79, 0xC0u);
              if ( started >= 0 )
                goto LABEL_187;
            }
            else
            {
              started = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
            }
          }
          CContactManager::RemoveFromTouchNode(v75, v101, v102[1]);
          v53 = v102[1];
          if ( !v102[1] )
            goto LABEL_187;
LABEL_87:
          CBaseObject::Release(v53);
          goto LABEL_187;
        }
        if ( v7 < 0 )
          goto LABEL_55;
        v80 = 112LL * (unsigned int)v7;
        if ( *(_DWORD *)(v80 + *((_QWORD *)this + 7) + 4) != 1 )
          goto LABEL_55;
        Touch = CContactManager::EnsureTouchPressHoldForContact(this, v7, v101);
        started = Touch;
        if ( Touch < 0 )
        {
          v100 = 640;
          goto LABEL_41;
        }
        started = CTouchPressHoldVisual::StartHold(
                    *(CTouchPressHoldVisual **)(*((_QWORD *)this + 7) + v80 + 64),
                    (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_187;
        CContactManager::RemoveFromTouchNode(v81, v101, *(struct CVisual **)(v80 + *((_QWORD *)this + 7) + 64));
        v82 = *(CBaseObject **)(v80 + *((_QWORD *)this + 7) + 64);
        if ( v82 )
        {
          CBaseObject::Release(v82);
          *(_QWORD *)(v80 + *((_QWORD *)this + 7) + 64) = 0LL;
        }
        v100 = 646;
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
        v83 = 112LL * (unsigned int)v7;
        v84 = *(unsigned __int64 **)(v83 + *((_QWORD *)this + 7) + 64);
        if ( v84 )
        {
          (*(void (__fastcall **)(unsigned __int64 *))(*v84 + 184))(v84);
          CContactManager::RemoveFromTouchNode(v85, v84[34], (struct CVisual *)v84);
          CBaseObject::Release((CBaseObject *)v84);
          *(_QWORD *)(v83 + *((_QWORD *)this + 7) + 64) = 0LL;
          v86 = *((_QWORD *)this + 7);
          if ( !*(_QWORD *)(v86 + v83 + 96) )
          {
            if ( *(_BYTE *)(v86 + v83 + 105) )
            {
              if ( *((_BYTE *)this + 324) || *(_DWORD *)(v86 + v83 + 40) )
              {
                if ( !*(_QWORD *)(v86 + v83 + 48) )
                {
                  Touch = CreateTouchVisual<CDirectTouchVisual>(
                            *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                            v101,
                            (CDirectTouchVisual **)(v83 + v86 + 48));
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v100 = 551;
                    goto LABEL_41;
                  }
                  CContactManager::AddToTouchNode(v87, v101, *(struct CVisual **)(v83 + *((_QWORD *)this + 7) + 48));
                }
                if ( *((_BYTE *)this + 324) )
                  v88 = CContactManager::DWMSC_PRESENTATIONMODE;
                else
                  v88 = *(_DWORD *)(v83 + *((_QWORD *)this + 7) + 40);
                CDirectTouchVisual::StartDown(
                  *(_QWORD *)(v83 + *((_QWORD *)this + 7) + 48),
                  (const struct tagPOINT *)((char *)a2 + 12),
                  &v108,
                  v88);
              }
            }
            else
            {
              if ( !*(_QWORD *)(v86 + v83 + 56) )
              {
                Touch = CreateTouchVisual<CIndirectTouchVisual>(
                          *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                          v101,
                          (CTouchVisual **)(v83 + v86 + 56));
                started = Touch;
                if ( Touch < 0 )
                {
                  v100 = 561;
                  goto LABEL_41;
                }
                v89 = *((_QWORD *)this + 7);
                v90 = *(CContactManager **)(v83 + v89 + 56);
                *((_DWORD *)v90 + 100) = *(_DWORD *)(v83 + v89);
                CContactManager::AddToTouchNode(v90, v101, *(struct CVisual **)(v83 + *((_QWORD *)this + 7) + 56));
              }
              v91 = *((_QWORD *)this + 7);
              v65 = *(_DWORD *)(v83 + v91 + 4) == 0;
              v92 = *(_QWORD *)(v83 + v91 + 56);
              if ( v65 )
                CIndirectTouchVisual::StartHover(v92);
              else
                CIndirectTouchVisual::StartEngage(v92);
            }
          }
        }
      }
      v93 = 0LL;
      v94 = *((_DWORD *)this + 76) - 1;
      v103 = 0LL;
      if ( v94 < 0 )
        goto LABEL_178;
      v95 = (_QWORD *)((char *)this + 280);
      v96 = 16LL * v94;
      do
      {
        if ( *(_DWORD *)(*v95 + v96) == *((_DWORD *)a2 + 2) )
        {
          v93 = *(struct CVisual **)(*v95 + v96 + 8);
          DynArray<CIconicBitmapPending,0>::RemoveAt((__int64 *)this + 35, v94);
        }
        v96 -= 16LL;
        --v94;
      }
      while ( v94 >= 0 );
      v103 = v93;
      if ( !v93 )
      {
LABEL_178:
        Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                  *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v101,
                  &v103);
        started = Touch;
        if ( Touch < 0 )
        {
          v100 = 591;
          goto LABEL_41;
        }
        v93 = v103;
        CContactManager::AddToTouchNode(v97, v101, v103);
      }
      started = CTouchPressHoldVisual::StartRightTap(v93, (const struct tagPOINT *)((char *)a2 + 12));
      if ( started >= 0 )
        goto LABEL_187;
      CContactManager::RemoveFromTouchNode(v98, v101, v93);
      if ( v93 )
        CBaseObject::Release(v93);
      v100 = 599;
    }
LABEL_35:
    v26 = started;
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, v100);
    goto LABEL_187;
  }
  if ( v12 == 5 )
  {
    if ( (v7 < 0 || *(_BYTE *)(112LL * (unsigned int)v7 + *((_QWORD *)this + 7) + 105))
      && (int)CContactManager::FindStationaryAnimation((__int64)this, *((_DWORD *)a2 + 2), 1) < 0 )
    {
      CContactManager::StartStationaryAnimationWithDelay(
        v30,
        v29,
        2u,
        (__int64 *)((char *)a2 + 12),
        (__int64)&v108,
        v101,
        0);
    }
    goto LABEL_187;
  }
  if ( !v12 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      (__int64)this,
      *((_DWORD *)a2 + 2),
      4u,
      (__int64 *)((char *)a2 + 12),
      0LL,
      v101,
      0);
    goto LABEL_187;
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
      v101,
      0);
    goto LABEL_187;
  }
  v14 = (CContactManager *)(unsigned int)(v13 - 1);
  if ( !(_DWORD)v14 )
  {
    if ( (v4 & 0x80000000) != 0 )
      goto LABEL_43;
    v27 = *(unsigned __int64 **)(*((_QWORD *)this + 11) + 40LL * v4 + 16);
    if ( v27 )
    {
      (*(void (__fastcall **)(unsigned __int64 *))(*v27 + 184))(v27);
      CContactManager::RemoveFromTouchNode(v28, v27[34], (struct CVisual *)v27);
      CBaseObject::Release((CBaseObject *)v27);
    }
    *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v4 + 16) = 0LL;
    Touch = CContactManager::StartPenBarrelVisual(v14, (struct CPenContact *)(*((_QWORD *)this + 11) + 40LL * v4), v101);
    started = Touch;
    if ( Touch >= 0 )
    {
LABEL_43:
      CContactManager::StartStationaryAnimationWithDelay(
        (__int64)this,
        *((_DWORD *)a2 + 2),
        6u,
        (__int64 *)((char *)a2 + 12),
        0LL,
        v101,
        0);
      goto LABEL_187;
    }
    v100 = 461;
    goto LABEL_41;
  }
  v15 = (CContactManager *)(unsigned int)((_DWORD)v14 - 1);
  if ( (_DWORD)v15 )
  {
    if ( (_DWORD)v15 == 1 )
    {
      if ( (v4 & 0x80000000) == 0 )
      {
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
                  v101);
        started = Touch;
        if ( Touch < 0 )
        {
          v100 = 504;
LABEL_41:
          v26 = Touch;
          goto LABEL_42;
        }
      }
      CContactManager::StartStationaryAnimationWithDelay(
        (__int64)this,
        *((_DWORD *)a2 + 2),
        7u,
        (__int64 *)((char *)a2 + 12),
        0LL,
        v101,
        0);
      goto LABEL_187;
    }
LABEL_55:
    started = -2147024809;
    goto LABEL_187;
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
            v101,
            (CTouchVisual **)(*((_QWORD *)this + 11) + 16LL + 40LL * v4));
  started = Touch;
  if ( Touch < 0 )
  {
    v100 = 484;
    goto LABEL_41;
  }
  CContactManager::AddToTouchNode(v23, v101, *(struct CVisual **)(*((_QWORD *)this + 11) + 40LL * v4 + 16));
  started = CPenPressHoldVisual::Start(
              *(CPenPressHoldVisual **)(*((_QWORD *)this + 11) + 40LL * v4 + 16),
              (const struct tagPOINT *)((char *)a2 + 12));
  if ( started < 0 )
  {
    CContactManager::RemoveFromTouchNode(v24, v101, *(struct CVisual **)(*((_QWORD *)this + 11) + 40LL * v4 + 16));
    v25 = *(CBaseObject **)(*((_QWORD *)this + 11) + 40LL * v4 + 16);
    if ( v25 )
    {
      CBaseObject::Release(v25);
      *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v4 + 16) = 0LL;
    }
    v100 = 491;
    goto LABEL_35;
  }
LABEL_187:
  CContactManager::CleanupFinishedAnimations(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v107);
  return (unsigned int)started;
}
