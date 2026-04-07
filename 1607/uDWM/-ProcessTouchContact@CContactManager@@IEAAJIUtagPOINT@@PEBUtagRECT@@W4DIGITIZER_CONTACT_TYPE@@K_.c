/*
 * XREFs of ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004DBCC
 * Callers:
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18003AC88 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800866B8 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 * Callees:
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x18000903C (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003A92C (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003A950 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ @ 0x18004232C (-IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180047F00 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800480A4 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180048750 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18004E448 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x18006E724 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F338 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x18006F4E8 (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18006F64C (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?IsOKToCleanup@CPressTapVisual@@UEAA_NXZ @ 0x18006F680 (-IsOKToCleanup@CPressTapVisual@@UEAA_NXZ.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F6A0 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F800 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18006F968 (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F9D8 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ @ 0x18006FBA8 (-IsHolding@CTouchPressHoldVisual@@QEAA_NXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x18006FBD4 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x18006FC38 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x18006FD10 (-SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18006FD44 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x18007056C (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800706E8 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18007086C (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     Template_q @ 0x180075A2C (Template_q.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x1800852A4 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@.c)
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800858B4 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z @ 0x180085BF4 (-AddMultipleAndSet@-$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z.c)
 *     ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x180098A60 (-IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ.c)
 */

__int64 __fastcall CContactManager::ProcessTouchContact(
        __int64 a1,
        unsigned int a2,
        struct tagPOINT a3,
        const struct tagRECT *a4,
        int a5,
        char a6,
        unsigned __int64 a7)
{
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // r14d
  struct tagPOINT v11; // rbx
  __int64 v13; // r13
  int v14; // esi
  void *v15; // rdx
  struct tagRECT v16; // xmm0
  int Touch; // eax
  CContactManager *v18; // rcx
  CContactManager *v20; // rcx
  bool v21; // si
  bool v22; // al
  CContactManager *v23; // rcx
  __int64 v24; // r10
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  char v28; // al
  int started; // eax
  __int64 v30; // rsi
  CTouchPressHoldVisual *v31; // rcx
  _QWORD *v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // edx
  CBaseObject *v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // edx
  CContactManager *v38; // rcx
  CBaseObject *v39; // rcx
  unsigned int v40; // eax
  unsigned int v41; // edx
  CContactManager *v42; // rcx
  CBaseObject *v43; // rcx
  const struct tagRECT *v44; // rsi
  CContactManager *v45; // rcx
  unsigned int v46; // eax
  unsigned int v47; // edx
  CBaseObject *v48; // rcx
  CDirectTouchVisual *v49; // rcx
  struct CVisual **v50; // rsi
  CDesktopManager *v51; // r9
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  CContactManager *v55; // rcx
  CDirectTouchVisual *v56; // rcx
  float *v57; // rcx
  CIndirectTouchVisual *v58; // rcx
  CTetherVisual *v59; // rcx
  CTextTetherVisual *v60; // rcx
  __int64 v61; // rdi
  CIndirectTouchVisual *v62; // rcx
  __int64 v63; // rax
  unsigned int v64; // eax
  unsigned int v65; // edx
  CContactManager *v66; // rcx
  CBaseObject *v67; // rcx
  unsigned int v68; // eax
  unsigned int v69; // edx
  CContactManager *v70; // rcx
  CBaseObject *v71; // rcx
  CDirectTouchVisual *v72; // rcx
  unsigned int v73; // eax
  unsigned int v74; // edx
  CContactManager *v75; // rcx
  unsigned int v76; // eax
  unsigned int v77; // edx
  __int64 v78; // r8
  int v79; // eax
  int v80; // eax
  int v81; // r9d
  int v82; // eax
  __int64 *v83; // r9
  unsigned int v84; // edx
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  unsigned int v89; // [rsp+20h] [rbp-E0h]
  struct tagPOINT v90; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v91; // [rsp+48h] [rbp-B8h]
  const struct tagRECT *v92; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v93; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v94; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v95; // [rsp+68h] [rbp-98h] BYREF
  __int64 v96; // [rsp+70h] [rbp-90h] BYREF
  __int64 v97; // [rsp+78h] [rbp-88h] BYREF
  __int64 v98; // [rsp+80h] [rbp-80h] BYREF
  __int128 v99; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v100[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct tagPOINT v101; // [rsp+A8h] [rbp-58h]
  struct tagPOINT v102; // [rsp+B0h] [rbp-50h]
  struct tagRECT v103; // [rsp+B8h] [rbp-48h]
  unsigned int v104; // [rsp+C8h] [rbp-38h]
  struct CVisual *v105[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v106; // [rsp+E0h] [rbp-20h]
  __int64 v107; // [rsp+E8h] [rbp-18h]
  __int128 v108; // [rsp+F0h] [rbp-10h]
  __int64 v109; // [rsp+100h] [rbp+0h]
  char v110; // [rsp+108h] [rbp+8h]
  char v111; // [rsp+109h] [rbp+9h]

  v8 = 0xFFFFFFFFLL;
  v9 = 0;
  v92 = a4;
  v10 = 0;
  v91 = -1;
  v11 = a3;
  v13 = a1;
  v90 = a3;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v78 = *(_QWORD *)(a1 + 56);
    while ( 1 )
    {
      a1 = 112LL * v9;
      if ( *(_DWORD *)(a1 + v78) == a2 )
        break;
      if ( ++v9 >= *(_DWORD *)(v13 + 80) )
      {
        v8 = v91;
        goto LABEL_2;
      }
    }
    v8 = v9;
    v91 = v9;
  }
LABEL_2:
  v14 = a5;
  if ( (a6 & 0x80) == 0 && a5 == 1 )
    v14 = 3;
  if ( (int)v8 >= 0 )
  {
    v61 = *(_QWORD *)(v13 + 56) + 112 * v8;
    if ( v14 == 1 )
    {
      v62 = *(CIndirectTouchVisual **)(v61 + 56);
      if ( !v62 )
        return v10;
      if ( !*(_DWORD *)(v61 + 4) )
      {
        CIndirectTouchVisual::UpdateLocation(v62, &v90);
        return v10;
      }
      CIndirectTouchVisual::StartHover(v62, &v90, *(unsigned int *)(v61 + 40));
      v63 = *(_QWORD *)(v61 + 72);
      *(_DWORD *)(v61 + 4) = 0;
      if ( !v63 )
      {
LABEL_99:
        if ( !*(_QWORD *)(v61 + 80) )
          return v10;
        v94 = *(_QWORD *)(v61 + 80);
        v68 = *(_DWORD *)(v13 + 176);
        v69 = v68 + 1;
        if ( v68 + 1 < v68 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_102:
          CContactManager::StopAndRemoveFromRootNode(v70, *(struct CTouchVisual **)(v61 + 80));
          goto LABEL_103;
        }
        if ( v69 > *(_DWORD *)(v13 + 172) )
        {
          v80 = DynArrayImpl<0>::AddMultipleAndSet(v13 + 152, 8u, 1, &v94);
          if ( v80 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v80, 0xC0u);
            goto LABEL_102;
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v13 + 152) + 8LL * *(unsigned int *)(v13 + 176)) = v94;
          *(_DWORD *)(v13 + 176) = v69;
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v61 + 80) + 8LL));
        CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v61 + 80));
