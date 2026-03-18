/*
 * XREFs of ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4
 * Callers:
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4F58 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     HandlePTPTelemetry @ 0x1C014F8EC (HandlePTPTelemetry.c)
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01F0D44 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01F0EBC (-CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z.c)
 *     ?CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F0F68 (-CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1074 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?DoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@KPEAH@Z @ 0x1C01F1204 (-DoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?GetPTPShellListener@@YAPEAUtagWND@@XZ @ 0x1C01F1978 (-GetPTPShellListener@@YAPEAUtagWND@@XZ.c)
 *     ?HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01F199C (-HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01F1AF4 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?IsThisAGesture@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@Z @ 0x1C01F1BE8 (-IsThisAGesture@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@Z.c)
 *     ?PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F20D0 (-PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?RevalidateTPDeviceState@@YAHPEAX@Z @ 0x1C01F22BC (-RevalidateTPDeviceState@@YAHPEAX@Z.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01F273C (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 *     ?UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F2D84 (-UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z.c)
 *     ?UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01F31A4 (-UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01F3264 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 *     ?xxxCancelMouseUpTimer@@YAXH@Z @ 0x1C01F3510 (-xxxCancelMouseUpTimer@@YAXH@Z.c)
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01F3568 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01F4054 (-xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z.c)
 *     ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01F4690 (-xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4898 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01F6240 (-xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z.c)
 *     ?xxxProcess3and4FingerTap@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z @ 0x1C01F64C8 (-xxxProcess3and4FingerTap@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z.c)
 *     ?xxxSendMouseUpIfPending@@YAXPEAIK@Z @ 0x1C01F69E0 (-xxxSendMouseUpIfPending@@YAXPEAIK@Z.c)
 *     QueryInertia @ 0x1C0239B40 (QueryInertia.c)
 */

