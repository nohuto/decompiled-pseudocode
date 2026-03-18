/*
 * XREFs of ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198
 * Callers:
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01EBE78 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     HandlePTPTelemetry @ 0x1C015526C (HandlePTPTelemetry.c)
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01E6C7C (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01E6DF0 (-CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01E6F3C (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01E7000 (-CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@Z @ 0x1C01E7730 (-FindGestureAndMarkGesturingContactsAsNonResting@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@.c)
 *     ?GetPTPShellListener@@YAPEAUtagWND@@XZ @ 0x1C01E7E3C (-GetPTPShellListener@@YAPEAUtagWND@@XZ.c)
 *     ?HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01E7E60 (-HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01E7FB4 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?MarkRecentlyDownedContactsAsNonResting@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01E814C (-MarkRecentlyDownedContactsAsNonResting@@YAXPEAUtagTPSTATE@@@Z.c)
 *     ?PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E82E8 (-PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?RevalidateTPDeviceState@@YAHPEAX@Z @ 0x1C01E84D4 (-RevalidateTPDeviceState@@YAHPEAX@Z.c)
 *     ?SuppressContactForMultiFingerTap@@YAHPEBUtagTPCONTACTSTATE@@@Z @ 0x1C01E8698 (-SuppressContactForMultiFingerTap@@YAHPEBUtagTPCONTACTSTATE@@@Z.c)
 *     ?TPAAPGetLevel@@YA?AW4tagTOUCH_PAD_AAP_LEVEL@@PEAUtagTPSTATE@@@Z @ 0x1C01E86B4 (-TPAAPGetLevel@@YA-AW4tagTOUCH_PAD_AAP_LEVEL@@PEAUtagTPSTATE@@@Z.c)
 *     ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01E8868 (-TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01E8A00 (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 *     ?UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01E9284 (-UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z.c)
 *     ?UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01E961C (-UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01E96E4 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 *     ?xxxCancelMouseUpTimer@@YAXH@Z @ 0x1C01E9B60 (-xxxCancelMouseUpTimer@@YAXH@Z.c)
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01E9BB8 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01EA898 (-xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z.c)
 *     ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01EB030 (-xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01EB354 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXKPEAH@Z @ 0x1C01EBC40 (-xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01ED1FC (-xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z.c)
 *     ?xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z @ 0x1C01ED3DC (-xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z.c)
 *     ?xxxSendMouseUpIfPending@@YAXPEAI_K@Z @ 0x1C01EDAAC (-xxxSendMouseUpIfPending@@YAXPEAI_K@Z.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01EDB3C (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     QueryInertiaInfo @ 0x1C022A1F0 (QueryInertiaInfo.c)
 */