LABEL_103:
        v71 = *(CBaseObject **)(v61 + 80);
        if ( v71 )
        {
          CBaseObject::Release(v71);
          *(_QWORD *)(v61 + 80) = 0LL;
        }
        return v10;
      }
      v93 = v63;
      v64 = *(_DWORD *)(v13 + 176);
      v65 = v64 + 1;
      if ( v64 + 1 < v64 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_96:
        CContactManager::StopAndRemoveFromRootNode(v66, *(struct CTouchVisual **)(v61 + 72));
        goto LABEL_97;
      }
      if ( v65 > *(_DWORD *)(v13 + 172) )
      {
        v79 = DynArrayImpl<0>::AddMultipleAndSet(v13 + 152, 8u, 1, &v93);
        if ( v79 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, 0xC0u);
          goto LABEL_96;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v13 + 152) + 8LL * *(unsigned int *)(v13 + 176)) = v93;
        *(_DWORD *)(v13 + 176) = v65;
      }
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v61 + 72) + 8LL));
      CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v61 + 72));
LABEL_97:
      v67 = *(CBaseObject **)(v61 + 72);
      if ( v67 )
      {
        CBaseObject::Release(v67);
        *(_QWORD *)(v61 + 72) = 0LL;
      }
      goto LABEL_99;
    }
    if ( v14 != 2 )
    {
      if ( v14 != 3 )
      {
        v10 = -2147024809;
        v89 = 1468;
        v81 = -2147024809;
        goto LABEL_153;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_q(a1, &UdwmTouchUpReceived_Info, a2);
      CContactManager::CleanupFinishedAnimations((CContactManager *)v13);
      if ( *(_BYTE *)(v61 + 105) )
      {
        v72 = *(CDirectTouchVisual **)(v61 + 48);
        v21 = v72 && CDirectTouchVisual::IsInInitialDelay(v72);
        CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v72, v72);
        v22 = CContactManager::CheckShowContact(v13, *(_DWORD *)(v61 + 40), 2);
        v24 = 0LL;
        if ( v22
          && *(_DWORD *)(v61 + 4)
          && (!*(_QWORD *)(v61 + 88) || !CContactManager::CheckShowContact((__int64)v23, *(_DWORD *)(v61 + 40), 4))
          && *(_QWORD *)(v61 + 64) == v24
          && *(_QWORD *)(v61 + 96) == v24
          && (int)CContactManager::FindStationaryAnimation(v13, a2, 2LL) < 0
          && (int)CContactManager::FindStationaryAnimation(v23, v25, 3LL) < 0 )
        {
          v28 = !CContactManager::CheckShowContact((__int64)v23, *(_DWORD *)(v61 + 40), 1) || v21 ? v27 : 0;
          started = CContactManager::StartStationaryAnimationWithDelay(v26, a2, v27, &v90, v92, a7, v28);
          v10 = started;
          if ( started < 0 )
          {
            v89 = 1359;
            v81 = started;
            goto LABEL_153;
          }
        }
LABEL_34:
        CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v23, *(struct CTouchVisual **)(v61 + 88));
        v30 = *(_QWORD *)(v61 + 64);
        if ( !v30 )
          goto LABEL_43;
        if ( CTouchPressHoldVisual::IsHolding(*(CTouchPressHoldVisual **)(v61 + 64)) )
        {
          v32 = (_QWORD *)(v13 + 280);
          LODWORD(v99) = *(_DWORD *)v61;
          v33 = *(unsigned int *)(v13 + 304);
          *((_QWORD *)&v99 + 1) = v30;
          v34 = v33 + 1;
          if ( (int)v33 + 1 >= (unsigned int)v33 )
          {
            if ( v34 <= *(_DWORD *)(v13 + 300) )
            {
              *(_OWORD *)(*v32 + 16 * v33) = v99;
              *(_DWORD *)(v13 + 304) = v34;
              goto LABEL_170;
            }
            v83 = (__int64 *)&v99;
            v84 = 16;
LABEL_164:
            v85 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v32, v84, 1, v83);
            if ( v85 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v85, 0xC0u);
              goto LABEL_40;
            }
LABEL_170:
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v61 + 64) + 8LL));
LABEL_41:
            v35 = *(CBaseObject **)(v61 + 64);
            if ( v35 )
              CBaseObject::Release(v35);