__int64 __fastcall xxxInternalTPProcessing(
        int a1,
        __int64 a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        __int64 a4,
        void *a5)
{
  int v5; // eax
  unsigned int v8; // r13d
  int v9; // r11d
  int v10; // r12d
  int v11; // r14d
  unsigned int v12; // r15d
  const struct INERTIA_INFO_INTERNAL *v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // edi
  int v16; // eax
  unsigned int v17; // eax
  int v18; // edi
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ecx
  _DWORD *v26; // rcx
  int v27; // edi
  __int64 v28; // r11
  struct tagPOINTER_INFO *v29; // r15
  struct tagPOINT *v30; // r14
  unsigned __int16 *v31; // r12
  __int64 v32; // rsi
  __int64 v33; // rdi
  int v34; // eax
  struct tagHID_POINTER_DEVICE_INFO *v35; // r9
  BOOL v36; // eax
  _DWORD *v37; // r8
  int v38; // edx
  unsigned int v39; // eax
  int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // esi
  __int64 v43; // r10
  unsigned __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // r8
  int v48; // eax
  int v49; // ecx
  int v50; // r8d
  int v51; // edi
  int v52; // ecx
  int v53; // r8d
  int v54; // ecx
  int v55; // edx
  int v56; // eax
  int v57; // esi
  unsigned int v58; // r10d
  __int64 v59; // r14
  unsigned __int64 v60; // r12
  unsigned __int64 v61; // r15
  int v62; // r13d
  __int64 v63; // rax
  __int64 v64; // r9
  int *v65; // rsi
  unsigned __int16 *v66; // r14
  unsigned int v67; // edx
  int v68; // r8d
  __int64 v69; // rdi
  int v70; // ecx
  int v71; // r11d
  int v72; // ecx
  int v73; // eax
  unsigned int v74; // ecx
  unsigned __int64 v75; // rax
  int v76; // r9d
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // r8
  int v80; // eax
  int v81; // r15d
  int v83; // eax
  int v84; // edi
  int v85; // ecx
  int v86; // ecx
  int v87; // edx
  unsigned int v88; // edi
  int v89; // r15d
  __int64 v90; // rdx
  unsigned int v91; // r10d
  __int64 i; // r8
  unsigned __int16 v93; // ax
  int v94; // eax
  struct tagTPSTATE *v95; // rcx
  __int64 v96; // rcx
  int v97; // r11d
  int v98; // eax
  int v99; // ecx
  unsigned int v100; // eax
  unsigned int v101; // eax
  __int64 v102; // rcx
  __int64 v103; // rbx
  int v104; // [rsp+48h] [rbp-61h]
  int v105; // [rsp+4Ch] [rbp-5Dh]
  int v106; // [rsp+50h] [rbp-59h]
  unsigned int v107; // [rsp+54h] [rbp-55h]
  _DWORD *v108; // [rsp+58h] [rbp-51h]
  __int64 v109; // [rsp+58h] [rbp-51h]
  int v110; // [rsp+60h] [rbp-49h]
  unsigned int v111; // [rsp+64h] [rbp-45h]
  int v112; // [rsp+68h] [rbp-41h]
  int v113; // [rsp+6Ch] [rbp-3Dh]
  int v114; // [rsp+70h] [rbp-39h]
  int v115; // [rsp+74h] [rbp-35h]
  int v116; // [rsp+78h] [rbp-31h]
  BOOL v117; // [rsp+7Ch] [rbp-2Dh]
  int v118; // [rsp+80h] [rbp-29h] BYREF
  __int64 v119; // [rsp+88h] [rbp-21h]
  __int64 v120; // [rsp+90h] [rbp-19h]
  int v121; // [rsp+98h] [rbp-11h] BYREF
  int v122; // [rsp+9Ch] [rbp-Dh]
  int v123; // [rsp+A0h] [rbp-9h] BYREF
  int v124; // [rsp+A4h] [rbp-5h] BYREF
  int v125; // [rsp+A8h] [rbp-1h] BYREF
  int v126; // [rsp+ACh] [rbp+3h]
  unsigned int v128; // [rsp+110h] [rbp+67h]

  v5 = *(_DWORD *)(a2 + 1544);
  v122 = 0;
  v113 = 0;
  v117 = 0;
  v8 = 0;
  v9 = 1;
  v128 = 0;
  v106 = 1;
  v10 = 0;
  v105 = 0;
  v11 = 0;
  LODWORD(v120) = 0;
  v12 = 0;
  v107 = 0;
  LODWORD(v119) = 0;
  v124 = 0;
  v123 = 0;
  v125 = 0;
  v104 = 0;
  v121 = 0;
  v118 = 0;
  v110 = 0;
  v111 = 0;
  if ( (v5 & 1) == 0
    && (v5 & 4) == 0
    && (v5 & 8) == 0
    && !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)a2) )
  {
    v13 = (const struct INERTIA_INFO_INTERNAL *)((__int64 (__fastcall *)(_QWORD, _QWORD))QueryInertia)(
                                                  gptCursorAsync,
                                                  0LL);
    if ( v13 )
      CacheInertiaInfo((struct tagPOINT *)a2, v13, a5);
    if ( qword_1C0323A88 > qword_1C0323A80 )
    {
      if ( gTPTelemTimings >= qword_1C0323A88 )
      {
        qword_1C0321C10 = KeQueryPerformanceCounter(0LL).QuadPart;
        dword_1C0321C24 = 0;
      }
      else
      {
        gTPTelemTimings = KeQueryPerformanceCounter(0LL);
      }
    }
    v9 = 1;
  }
  v14 = *(_QWORD *)(a4 + 72);
  v15 = *(_DWORD *)(a2 + 1544);
  v108 = (_DWORD *)(v14 + 68);
  v16 = *(_DWORD *)(v14 + 68);
  v112 = v9 & ((unsigned __int8)v16 >> 4);
  v114 = v9 & ((unsigned __int8)v16 >> 6);
  v115 = v9 & ((unsigned __int8)v16 >> 5);
  v17 = v15 >> 14;
  v15 &= ~0x4000u;
  *(_DWORD *)(a2 + 1544) = v15;
  v126 = v9 & v17;
  v116 = *(_DWORD *)(a2 + 1320);
  v18 = v9 & (v15 >> 15);
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x17uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) != 0 )
    {
      goto LABEL_15;
    }
  }
  else if ( !IsDPIDWMSysMet(v19)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v25 = 0)
           : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v25) )
  {
LABEL_15:
    if ( IsDPIDWMSysMet(0x17uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v22 = 0)
        : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v22) )
    {
      v26 = (_DWORD *)(gpsi + 2748LL);
    }
    else
    {
      v26 = (_DWORD *)(gpsi + 1972LL);
    }
    goto LABEL_31;
  }
  v26 = (_DWORD *)(gpsi + 2360LL);