__int64 __fastcall xxxInternalTPProcessing(
        int a1,
        __int64 a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        __int64 a4,
        void *a5)
{
  int v5; // eax
  unsigned int v9; // r13d
  int v10; // r12d
  int v11; // r15d
  int v12; // r14d
  int v13; // edx
  unsigned int v14; // r8d
  int v15; // eax
  const struct INERTIA_INFO_INTERNAL *v16; // rax
  struct tagTPSTATE *v17; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v19; // rsi
  unsigned int v20; // edi
  int v21; // eax
  unsigned int v22; // eax
  int v23; // edi
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  _DWORD *v50; // rcx
  int v51; // edi
  __int64 v52; // r10
  unsigned int v53; // edi
  __int64 v54; // rax
  struct tagPOINTER_INFO *v55; // r15
  struct tagPOINT *v56; // r14
  unsigned __int16 *v57; // r12
  __int64 v58; // rsi
  __int64 v59; // rdi
  int v60; // eax
  struct tagHID_POINTER_DEVICE_INFO *v61; // r9
  BOOL v62; // eax
  _DWORD *v63; // r8
  int v64; // ecx
  int v65; // eax
  unsigned int v66; // r9d
  __int64 v67; // r10
  __int64 v68; // r8
  __int64 v69; // r15
  __int64 v70; // rdx
  unsigned int v71; // ecx
  int GestureAndMarkGesturingContactsAsNonResting; // eax
  unsigned int v73; // esi
  int v74; // ecx
  int v75; // r8d
  int v76; // ecx
  int v77; // esi
  int v78; // eax
  char v79; // dl
  int *v80; // rcx
  int v81; // eax
  char v82; // cl
  __int64 v83; // rax
  unsigned __int64 v84; // r12
  unsigned __int64 v85; // r14
  int v86; // r13d
  __int64 v87; // r9
  int *v88; // rsi
  unsigned __int16 *v89; // r15
  unsigned int v90; // r10d
  __int64 v91; // rdx
  int v92; // r8d
  __int64 v93; // rdi
  int v94; // eax
  __int64 v95; // r8
  int v96; // ecx
  int v97; // eax
  unsigned int v98; // eax
  unsigned __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  unsigned int v103; // r11d
  __int64 v104; // r15
  __int64 v105; // rdi
  unsigned int v106; // r10d
  __int64 v107; // r14
  __int64 v108; // r9
  __int64 v109; // rsi
  __int64 v110; // r8
  __int64 v111; // rax
  unsigned __int64 v112; // r8
  int v113; // eax
  int v114; // eax
  int v115; // r14d
  int v117; // eax
  int v118; // r10d
  int v119; // ecx
  unsigned int v120; // r14d
  int v121; // esi
  __int64 v122; // r11
  unsigned __int16 v123; // ax
  int v124; // eax
  struct tagTPSTATE *v125; // rcx
  __int64 v126; // rdx
  int v127; // r11d
  __int64 v128; // r8
  int v129; // ecx
  unsigned int v130; // eax
  unsigned int v131; // eax
  unsigned int v132; // eax
  int v133; // edi
  __int64 v134; // rcx
  __int64 v135; // rbx
  int v136; // [rsp+48h] [rbp-51h]
  unsigned int v137; // [rsp+4Ch] [rbp-4Dh]
  int v138; // [rsp+50h] [rbp-49h]
  _DWORD *v139; // [rsp+58h] [rbp-41h]
  __int64 v140; // [rsp+58h] [rbp-41h]
  int v141; // [rsp+60h] [rbp-39h]
  int v142; // [rsp+64h] [rbp-35h]
  int v143; // [rsp+68h] [rbp-31h]
  unsigned int v144; // [rsp+6Ch] [rbp-2Dh]
  int v145; // [rsp+70h] [rbp-29h] BYREF
  int v146; // [rsp+74h] [rbp-25h]
  int v147; // [rsp+78h] [rbp-21h]
  int v148; // [rsp+7Ch] [rbp-1Dh] BYREF
  int v149; // [rsp+80h] [rbp-19h] BYREF
  int v150; // [rsp+84h] [rbp-15h] BYREF
  int v151; // [rsp+88h] [rbp-11h] BYREF
  int v152; // [rsp+8Ch] [rbp-Dh]
  unsigned int v153; // [rsp+90h] [rbp-9h]
  int v154; // [rsp+94h] [rbp-5h]
  int v155; // [rsp+98h] [rbp-1h]
  unsigned int v157; // [rsp+100h] [rbp+67h]
  char v158; // [rsp+100h] [rbp+67h]

  v5 = *(_DWORD *)(a2 + 1920);
  v153 = 0;
  v144 = 0;
  v137 = 0;
  v149 = 0;
  v9 = 0;
  v150 = 0;
  v10 = 0;
  v151 = 0;
  v11 = 0;
  v136 = 0;
  v12 = 0;
  v148 = 0;
  v145 = 0;
  v143 = 0;
  v157 = 0;
  v152 = 0;
  v147 = 0;
  v146 = 0;
  if ( (v5 & 1) == 0 && (v5 & 4) == 0 && (v5 & 8) == 0 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      if ( v14 >= 6 )
        break;
      v15 = *(_DWORD *)(272LL * v14 + a2 + 264);
      if ( (v15 & 1) != 0 && (v15 & 0x80u) == 0 )
        v13 = 1;
      ++v14;
    }
    while ( !v13 );
    if ( !v13 && *(_DWORD *)(a4 + 40) != *(_DWORD *)(a2 + 1656) )
    {
      v16 = (const struct INERTIA_INFO_INTERNAL *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))QueryInertiaInfo)(
                                                    &gInertiaInfo,
                                                    gptCursorAsync,
                                                    0LL);
      if ( v16 )
        CacheInertiaInfo((struct tagTPSTATE *)a2, a3, v16, a5);
      if ( (unsigned __int64)qword_1C0329110 > *(_QWORD *)(a2 + 1872) && (int)TPAAPGetLevel(a2) > 0 )
        TPAAPSetCurtainState(v17, 1u);
      *(LARGE_INTEGER *)(a2 + 1872) = KeQueryPerformanceCounter(0LL);
      if ( qword_1C0329118 > qword_1C0329110 )
      {
        if ( gTPTelemTimings >= qword_1C0329118 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          dword_1C0326D0C = 0;
          qword_1C0326CF8 = PerformanceCounter.QuadPart;
        }
        else
        {
          gTPTelemTimings = KeQueryPerformanceCounter(0LL);
        }
      }
    }
  }
  v19 = *(_QWORD *)(a4 + 88);
  v20 = *(_DWORD *)(a2 + 1920);
  v139 = (_DWORD *)(v19 + 68);
  v21 = *(_DWORD *)(v19 + 68);
  v138 = ((unsigned __int8)v21 >> 4) & 1;
  v142 = ((unsigned __int8)v21 >> 6) & 1;
  v141 = ((unsigned __int8)v21 >> 5) & 1;
  v22 = v20 >> 14;
  v20 &= ~0x4000u;
  *(_DWORD *)(a2 + 1920) = v20;
  v155 = v22 & 1;
  v154 = *(_DWORD *)(a2 + 1664);
  v23 = (v20 >> 15) & 1;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x17uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) != 0 )
      goto LABEL_23;