LABEL_43:
            if ( !*(_QWORD *)(v61 + 72) )
              goto LABEL_49;
            v97 = *(_QWORD *)(v61 + 72);
            v36 = *(_DWORD *)(v13 + 176);
            v37 = v36 + 1;
            if ( v36 + 1 < v36 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_46:
              CContactManager::StopAndRemoveFromRootNode(v38, *(struct CTouchVisual **)(v61 + 72));
              goto LABEL_47;
            }
            if ( v37 > *(_DWORD *)(v13 + 172) )
            {
              v86 = DynArrayImpl<0>::AddMultipleAndSet(v13 + 152, 8u, 1, &v97);
              if ( v86 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v86, 0xC0u);
                goto LABEL_46;
              }
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)(v13 + 152) + 8LL * *(unsigned int *)(v13 + 176)) = v97;
              *(_DWORD *)(v13 + 176) = v37;
            }
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v61 + 72) + 8LL));
            CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v61 + 72));
LABEL_47:
            v39 = *(CBaseObject **)(v61 + 72);
            if ( v39 )
              CBaseObject::Release(v39);
LABEL_49:
            if ( !*(_QWORD *)(v61 + 80) )
              goto LABEL_55;
            v98 = *(_QWORD *)(v61 + 80);
            v40 = *(_DWORD *)(v13 + 176);
            v41 = v40 + 1;
            if ( v40 + 1 < v40 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_52:
              CContactManager::StopAndRemoveFromRootNode(v42, *(struct CTouchVisual **)(v61 + 80));
              goto LABEL_53;
            }
            if ( v41 > *(_DWORD *)(v13 + 172) )
            {
              v87 = DynArrayImpl<0>::AddMultipleAndSet(v13 + 152, 8u, 1, &v98);
              if ( v87 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v87, 0xC0u);
                goto LABEL_52;
              }
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)(v13 + 152) + 8LL * *(unsigned int *)(v13 + 176)) = v98;
              *(_DWORD *)(v13 + 176) = v41;
            }
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v61 + 80) + 8LL));
            CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v61 + 80));