LABEL_31:
  if ( v18 != *v26 )
    UpdatePTPRightClickZone((struct tagTPSTATE *)a2, a3, 0);
  if ( v116 == 1 )
    *(_DWORD *)(a2 + 1548) &= 0xFFFFFFFC;
  v27 = a1;
  v28 = 0LL;
  if ( a1 )
  {
    v59 = a4;
    v57 = 0;
    v81 = v112;
    goto LABEL_197;
  }
  if ( v112 || v115 || v114 )
    *(_DWORD *)(a2 + 1548) |= 4u;
  if ( !*(_DWORD *)(a4 + 24) )
  {
    v42 = 0;
    goto LABEL_87;
  }
  v29 = (struct tagPOINTER_INFO *)(v14 + 56);
  v30 = (struct tagPOINT *)(v14 + 96);
  v31 = (unsigned __int16 *)(v14 + 48);
  do
  {
    v32 = (unsigned int)*v31 % *(_DWORD *)(a2 + 1308);
    v33 = a2 + 216 * v32;
    if ( (*(_DWORD *)(v33 + 212) & 1) != 0 )
    {
      v35 = a3;
LABEL_47:
      v37 = v108;
      goto LABEL_48;
    }
    v34 = TPAAPShouldAllowNow(64, 0, 0, 0LL);
    v35 = a3;
    v28 = 0LL;
    if ( v34 )
      goto LABEL_47;
    v36 = PointInsideCurtainRegion(*v30, a3);
    v37 = v108;
    if ( v36 )
      *v108 = v28;
LABEL_48:
    if ( (*(_DWORD *)(v33 + 212) & 1) == 0
      && (*(_DWORD *)(a2 + 1544) & 0x40000000) != 0
      && (dword_1C0321F50 & 2) != 0
      && (*(_DWORD *)(a2 + 1548) & 4) == 0
      && !PtInRect((_DWORD *)(a2 + 1520), (unsigned __int64)*v30) )
    {
      *v37 = v28;
    }
    if ( *v37 != (_DWORD)v28 )
    {
      UpdateTPStateIndicator((struct tagTPCONTACTSTATE *)(a2 + 216 * v32), (struct tagTPSTATE *)a2, v29, v35, &v121);
      v28 = 0LL;
      v38 = 1;
      if ( (*(_DWORD *)(v33 + 212) & 2) != 0 )
      {
        ++v110;
        v111 = v32;
        if ( gTPTelemTimings > 0 && dword_1C0321C48 <= 0 )
        {
          dword_1C0321C48 = v32;
          if ( IsFirstActionAfterKey() )
            qword_1C0321C28 = *(_QWORD *)v33;
          else
            qword_1C0321C38 = *(_QWORD *)v33;
        }
      }
      v37 = v108;
      if ( (*v108 & 0x40000) == 0 )
      {
        v128 += v38;
        if ( (*(_DWORD *)(v33 + 212) & 0x80u) != 0 )
        {
          v39 = v107;
          LODWORD(v120) = v38 + v120;
          if ( (_DWORD)v120 == v38 )
            v39 = v32;
          v107 = v39;
          v40 = v119;
          if ( (_DWORD)v120 == 2 )
            v40 = v32;
          LODWORD(v119) = v40;
        }
        else
        {
          v105 += v38;
        }
      }
    }
    v31 += 108;
    v108 = v37 + 54;
    v30 += 27;
    v29 = (struct tagPOINTER_INFO *)((char *)v29 + 216);
    ++v8;
  }
  while ( v8 < *(_DWORD *)(a4 + 24) );
  v10 = v120;
  v41 = v128;
  if ( (_DWORD)v120 == 2 && v128 == 2 )
  {
    v42 = v107;
    v43 = a2 + 216LL * (unsigned int)v119;
    v44 = *(_QWORD *)(v43 + 40);
    v45 = a2 + 216LL * v107;
    v46 = *(_QWORD *)(v45 + 40);
    if ( v44 <= v46 )
      v47 = v46 - v44;
    else
      v47 = v44 - v46;
    if ( v47 <= 300 * gliQpcFreq.QuadPart / 1000 )
    {
      v48 = *(_DWORD *)(a2 + 1508);
      if ( *(_DWORD *)(v45 + 4) >= v48 && *(_DWORD *)(v43 + 4) >= v48 )
      {
        v49 = *(_QWORD *)v45 - *(_QWORD *)v43;
        v50 = HIDWORD(*(_QWORD *)v45) - HIDWORD(*(_QWORD *)v43);
        if ( v50 * v50 + v49 * v49 <= (unsigned __int64)(unsigned int)dword_1C0321F98 )
        {
          v10 = v28;
          *(_DWORD *)(v45 + 212) &= ~0x80u;
          *(_DWORD *)(v43 + 212) &= ~0x80u;
          *(_DWORD *)(v45 + 212) |= 0x200u;
          *(_DWORD *)(v43 + 212) |= 0x200u;
          *(_DWORD *)(a2 + 1544) |= 0x20000u;
          v105 += 2;
        }
      }
    }
    v41 = v128;
  }
  else
  {
    v42 = v107;
  }
  if ( v121 == (_DWORD)v28 || v41 != 1 )
  {
    v11 = v110;
    v12 = v111;
  }
  else
  {
    CancelInertiaState((struct tagTPSTATE *)a2, 0);
    v11 = v110;
    v28 = 0LL;
    v12 = v111;
  }