LABEL_33:
    v50 = (_DWORD *)(gpsi + 2360LL);
    goto LABEL_38;
  }
  if ( IsDPIDWMSysMet(v25)
    && (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41, v42) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_33;
  }
LABEL_23:
  if ( IsDPIDWMSysMet(0x17uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 408)
      ? (v38 = 0)
      : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v38) )
  {
    v50 = (_DWORD *)(gpsi + 2748LL);
  }
  else
  {
    v50 = (_DWORD *)(gpsi + 1972LL);
  }
LABEL_38:
  if ( v23 != *v50 )
    UpdatePTPRightClickZone((struct tagTPSTATE *)a2, a3, 0);
  v51 = a1;
  v52 = 54LL;
  if ( a1 )
  {
    v69 = a4;
    v77 = 1;
    v115 = v138;
    goto LABEL_216;
  }
  v53 = 0;
  if ( v138 || v141 || v142 )
    *(_DWORD *)(a2 + 1920) |= 0x40000000u;
  v54 = a4;
  if ( *(_DWORD *)(a4 + 40) )
  {
    v55 = (struct tagPOINTER_INFO *)(v19 + 56);
    v56 = (struct tagPOINT *)(v19 + 96);
    v57 = (unsigned __int16 *)(v19 + 48);
    while ( 1 )
    {
      v58 = (unsigned int)*v57 % *(_DWORD *)(a2 + 1644);
      v59 = a2 + 272 * v58;
      if ( (*(_DWORD *)(v59 + 264) & 1) != 0 )
      {
        v61 = a3;
      }
      else
      {
        v60 = TPAAPShouldAllowNow(64, 0, 0, 0LL);
        v61 = a3;
        if ( !v60 )
        {
          v62 = PointInsideCurtainRegion(*v56, a3);
          v63 = v139;
          v52 = 54LL;
          if ( v62 )
            *v139 = 0;
          goto LABEL_54;
        }
        v52 = 54LL;
      }
      v63 = v139;
LABEL_54:
      if ( (*(_DWORD *)(v59 + 264) & 1) == 0 )
      {
        v64 = *(_DWORD *)(a2 + 1920);
        if ( (v64 & 0x10000000) != 0 && (dword_1C0328110 & 2) != 0 && (v64 & 0x40000000) == 0 )
        {
          v65 = *(_DWORD *)(a2 + 1664);
          if ( v65 != 6 && v65 != 3 && !PtInRect((_DWORD *)(a2 + 1896), (unsigned __int64)*v56) )
            *v63 = 0;
        }
      }
      if ( *v63 )
      {
        UpdateTPStateIndicator((struct tagTPCONTACTSTATE *)(a2 + 272 * v58), (struct tagTPSTATE *)a2, v55, v61, &v148);
        if ( (*(_DWORD *)(v59 + 264) & 2) != 0 )
        {
          v157 = v58;
          ++v143;
          v147 = 1;
          *(_DWORD *)(v59 + 128) = *(_DWORD *)(a4 + 32);
          if ( qword_1C0326CE8 < qword_1C0329118 )
            qword_1C0326CE8 = KeQueryPerformanceCounter(0LL).QuadPart;
          if ( gTPTelemTimings > 0 && dword_1C0326D30 <= 0 )
          {
            dword_1C0326D30 = v58;
            if ( IsFirstActionAfterKey() )
              qword_1C0326D10 = *(_QWORD *)v59;
            else
              qword_1C0326D20 = *(_QWORD *)v59;
          }
        }
        v63 = v139;
        if ( (*v139 & 0x40000) != 0 )
          v146 = 1;
        else
          ++v137;
        v52 = 54LL;
      }
      v54 = a4;
      v57 = (unsigned __int16 *)((char *)v57 + v52 * 4);
      v139 = &v63[v52];
      v56 = (struct tagPOINT *)((char *)v56 + v52 * 4);
      v55 = (struct tagPOINTER_INFO *)((char *)v55 + v52 * 4);
      if ( ++v9 >= *(_DWORD *)(a4 + 40) )
      {
        v12 = v146;
        v53 = 0;
        v11 = v147;
        v10 = v143;
        break;
      }
    }
  }
  *(_DWORD *)(a2 + 1656) = 0;
  v66 = 0;
  if ( *(_DWORD *)(v54 + 40) )
  {
    v67 = v11;
    v68 = *(_QWORD *)(v54 + 88) + 68LL;
    v69 = a4;
    do
    {
      v70 = a2 + 272LL * ((unsigned int)*(unsigned __int16 *)(v68 - 20) % *(_DWORD *)(a2 + 1644));
      if ( (*(_DWORD *)v68 & 0x40000) == 0 && (*(_DWORD *)(v70 + 264) & 0x80u) != 0 )
        ++*(_DWORD *)(a2 + 1656);
      if ( v67 || v12 )
        *(_QWORD *)(v70 + 48) = *(_QWORD *)(v68 + 28);
      v68 += 216LL;
      ++v66;
    }
    while ( v66 < *(_DWORD *)(a4 + 40) );
  }
  else
  {
    v69 = a4;
  }
  v71 = v137;
  *(_DWORD *)(a2 + 1660) = v137 - *(_DWORD *)(a2 + 1656);
  if ( v137 >= 2 && *(_DWORD *)(a2 + 1664) != 3 )
  {
    GestureAndMarkGesturingContactsAsNonResting = FindGestureAndMarkGesturingContactsAsNonResting(
                                                    (const struct tagPOINTERINPUTFRAME *)v69,
                                                    (struct tagTPSTATE *)a2);
    v71 = v137;
    v152 = GestureAndMarkGesturingContactsAsNonResting;
  }
  if ( v148 && v71 == 1 )
    zzzCancelInertiaState((struct tagTPSTATE *)a2, 0);
  if ( gidTapTimer && v10 )
  {
    if ( v10 == 1 && (qword_1C03281F0 & 0x400000000LL) != 0 )
    {
      v73 = v157;
      v74 = *(_QWORD *)(a2 + 1720) - *(_QWORD *)(272LL * v157 + a2);
      v75 = HIDWORD(*(_QWORD *)(a2 + 1720)) - HIDWORD(*(_QWORD *)(272LL * v157 + a2));
      if ( v75 * v75 + v74 * v74 <= (unsigned __int64)(unsigned int)(dword_1C03280F4 * dword_1C03280F4) )
        v53 = 1;
    }
    else
    {
      v73 = v157;
    }
    if ( guMouseUpPending )
    {
      if ( v53 )
        goto LABEL_106;
      *(_DWORD *)(a2 + 1920) &= ~0x10u;
    }
    if ( !v53 )
    {
      v76 = 1;
      goto LABEL_107;
    }
LABEL_106:
    v76 = 0;
LABEL_107:
    xxxCancelMouseUpTimer(v76);
    gbTapTimerFired = 0;
    if ( v53 )
    {
      v53 = 0;
      *(_DWORD *)(a2 + 1640) = guMouseUpPending;
      guMouseUpPending = 0;
      *(_DWORD *)(272LL * v73 + a2 + 264) |= 0x4000u;
    }
    else
    {
      v53 = 0;
    }
  }
  v77 = 1;
  if ( *(_DWORD *)(a2 + 1664) == 1 )
  {
    v78 = *(_DWORD *)(a2 + 1640);
    if ( v78 )
    {
      if ( *(_DWORD *)(a2 + 1660) > 1u )
      {
        if ( v78 == 4 )
        {
          *(_DWORD *)(a2 + 1920) &= ~0x10u;
        }
        else if ( v78 == 16 )
        {
          *(_DWORD *)(a2 + 1920) &= ~0x20u;
        }
        xxxSendMouseUpIfPending((unsigned int *)(a2 + 1640), *(_QWORD *)(a2 + 1768));
      }
    }
  }
  if ( gidTapTimer )
  {
    v79 = 0;
    v80 = (int *)(a2 + 264);
    do
    {
      v81 = *v80;
      if ( (*v80 & 1) != 0 && (v81 & 0x80u) != 0 && (v81 & 4) != 0 )
        v79 = 1;
      v80 += 68;
    }
    while ( v80 - 66 != (int *)(a2 + 1632) );
    if ( *(_DWORD *)(a2 + 1660) || v79 )
    {
      if ( guMouseUpPending )
        *(_DWORD *)(a2 + 1920) &= ~0x10u;
      xxxCancelMouseUpTimer(1);
      gbTapTimerFired = 0;
    }
  }
  if ( *(_DWORD *)(a2 + 1660) > 2u )
    *(_DWORD *)(a2 + 1920) |= 0x20000u;
  v82 = 0;
  v83 = *(_QWORD *)(v69 + 88);
  v84 = 0LL;
  v158 = 0;
  v85 = 0LL;
  v86 = 0;
  if ( *(_DWORD *)(v69 + 40) )
  {
    v87 = v154;
    v88 = (int *)(v83 + 68);
    v140 = v154;
    v89 = (unsigned __int16 *)(v83 + 48);
    v90 = 1;
    while ( 1 )
    {
      v91 = (unsigned int)*v89 % *(_DWORD *)(a2 + 1644);
      v92 = *v88;
      v93 = a2 + 272LL * (unsigned int)v91;
      if ( *v88 )
        break;
      v89 += 108;
      v88 += 54;
LABEL_184:
      if ( (unsigned int)++v86 >= *(_DWORD *)(a4 + 40) )
      {
        v53 = 0;
        v69 = a4;
        v77 = 1;
        goto LABEL_186;
      }
    }
    if ( !v82 && !SuppressContactForMultiFingerTap((const struct tagTPCONTACTSTATE *)(a2 + 272LL * (unsigned int)v91)) )
    {
      v85 = *(_QWORD *)(v93 + 56);
      v84 = v85;
      v158 = v90;
    }
    v94 = *(_DWORD *)(v93 + 264);
    if ( (v94 & 4) != 0 && (*(_DWORD *)(a2 + 1664) != 2 || (_DWORD)v91 != *(_DWORD *)(a2 + 1632)) )
      v153 = v90;
    if ( (v94 & 0x40000) == 0 || *(_DWORD *)(a2 + 1664) == 2 && (_DWORD)v91 == *(_DWORD *)(a2 + 1632) )
      v144 = 0;
    else
      v144 = v90;
    if ( *(_DWORD *)(a2 + 1664) == 2
      && (_DWORD)v91 == *(_DWORD *)(a2 + 1632)
      && ((v92 & 0x40000) != 0 || (v94 & 0x80u) != 0 && v137 > v90) )
    {
      *(_DWORD *)(a2 + 1920) &= ~0x2000000u;
      *(_DWORD *)(a2 + 1664) = v90;
    }
    v95 = a2 + 1640;
    v96 = *(_DWORD *)(a2 + 1640);
    if ( v96 )
    {
      if ( *(_DWORD *)(a2 + 1664) == 5 && (*v88 & 0x40000) == 0 && v137 == v90 )
      {
        v97 = *(_DWORD *)(v93 + 264);
        if ( (v97 & 0x80u) != 0 && (v97 & 4) == 0 && (v97 & 0x2000) == 0 && (v97 & 0x4000) == 0 )
        {
          *(_DWORD *)(a2 + 1664) = v90;
          if ( v96 == 4 )
          {
            *(_DWORD *)(a2 + 1920) &= ~0x10u;
          }
          else if ( v96 == 16 )
          {
            *(_DWORD *)(a2 + 1920) &= ~0x20u;
          }
          xxxSendMouseUpIfPending(
            (unsigned int *)(a2 + 1640),
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
          v87 = v140;
        }
      }
    }
    if ( (*(_DWORD *)(v93 + 264) & 0x40) != 0 && v87 != 3 && (*v88 & 0x40000) != 0 )
      goto LABEL_172;
    if ( *(_DWORD *)(a2 + 1664) != 2 )
    {
LABEL_175:
      v98 = *(_DWORD *)(a2 + 1648);
      if ( v98 >= 3
        && v137 < v98
        && (*(_DWORD *)(a2 + 1920) & 0x800000) == 0
        && !SuppressContactForMultiFingerTap((const struct tagTPCONTACTSTATE *)v93) )
      {
        v99 = *(_QWORD *)(v93 + 56);
        if ( v99 > v85 )
          v85 = *(_QWORD *)(v93 + 56);
        if ( v99 < v84 )
          v84 = *(_QWORD *)(v93 + 56);
      }
      v82 = v158;
      v87 = v140;
      v89 += 108;
      v88 += 54;
      v90 = 1;
      goto LABEL_184;
    }
    if ( *(_QWORD *)(a2 + 1912) )
LABEL_172:
      CleanupGestureCache((struct tagTPSTATE *)a2, v91, v95);
    if ( *(_DWORD *)(a2 + 1664) == 2 )
      *(_DWORD *)(a2 + 1920) |= 0x2000000u;
    goto LABEL_175;
  }
LABEL_186:
  v9 = v137;
  if ( xxxProcessTapsFor3orMoreContacts(
         (const struct tagPOINTERINPUTFRAME *)v69,
         (struct tagTPSTATE *)a2,
         v137,
         v84,
         v85) )
  {
    goto LABEL_279;
  }
  if ( v137 > 1 && (*(_DWORD *)(a2 + 1920) & 0x40000) == 0 )
  {
    v103 = *(_DWORD *)(a2 + 1644);
    if ( v103 )
    {
      v104 = (unsigned int)dword_1C03280E8;
      v105 = a2 + 56;
      v106 = 1;
      v107 = v103;
      do
      {
        if ( (*(_DWORD *)(v105 + 208) & 1) != 0 && v106 < v103 )
        {
          v108 = 272LL * v106 + a2 + 56;
          v109 = v103 - v106;
          do
          {
            if ( (*(_DWORD *)(v108 + 208) & 1) != 0 )
            {
              v110 = *(_QWORD *)v108;
              v111 = *(_QWORD *)v105;
              v112 = *(_QWORD *)v108 <= *(_QWORD *)v105 ? v111 - v110 : v110 - v111;
              if ( v112 <= gliQpcFreq.QuadPart * v104 / 1000 )
                *(_DWORD *)(a2 + 1920) |= 0x40000u;
            }
            v108 += 272LL;
            --v109;
          }
          while ( v109 );
          v77 = 1;
        }
        v105 += 272LL;
        ++v106;
        --v107;
      }
      while ( v107 );
      v69 = a4;
      v53 = 0;
    }
  }
  v113 = *(_DWORD *)(a2 + 1920);
  if ( (v113 & 0x40000) != 0 && v137 == 1 )
    *(_DWORD *)(a2 + 1920) = v113 & 0xFFF3FFFF;
  v114 = *(_DWORD *)(a2 + 1664);
  if ( v114 != 3 && v114 != 6 && !*(_QWORD *)(a2 + 1912) && v137 >= 2 && (*(_DWORD *)(a2 + 1920) & 0x2000000) == 0 )
  {
    CacheGestureState((const struct tagPOINTERINPUTFRAME *)v69, (struct tagTPSTATE *)a2, a3, (unsigned __int64)a5);
    v136 = 1;
  }
  v115 = v138;
  if ( (*(_DWORD *)(a2 + 1920) & 0x800) != 0 )
  {
    if ( xxxProcess2FingerTap(
           *(struct tagPOINTERINFONODE **)(v69 + 88),
           (struct tagTPSTATE *)a2,
           v138,
           *(_DWORD *)(v69 + 40)) )
    {
      goto LABEL_279;
    }
  }
  v51 = 0;
LABEL_216:
  if ( !xxxDoTPDiscreteButtonProcessing((const struct tagPOINTERINPUTFRAME *)v69, (LARGE_INTEGER *)a2, &v150, &v151)
    || !(unsigned int)xxxDoTPButtonProcessing(
                        (const struct tagPOINTERINPUTFRAME *)v69,
                        (struct tagPOINT *)a2,
                        a3,
                        v51,
                        v9,
                        &v149) )
  {
    v120 = 1;
LABEL_281:
    v53 = 0;
    goto LABEL_282;
  }
  if ( v51 )
    return 1LL;
  v53 = 0;
  if ( !v149 && !v150 && !v151 || (v117 = *(_DWORD *)(a2 + 1664), v117 == 3) || v117 == 6 )
  {
    if ( !RevalidateTPDeviceState((unsigned __int64)a5, v100, v101, v102) )
      return 1LL;
    if ( !*(_DWORD *)(a2 + 1640) || *(_DWORD *)(a2 + 1664) == 1 )
      v77 = 0;
    if ( v115 || v141 || v142 || v77 || !v144 )
    {
      v119 = 0;
      v118 = 1;
    }
    else
    {
      v118 = 1;
      v119 = 1;
    }
    v102 = *(unsigned int *)(a2 + 1660);
    if ( (_DWORD)v102 != 2
      || *(_DWORD *)(a2 + 1664) == 3
      || (*(_DWORD *)(a2 + 1920) & 0x2000000) != 0
      || !v119
      || (v101 = 1LL, !v152) )
    {
      v101 = 0LL;
    }
    LOBYTE(v100) = 0;
    if ( (_DWORD)v102 == 2 && (v119 || (*(_DWORD *)(a2 + 1920) & 0x200000) != 0) )
      LOBYTE(v100) = 1;
    if ( *(_DWORD *)(a2 + 1664) == 3 )
      goto LABEL_253;
    if ( (_DWORD)v101 || (_BYTE)v100 )
    {
      MarkRecentlyDownedContactsAsNonResting((struct tagTPSTATE *)a2);
      v118 = 1;
      LOBYTE(v53) = *(_DWORD *)(a2 + 1660) == 2;
    }
    if ( *(_DWORD *)(a2 + 1664) == 3 || (_BYTE)v53 )
    {
LABEL_253:
      if ( (*(_DWORD *)(a2 + 1920) & 0x2000000) != 0 )
      {
        CacheGestureState((const struct tagPOINTERINPUTFRAME *)v69, (struct tagTPSTATE *)a2, a3, (unsigned __int64)a5);
        *(_DWORD *)(a2 + 1920) &= ~0x2000000u;
        v118 = 1;
        v136 = 1;
      }
      v120 = 3;
    }
    else
    {
      v120 = 1;
    }
    if ( (unsigned int)(*(_DWORD *)(a2 + 1660) - 3) <= 1
      && v120 != 3
      && !v138
      && !v141
      && !v142
      && GetPTPShellListener()
      && v153
      || *(_DWORD *)(a2 + 1664) == 6 )
    {
      MarkRecentlyDownedContactsAsNonResting((struct tagTPSTATE *)a2);
      v118 = 1;
      if ( *(_DWORD *)(a2 + 1664) == 1 )
      {
        CreateShellGestureFrame(
          (const struct tagPOINTERINPUTFRAME *)v69,
          (struct tagTPSTATE *)a2,
          a3,
          (unsigned __int64)a5);
        v118 = 1;
      }
      v120 = 6;
    }
    if ( v120 == 3 )
    {
      v121 = v136;
      xxxDoTPGestureProcessing(
        (const struct tagPOINTERINPUTFRAME *)v69,
        (struct tagTPSTATE *)a2,
        a3,
        a5,
        v136,
        v9,
        &v145);
      v53 = 0;
      goto LABEL_283;
    }
    if ( v120 == 6 )
    {
      xxxDoTPShellProcessing((const struct tagPOINTERINPUTFRAME *)v69, (LARGE_INTEGER *)a2, a3, a5, v9, &v145);
    }
    else if ( *(_DWORD *)(a2 + 1660) < 2u )
    {
      if ( !v138 )
      {
        v53 = 0;
        if ( !v141 && !v142 && !v77 )
          v120 = xxxDoTPMouseProcessing(v69, v9, a2);
        goto LABEL_282;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 1664) = v118;
    }
    goto LABEL_281;
  }
LABEL_279:
  v120 = 1;
LABEL_282:
  v121 = v136;
LABEL_283:
  if ( !RevalidateTPDeviceState((unsigned __int64)a5, v100, v101, v102) )
    return 1LL;
  v122 = *(_QWORD *)(v69 + 88);
  if ( *(_DWORD *)(v69 + 40) )
  {
    do
    {
      v123 = *(_WORD *)(v122 + 48);
      if ( v123 )
        UpdateTPContactState(
          (unsigned int)v123 % *(_DWORD *)(a2 + 1644),
          (struct tagTPSTATE *)a2,
          (struct tagPOINTERINFONODE *)v122);
      v122 += 216LL;
      ++v53;
    }
    while ( v53 < *(_DWORD *)(v69 + 40) );
    v9 = v137;
  }
  v124 = *(_DWORD *)(a2 + 1920);
  if ( (v124 & 1) == 0
    && (v124 & 4) == 0
    && (v124 & 8) == 0
    && !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)a2) )
  {
    zzzCancelInertiaState(v125, 0);
  }
  if ( __CFSHR__(*(_DWORD *)(a2 + 1920), 15) != v155 )
  {
    if ( __CFSHR__(*(_DWORD *)(a2 + 1920), 15) )
      EtwTracePTPElasticDragModeStart();
    else
      EtwTracePTPElasticDragModeStop();
  }
  if ( !*(_DWORD *)(a2 + 1660) )
    *(_DWORD *)(a2 + 1920) &= ~0x20000u;
  if ( *(_DWORD *)(a2 + 1664) != 2 )
    *(_DWORD *)(a2 + 1920) &= ~0x100000u;
  if ( !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)a2) )
  {
    v128 = a2 + 1640;
    v129 = *(_DWORD *)(a2 + 1640);
    v130 = v127 & *(_DWORD *)(a2 + 1920) & 0xFFFEFFFF;
    *(_DWORD *)(a2 + 1664) = 1;
    v131 = v130 & 0xB7F3FFFF;
    *(_DWORD *)(a2 + 1920) = v131;
    switch ( v129 )
    {
      case 0:
LABEL_311:
        v133 = v154;
        if ( v154 == 3 )
          CleanupGestureCache((struct tagTPSTATE *)a2, v126, v128);
        if ( v133 == 2 )
        {
          v134 = 272LL * *(unsigned int *)(a2 + 1632);
          if ( (*(_DWORD *)(v134 + a2 + 264) & 0x800) != 0
            && (__int64)((unsigned __int64)(1000LL * (*(_QWORD *)(v134 + a2 + 64) - *(_QWORD *)(v134 + a2 + 80)))
                       / gliQpcFreq.QuadPart) >= (unsigned int)dword_1C03290F4 )
          {
            *(_QWORD *)(a2 + 2088) = *(_QWORD *)(v134 + a2 + 64);
          }
        }
        if ( qword_1C0326CE8 > 0 )
        {
          if ( qword_1C0326CF0 )
          {
            qword_1C0326D00 = KeQueryPerformanceCounter(0LL).QuadPart;
            if ( dword_1C0326D30 >= 0 )
              qword_1C0326D28 = *(_QWORD *)(272LL * dword_1C0326D30 + a2 + 8);
          }
          else
          {
            qword_1C0326CF0 = KeQueryPerformanceCounter(0LL).QuadPart;
            qword_1C0326D00 = qword_1C0326CF0;
            if ( dword_1C0326D30 >= 0 )
              qword_1C0326D18 = *(_QWORD *)(272LL * dword_1C0326D30 + a2 + 8);
          }
          dword_1C0326D30 = -1;
        }
        goto LABEL_324;
      case 4:
        v132 = v131 & 0xFFFFFFEF;
        break;
      case 16:
        v132 = v131 & 0xFFFFFFDF;
        break;
      default:
LABEL_310:
        xxxSendMouseUpIfPending(
          (unsigned int *)(a2 + 1640),
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
        goto LABEL_311;
    }
    *(_DWORD *)(a2 + 1920) = v132;
    goto LABEL_310;
  }
LABEL_324:
  if ( v145 )
  {
    zzzCancelInertiaState((struct tagTPSTATE *)a2, 0);
    *(_DWORD *)(a2 + 1664) = 1;
  }
  if ( v120 == 3 && v121 )
    v120 = 1;
  *(_DWORD *)(a2 + 1648) = v9;
  v135 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / gliQpcFreq.QuadPart;
  if ( v135 - gmsLastTelemetrySentTime > 0xEA60 )
  {
    HandlePTPTelemetry();
    gmsLastTelemetrySentTime = v135;
  }
  return v120;
}