LABEL_53:
            v43 = *(CBaseObject **)(v61 + 80);
            if ( v43 )
              CBaseObject::Release(v43);
LABEL_55:
            v44 = *(const struct tagRECT **)(v61 + 96);
            if ( !v44 )
            {
LABEL_62:
              DynArray<CTouchContact,0>::RemoveAt(v13 + 56, v91);
              return v10;
            }
            if ( CPressTapVisual::IsOKToCleanup(*(CPressTapVisual **)(v61 + 96)) )
              goto LABEL_59;
            v92 = v44;
            v46 = *(_DWORD *)(v13 + 176);
            v47 = v46 + 1;
            if ( v46 + 1 < v46 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_59:
              CContactManager::StopAndRemoveFromRootNode(v45, *(struct CTouchVisual **)(v61 + 96));
              goto LABEL_60;
            }
            if ( v47 > *(_DWORD *)(v13 + 172) )
            {
              v88 = DynArrayImpl<0>::AddMultipleAndSet(v13 + 152, 8u, 1, &v92);
              if ( v88 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v88, 0xC0u);
                goto LABEL_59;
              }
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)(v13 + 152) + 8LL * *(unsigned int *)(v13 + 176)) = v92;
              *(_DWORD *)(v13 + 176) = v47;
            }
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v61 + 96) + 8LL));
LABEL_60:
            v48 = *(CBaseObject **)(v61 + 96);
            if ( v48 )
              CBaseObject::Release(v48);
            goto LABEL_62;
          }
        }
        else
        {
          if ( *(_DWORD *)(v30 + 280) == 1 || CTouchPressHoldVisual::IsOKToCleanup(v31) )
            goto LABEL_40;
          v96 = v30;
          v76 = *(_DWORD *)(v13 + 176);
          v77 = v76 + 1;
          if ( v76 + 1 >= v76 )
          {
            if ( v77 <= *(_DWORD *)(v13 + 172) )
            {
              *(_QWORD *)(*(_QWORD *)(v13 + 152) + 8LL * *(unsigned int *)(v13 + 176)) = v96;
              *(_DWORD *)(v13 + 176) = v77;
              goto LABEL_170;
            }
            v83 = &v96;
            v84 = 8;
            v32 = (_QWORD *)(v13 + 152);
            goto LABEL_164;
          }
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_40:
        CContactManager::StopAndRemoveFromRootNode(v31, *(struct CTouchVisual **)(v61 + 64));
        goto LABEL_41;
      }
      if ( !*(_QWORD *)(v61 + 56) )
        goto LABEL_34;
      v95 = *(_QWORD *)(v61 + 56);
      v73 = *(_DWORD *)(v13 + 176);
      v74 = v73 + 1;
      if ( v73 + 1 < v73 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_126:
        CContactManager::StopAndRemoveFromRootNode(v75, *(struct CTouchVisual **)(v61 + 56));
        goto LABEL_127;
      }
      if ( v74 > *(_DWORD *)(v13 + 172) )
      {
        v82 = DynArrayImpl<0>::AddMultipleAndSet(v13 + 152, 8u, 1, &v95);
        if ( v82 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v82, 0xC0u);
          goto LABEL_126;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v13 + 152) + 8LL * *(unsigned int *)(v13 + 176)) = v95;
        *(_DWORD *)(v13 + 176) = v74;
      }
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v61 + 56) + 8LL));
      CIndirectTouchVisual::StartIdle(*(_QWORD *)(v61 + 56), &v90, *(unsigned int *)(v61 + 40));