LABEL_87:
  if ( gidTapTimer != v28 && v11 )
  {
    if ( v11 != 1
      || (qword_1C0322020 & 0x400000000LL) == 0
      || (v51 = 1,
          v52 = *(_QWORD *)(a2 + 1376) - *(_QWORD *)(216LL * v12 + a2),
          v53 = HIDWORD(*(_QWORD *)(a2 + 1376)) - HIDWORD(*(_QWORD *)(216LL * v12 + a2)),
          v53 * v53 + v52 * v52 > (unsigned __int64)(unsigned int)(dword_1C0321F34 * dword_1C0321F34)) )
    {
      v51 = v28;
    }
    if ( guMouseUpPending == (_DWORD)v28 )
    {
LABEL_96:
      v54 = 1;
      if ( v51 )
        goto LABEL_97;
    }
    else
    {
      if ( !v51 )
      {
        *(_DWORD *)(a2 + 1544) &= ~0x10u;
        goto LABEL_96;
      }
LABEL_97:
      v54 = v28;
    }
    xxxCancelMouseUpTimer(v54);
    gbTapTimerFired = 0;
    if ( v51 )
    {
      *(_DWORD *)(a2 + 1304) = guMouseUpPending;
      guMouseUpPending = 0;
      *(_DWORD *)(216LL * v12 + a2 + 212) |= 0x4000u;
    }
  }
  v55 = v105;
  if ( *(_DWORD *)(a2 + 1320) == 1 )
  {
    v56 = *(_DWORD *)(a2 + 1304);
    if ( v56 )
    {
      if ( v105 > 1 )
      {
        if ( v56 == 4 )
        {
          *(_DWORD *)(a2 + 1544) &= ~0x10u;
        }
        else if ( v56 == 16 )
        {
          *(_DWORD *)(a2 + 1544) &= ~0x20u;
        }
        xxxSendMouseUpIfPending((unsigned int *)(a2 + 1304), *(_DWORD *)(a2 + 1420));
        v55 = v105;
      }
    }
  }
  if ( gidTapTimer && (v55 > 0 || v10 == 1 && (*(_DWORD *)(216LL * v42 + a2 + 212) & 4) != 0) )
  {
    v57 = 0;
    if ( guMouseUpPending )
      *(_DWORD *)(a2 + 1544) &= ~0x10u;
    xxxCancelMouseUpTimer(1);
    gbTapTimerFired = 0;
  }
  else
  {
    v57 = 0;
  }
  v58 = v128;
  if ( v128 > 2 )
    *(_DWORD *)(a2 + 1544) |= 0x40000u;
  v59 = a4;
  v60 = 0LL;
  v109 = 0LL;
  v61 = 0LL;
  v120 = 0LL;
  v62 = 0;
  v63 = *(_QWORD *)(a4 + 72);
  if ( *(_DWORD *)(a4 + 24) )
  {
    v64 = v116;
    v65 = (int *)(v63 + 68);
    v119 = v116;
    v66 = (unsigned __int16 *)(v63 + 48);
    while ( 1 )
    {
      v67 = (unsigned int)*v66 % *(_DWORD *)(a2 + 1308);
      v68 = *v65;
      v69 = a2 + 216LL * v67;
      if ( *v65 )
        break;
      v66 += 108;
      v65 += 54;
LABEL_176:
      if ( (unsigned int)++v62 >= *(_DWORD *)(a4 + 24) )
      {
        v59 = a4;
        v57 = 0;
        goto LABEL_178;
      }
    }
    if ( !v62 )
    {
      v61 = *(_QWORD *)(v69 + 40);
      v60 = v61;
    }
    v70 = *(_DWORD *)(v69 + 212);
    if ( (v70 & 4) != 0 && (*(_DWORD *)(a2 + 1320) != 2 || v67 != *(_DWORD *)(a2 + 1296)) )
    {
      v71 = v113;
      if ( (v70 & 0x80u) == 0 )
        v71 = 1;
      v122 = 1;
      v113 = v71;
    }
    v117 = (v70 & 0x40000) != 0 && (*(_DWORD *)(a2 + 1320) != 2 || v67 != *(_DWORD *)(a2 + 1296));
    if ( *(_DWORD *)(a2 + 1320) == 2
      && v67 == *(_DWORD *)(a2 + 1296)
      && ((v68 & 0x40000) != 0 || (v70 & 0x80u) != 0 && v58 > 1) )
    {
      *(_DWORD *)(a2 + 1544) &= ~0x8000000u;
      *(_DWORD *)(a2 + 1320) = 1;
    }
    v72 = *(_DWORD *)(a2 + 1304);
    if ( v72 )
    {
      if ( *(_DWORD *)(a2 + 1320) == 5 && (*v65 & 0x40000) == 0 && v58 == 1 )
      {
        v73 = *(_DWORD *)(v69 + 212);
        if ( (v73 & 0x80u) != 0 && (v73 & 4) == 0 && (v73 & 0x2000) == 0 && (v73 & 0x4000) == 0 )
        {
          *(_DWORD *)(a2 + 1320) = 1;
          if ( v72 == 4 )
          {
            *(_DWORD *)(a2 + 1544) &= ~0x10u;
          }
          else if ( v72 == 16 )
          {
            *(_DWORD *)(a2 + 1544) &= ~0x20u;
          }
          xxxSendMouseUpIfPending(
            (unsigned int *)(a2 + 1304),
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          v64 = v119;
          v58 = v128;
        }
      }
    }
    if ( (*(_DWORD *)(v69 + 212) & 0x40) == 0 || v64 == 3 || (*v65 & 0x40000) == 0 )
    {
      if ( *(_DWORD *)(a2 + 1320) == 2 )
      {
        if ( *(_QWORD *)(a2 + 1536) )
          goto LABEL_159;
LABEL_160:
        v58 = v128;
        if ( *(_DWORD *)(a2 + 1320) == 2 )
          *(_DWORD *)(a2 + 1544) |= 0x8000000u;
      }
      if ( v58 == 2 && (*(_DWORD *)(a2 + 1544) & 0x80000) == 0 && (*v65 & 0x40000) == 0 )
      {
        if ( v109 )
          v120 = v69;
        else
          v109 = v69;
      }
      v74 = *(_DWORD *)(a2 + 1312);
      if ( v74 - 3 <= 1 && v58 < v74 && (*(_DWORD *)(a2 + 1544) & 0x2000000) == 0 )
      {
        v75 = *(_QWORD *)(v69 + 40);
        if ( v75 > v61 )
          v61 = *(_QWORD *)(v69 + 40);
        if ( v75 < v60 )
          v60 = *(_QWORD *)(v69 + 40);
      }
      v64 = v119;
      v66 += 108;
      v65 += 54;
      goto LABEL_176;
    }
LABEL_159:
    CleanupGestureCache((struct tagTPSTATE *)a2, 0);
    goto LABEL_160;
  }
LABEL_178:
  v8 = v128;
  if ( (unsigned int)xxxProcess3and4FingerTap(
                       (const struct tagPOINTERINPUTFRAME *)v59,
                       (struct tagTPSTATE *)a2,
                       v128,
                       v60,
                       v61) )
    goto LABEL_256;
  if ( v128 == 2 )
  {
    v76 = *(_DWORD *)(a2 + 1544);
    if ( (v76 & 0x80000) == 0 )
    {
      v77 = *(_QWORD *)(v120 + 40);
      v78 = *(_QWORD *)(v109 + 40);
      v79 = v77 <= v78 ? v78 - v77 : v77 - v78;
      if ( v79 <= gliQpcFreq.QuadPart * (unsigned int)dword_1C0321F28 / 1000 )
        *(_DWORD *)(a2 + 1544) = v76 | 0x80000;
    }
  }
  v80 = *(_DWORD *)(a2 + 1544);
  if ( (v80 & 0x80000) != 0 && v128 == 1 )
    *(_DWORD *)(a2 + 1544) = v80 & 0xFFE7FFFF;
  if ( *(_DWORD *)(a2 + 1320) != 3 && !*(_QWORD *)(a2 + 1536) && v128 == 2 && (*(_DWORD *)(a2 + 1544) & 0x8000000) == 0 )
  {
    CacheGestureState((const struct tagPOINTERINPUTFRAME *)v59, (struct tagTPSTATE *)a2, a3, a5);
    v104 = 1;
  }
  v81 = v112;
  if ( (*(_DWORD *)(a2 + 1544) & 0x800) != 0 )
  {
    if ( (unsigned int)xxxProcess2FingerTap(
                         *(struct tagPOINTERINFONODE **)(v59 + 72),
                         (struct tagTPSTATE *)a2,
                         v112,
                         *(_DWORD *)(v59 + 24)) )
      goto LABEL_256;
  }
  v27 = 0;
LABEL_197:
  if ( !xxxDoTPDiscreteButtonProcessing((const struct tagPOINTERINPUTFRAME *)v59, (LARGE_INTEGER *)a2, &v123, &v125)
    || !(unsigned int)xxxDoTPButtonProcessing(
                        (const struct tagPOINTERINPUTFRAME *)v59,
                        (LARGE_INTEGER *)a2,
                        a3,
                        v27,
                        v8,
                        &v124) )
  {
    goto LABEL_256;
  }
  if ( v27 )
    return 1LL;
  if ( v124 || v123 || v125 )
  {
    v83 = *(_DWORD *)(a2 + 1320);
    if ( v83 != 3 && v83 != 6 )
    {
LABEL_256:
      v88 = 1;
      v89 = v104;
      goto LABEL_252;
    }
  }
  if ( !RevalidateTPDeviceState((unsigned __int64)a5) )
    return 1LL;
  if ( *(_DWORD *)(a2 + 1304) && *(_DWORD *)(a2 + 1320) != 1 )
    v57 = 1;
  if ( v81 || v115 || (v84 = 0, v114) )
    v84 = 1;
  v85 = 0;
  if ( v8 == 2 && !v84 && !v57 && v117 )
  {
    if ( *(_DWORD *)(a2 + 1320) != 3 )
    {
      if ( (*(_DWORD *)(a2 + 1544) & 0x8000000) == 0 )
        v85 = IsThisAGesture((const struct tagPOINTERINPUTFRAME *)v59, (struct tagTPSTATE *)a2);
      goto LABEL_222;
    }
LABEL_230:
    if ( (*(_DWORD *)(a2 + 1544) & 0x8000000) != 0 )
    {
      CacheGestureState((const struct tagPOINTERINPUTFRAME *)v59, (struct tagTPSTATE *)a2, a3, a5);
      *(_DWORD *)(a2 + 1544) &= ~0x8000000u;
      v104 = 1;
    }
    v86 = 3;
    v106 = 3;
LABEL_234:
    if ( v8 - 3 > 1 || v86 == 3 || v81 || v115 || v114 || !GetPTPShellListener() || v122 == v87 )
      goto LABEL_241;
    goto LABEL_242;
  }
LABEL_222:
  if ( *(_DWORD *)(a2 + 1320) == 3 || v85 )
    goto LABEL_230;
  if ( v8 != 2 )
  {
    v86 = 1;
    goto LABEL_234;
  }
  if ( v105 == 2 && (v113 && !v84 && !v57 || *(_QWORD *)(a2 + 1560)) )
    goto LABEL_230;
LABEL_241:
  if ( *(_DWORD *)(a2 + 1320) == 6 )
LABEL_242:
    v88 = 6;
  else
    v88 = v106;
  if ( v88 == 3 )
  {
    v89 = v104;
    xxxDoTPGestureProcessing((const struct tagPOINTERINPUTFRAME *)v59, (struct tagTPSTATE *)a2, a3, a5, v104, v8, &v118);
  }
  else
  {
    if ( v88 == 6 )
    {
      DoTPShellProcessing((const struct tagPOINTERINPUTFRAME *)v59, (struct tagTPSTATE *)a2, a3, v8, &v118);
    }
    else if ( v8 <= 2 )
    {
      if ( !v81 && !v57 )
        v88 = xxxDoTPMouseProcessing(v59, v8, a2);
    }
    else
    {
      *(_DWORD *)(a2 + 1320) = 1;
    }
    v89 = v104;
  }
LABEL_252:
  if ( !RevalidateTPDeviceState((unsigned __int64)a5) )
    return 1LL;
  v91 = 0;
  for ( i = *(_QWORD *)(v59 + 72); v91 < *(_DWORD *)(v59 + 24); ++v91 )
  {
    v93 = *(_WORD *)(i + 48);
    if ( v93 )
      UpdateTPContactState(
        (unsigned int)v93 % *(_DWORD *)(a2 + 1308),
        (struct tagTPSTATE *)a2,
        (struct tagPOINTERINFONODE *)i);
    i += 216LL;
  }
  v94 = *(_DWORD *)(a2 + 1544);
  if ( (v94 & 1) == 0
    && (v94 & 4) == 0
    && (v94 & 8) == 0
    && !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)a2) )
  {
    CancelInertiaState(v95, 0);
  }
  v96 = (unsigned int)-__CFSHR__(*(_DWORD *)(a2 + 1544), 15);
  if ( __CFSHR__(*(_DWORD *)(a2 + 1544), 15) != v126 )
  {
    if ( __CFSHR__(*(_DWORD *)(a2 + 1544), 15) )
      EtwTracePTPElasticDragModeStart(v96, v90, i);
    else
      EtwTracePTPElasticDragModeStop(v96, v90, i);
  }
  if ( !v105 )
    *(_DWORD *)(a2 + 1544) &= ~0x40000u;
  if ( *(_DWORD *)(a2 + 1320) != 2 )
    *(_DWORD *)(a2 + 1544) &= ~0x200000u;
  if ( !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)a2) )
  {
    v98 = *(_DWORD *)(a2 + 1544);
    *(_DWORD *)(a2 + 1548) &= ~4u;
    v99 = *(_DWORD *)(a2 + 1304);
    *(_DWORD *)(a2 + 1320) = 1;
    v100 = v97 & v98 & 0xFFFEFFFF & 0xDFE7FFFF;
    *(_DWORD *)(a2 + 1544) = v100;
    if ( v99 )
    {
      if ( v99 == 4 )
      {
        v101 = v100 & 0xFFFFFFEF;
        goto LABEL_280;
      }
      if ( v99 == 16 )
      {
        v101 = v100 & 0xFFFFFFDF;
LABEL_280:
        *(_DWORD *)(a2 + 1544) = v101;
      }
      xxxSendMouseUpIfPending(
        (unsigned int *)(a2 + 1304),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    }
    if ( v116 == 3 )
      CleanupGestureCache((struct tagTPSTATE *)a2, 0);
    if ( v116 == 2 )
    {
      v102 = 216LL * *(unsigned int *)(a2 + 1296);
      if ( (*(_DWORD *)(v102 + a2 + 212) & 0x800) != 0
        && (__int64)((unsigned __int64)(1000LL * (*(_QWORD *)(v102 + a2 + 48) - *(_QWORD *)(v102 + a2 + 64)))
                   / gliQpcFreq.QuadPart) >= (unsigned int)dword_1C0323A64 )
      {
        *(_QWORD *)(a2 + 1584) = *(_QWORD *)(v102 + a2 + 48);
      }
    }
    if ( gTPTelemTimings > 0 )
    {
      if ( qword_1C0321C08 )
      {
        qword_1C0321C18 = KeQueryPerformanceCounter(0LL).QuadPart;
        if ( dword_1C0321C48 >= 0 )
          qword_1C0321C40 = *(_QWORD *)(216LL * dword_1C0321C48 + a2 + 8);
      }
      else
      {
        qword_1C0321C08 = KeQueryPerformanceCounter(0LL).QuadPart;
        qword_1C0321C18 = qword_1C0321C08;
        if ( dword_1C0321C48 >= 0 )
          qword_1C0321C30 = *(_QWORD *)(216LL * dword_1C0321C48 + a2 + 8);
      }
      dword_1C0321C48 = -1;
    }
  }
  if ( v118 )
  {
    CancelInertiaState((struct tagTPSTATE *)a2, 0);
    *(_DWORD *)(a2 + 1320) = 1;
  }
  if ( v88 == 3 && v89 )
    v88 = 1;
  *(_DWORD *)(a2 + 1312) = v8;
  v103 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / gliQpcFreq.QuadPart;
  if ( v103 - gmsLastTelemetrySentTime > 0xEA60 )
  {
    HandlePTPTelemetry();
    gmsLastTelemetrySentTime = v103;
  }
  return v88;
}