LABEL_127:
      v23 = *(CContactManager **)(v61 + 56);
      if ( v23 )
        CBaseObject::Release(v23);
      goto LABEL_34;
    }
    if ( !*(_BYTE *)(v61 + 105) )
      goto LABEL_78;
    if ( *(_BYTE *)(v61 + 104) )
    {
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
        (CContactManager *)a1,
        *(struct CTouchVisual **)(v61 + 88));
      *(_QWORD *)(v61 + 88) = 0LL;
      *(_BYTE *)(v61 + 104) = 0;
    }
    if ( *(_BYTE *)(v13 + 324)
      || *(_QWORD *)(v61 + 72)
      || *(_QWORD *)(v61 + 80)
      || *(_QWORD *)(v61 + 96)
      || *(_QWORD *)(v61 + 64)
      || !*(_DWORD *)(v61 + 40)
      || (v49 = *(CDirectTouchVisual **)(v61 + 48)) != 0LL && CDirectTouchVisual::IsInInitialDelay(v49) )
    {
LABEL_78:
      v57 = *(float **)(v61 + 48);
      *(struct tagPOINT *)(v61 + 8) = v11;
      *(struct tagRECT *)(v61 + 24) = *a4;
      if ( v57 )
        CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)v57, &v90, a4, v57[83]);
      v58 = *(CIndirectTouchVisual **)(v61 + 56);
      if ( v58 )
      {
        if ( *(_DWORD *)(v61 + 4) == 1 )
        {
          CIndirectTouchVisual::UpdateLocation(v58, &v90);
        }
        else
        {
          CIndirectTouchVisual::StartEngage(v58, &v90, *(unsigned int *)(v61 + 40));
          *(_DWORD *)(v61 + 4) = 1;
        }
      }
      v59 = *(CTetherVisual **)(v61 + 72);
      if ( v59 )
        CTetherVisual::UpdatePosition(v59, 0LL, &v90);
      v60 = *(CTextTetherVisual **)(v61 + 80);
      if ( v60 )
        CTextTetherVisual::SetContactPosition(v60, &v90, (const struct tagRECT *)(v61 + 24));
      return v10;
    }
    v50 = (struct CVisual **)(v61 + 88);
    if ( !*(_QWORD *)(v61 + 88) )
    {
      v51 = CDesktopManager::s_pDesktopManagerInstance;
      v52 = (unsigned int)((v11.x - *(_DWORD *)(v61 + 16)) * (v11.x - *(_DWORD *)(v61 + 16))
                         + (v90.y - *(_DWORD *)(v61 + 20)) * (v90.y - *(_DWORD *)(v61 + 20)));
      if ( (int)v52 > (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 163) * 225.0) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        {
          Template_q(v52, &UdwmTouchDragVisual_Start, a2);
          v51 = CDesktopManager::s_pDesktopManagerInstance;
        }
        Touch = CreateTouchVisual<CTouchDragVisual>(*((struct IDwmChannel **)v51 + 4), a7);
        v10 = Touch;
        if ( Touch < 0 )
        {
          v89 = 1274;
        }
        else
        {
          CTouchDragVisual::UpdateShowContact(*v50, *(unsigned int *)(v61 + 40), v53, v54);
          Touch = CContactManager::AddToTouchNode(v55, a7, *v50);
          v10 = Touch;
          if ( Touch >= 0 )
          {
            v10 = 0;
            *((_QWORD *)*v50 + 54) = v13;
            v56 = *(CDirectTouchVisual **)(v61 + 48);
            *(_BYTE *)(v61 + 104) = 0;
            if ( v56 )
              CDirectTouchVisual::FadeOut(v56);
            goto LABEL_76;
          }
          v89 = 1276;
        }
LABEL_150:
        v81 = Touch;
LABEL_153:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v81, v89);
        return v10;
      }
    }
LABEL_76:
    if ( *v50 )
    {
      CTouchDragVisual::NotifyTouchDrag(*v50, &v90);
      v11 = v90;
    }
    goto LABEL_78;
  }
  if ( v14 == 2 || v14 == 1 && a6 < 0 )
  {
    if ( a6 < 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_13;
      v15 = &UdwmIndirectTouchVisual_Received_Info;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_13;
      v15 = &UdwmDirectTouchDownAnimation_Start;
    }
    Template_q(a1, v15, a2);
LABEL_13:
    memset_0(v100, 0, 0x70uLL);
    v16 = *a4;
    v101 = v11;
    v102 = v11;
    v100[0] = a2;
    v104 = -1;
    v100[1] = v14 == 2;
    *(_OWORD *)v105 = 0LL;
    v107 = 0LL;
    v106 = 0LL;
    v109 = 0LL;
    v110 = 0;
    v103 = v16;
    v108 = 0LL;
    if ( a6 < 0 )
    {
      v111 = 0;
      Touch = CreateTouchVisual<CIndirectTouchVisual>(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                a7);
      v10 = Touch;
      if ( Touch >= 0 )
      {
        *((_DWORD *)v105[1] + 100) = a2;
        CContactManager::AddToTouchNode(v18, a7, v105[1]);
        if ( v14 == 1 )
          CIndirectTouchVisual::StartHover(v105[1], &v90, v104);
        else
          CIndirectTouchVisual::StartEngage(v105[1], &v90, v104);
        goto LABEL_17;
      }
      v89 = 1510;
    }
    else
    {
      v111 = 1;
      Touch = CreateTouchVisual<CDirectTouchVisual>(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                a7,
                v105);
      v10 = Touch;
      if ( Touch >= 0 )
      {
        CContactManager::AddToTouchNode(v20, a7, v105[0]);
        CDirectTouchVisual::StartDown(v105[0], &v90, a4, v104);
LABEL_17:
        DynArray<CTouchContact,0>::AddMultipleAndSet(v13 + 56, v100);
        return v10;
      }
      v89 = 1504;
    }
    goto LABEL_150;
  }
  return v10;
}
