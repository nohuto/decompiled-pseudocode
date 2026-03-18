/*
 * XREFs of ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4
 * Callers:
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4B44 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     HandlePTPTelemetry @ 0x1C01319BC (HandlePTPTelemetry.c)
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01F0DE4 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01F0F5C (-CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z.c)
 *     ?CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1008 (-CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1114 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?DoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@KPEAH@Z @ 0x1C01F1214 (-DoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?GetPTPShellListener@@YAPEAUtagWND@@XZ @ 0x1C01F1828 (-GetPTPShellListener@@YAPEAUtagWND@@XZ.c)
 *     ?HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01F184C (-HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01F1948 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?IsThisAGesture@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@Z @ 0x1C01F1A3C (-IsThisAGesture@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@Z.c)
 *     ?RevalidateTPDeviceState@@YAHPEAX@Z @ 0x1C01F2010 (-RevalidateTPDeviceState@@YAHPEAX@Z.c)
 *     ?UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F2AAC (-UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z.c)
 *     ?UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01F2E7C (-UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01F2F3C (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 *     ?xxxCancelMouseUpTimer@@YAXH@Z @ 0x1C01F31E0 (-xxxCancelMouseUpTimer@@YAXH@Z.c)
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01F3238 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01F3CDC (-xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z.c)
 *     ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01F4330 (-xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4538 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01F5D68 (-xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z.c)
 *     ?xxxProcess3and4FingerTap@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z @ 0x1C01F5FF4 (-xxxProcess3and4FingerTap@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z.c)
 *     ?xxxSendMouseUpIfPending@@YAXPEAI_K@Z @ 0x1C01F6500 (-xxxSendMouseUpIfPending@@YAXPEAI_K@Z.c)
 *     QueryInertia @ 0x1C023995C (QueryInertia.c)
 */

__int64 __fastcall xxxInternalTPProcessing(
        int a1,
        __int64 a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        __int64 a4,
        void *a5)
{
  int v5; // eax
  unsigned int v8; // r12d
  int v9; // r11d
  int v10; // r15d
  int v11; // esi
  const struct INERTIA_INFO_INTERNAL *v12; // rax
  __int64 v13; // r14
  unsigned int v14; // edi
  _DWORD *v15; // r13
  int v16; // eax
  unsigned int v17; // eax
  int v18; // edi
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rcx
  _DWORD *v26; // rcx
  int v27; // edi
  __int64 v28; // r11
  struct tagPOINTER_INFO *v29; // r15
  unsigned __int16 *v30; // r14
  __int64 v31; // rsi
  __int64 v32; // rdi
  int v33; // edx
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // r14d
  __int64 v38; // r10
  unsigned __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r8
  int v43; // eax
  int v44; // ecx
  int v45; // r8d
  unsigned int v46; // esi
  int v47; // ecx
  int v48; // r8d
  int v49; // edi
  int v50; // ecx
  int v51; // edx
  int v52; // eax
  unsigned int v53; // r10d
  __int64 v54; // r15
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // r14
  int v57; // r13d
  __int64 v58; // rax
  __int64 v59; // r9
  int *v60; // rsi
  unsigned __int16 *v61; // r15
  unsigned int v62; // edx
  int v63; // r8d
  __int64 v64; // rdi
  int v65; // ecx
  int v66; // r11d
  int v67; // ecx
  int v68; // eax
  unsigned int v69; // ecx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // r9
  int v72; // r9d
  unsigned __int64 v73; // r8
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // r8
  int v76; // eax
  int v77; // r13d
  int v79; // eax
  int v80; // esi
  int v81; // edi
  int v82; // ecx
  int v83; // ecx
  int v84; // edx
  unsigned int v85; // edi
  int v86; // esi
  __int64 v87; // rdx
  unsigned int v88; // r10d
  __int64 i; // r8
  unsigned __int16 v90; // ax
  int v91; // eax
  struct tagTPSTATE *v92; // rcx
  __int64 v93; // rcx
  int v94; // r11d
  int v95; // ecx
  unsigned int v96; // eax
  unsigned int v97; // eax
  unsigned int v98; // eax
  int v99; // r14d
  __int64 v100; // rcx
  __int64 v101; // rbx
  int v102; // [rsp+48h] [rbp-61h]
  int v103; // [rsp+4Ch] [rbp-5Dh]
  int v104; // [rsp+50h] [rbp-59h]
  unsigned int v105; // [rsp+54h] [rbp-55h]
  int v106; // [rsp+58h] [rbp-51h]
  int v107; // [rsp+5Ch] [rbp-4Dh]
  int v108; // [rsp+60h] [rbp-49h]
  BOOL v109; // [rsp+64h] [rbp-45h]
  unsigned int v110; // [rsp+68h] [rbp-41h]
  __int64 v111; // [rsp+68h] [rbp-41h]
  unsigned int v112; // [rsp+70h] [rbp-39h]
  __int64 v113; // [rsp+70h] [rbp-39h]
  int v114; // [rsp+78h] [rbp-31h] BYREF
  __int64 v115; // [rsp+80h] [rbp-29h]
  int v116; // [rsp+88h] [rbp-21h] BYREF
  int v117; // [rsp+8Ch] [rbp-1Dh]
  int v118; // [rsp+90h] [rbp-19h]
  int v119; // [rsp+94h] [rbp-15h] BYREF
  int v120; // [rsp+98h] [rbp-11h]
  int v121; // [rsp+9Ch] [rbp-Dh] BYREF
  int v122; // [rsp+A0h] [rbp-9h]
  int v123; // [rsp+A4h] [rbp-5h] BYREF
  int v124; // [rsp+A8h] [rbp-1h]
  unsigned int v126; // [rsp+110h] [rbp+67h]

  v5 = *(_DWORD *)(a2 + 1264);
  v120 = 0;
  v107 = 0;
  v109 = 0;
  v8 = 0;
  v9 = 1;
  v126 = 0;
  v104 = 1;
  v10 = 0;
  v103 = 0;
  v11 = 0;
  LODWORD(v115) = 0;
  v105 = 0;
  v110 = 0;
  v116 = 0;
  v119 = 0;
  v123 = 0;
  v102 = 0;
  v121 = 0;
  v114 = 0;
  v106 = 0;
  v112 = 0;
  if ( (v5 & 1) == 0
    && (v5 & 4) == 0
    && (v5 & 8) == 0
    && !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)a2) )
  {
    v12 = (const struct INERTIA_INFO_INTERNAL *)((__int64 (__fastcall *)(_QWORD, _QWORD))QueryInertia)(
                                                  gptCursorAsync,
                                                  0LL);
    if ( v12 )
      CacheInertiaInfo((struct tagPOINT *)a2, v12, a5);
    if ( qword_1C0322DF8 > qword_1C0322DF0 )
    {
      if ( gTPTelemTimings >= qword_1C0322DF8 )
      {
        qword_1C0321BC0 = KeQueryPerformanceCounter(0LL).QuadPart;
        dword_1C0321BD4 = 0;
      }
      else
      {
        gTPTelemTimings = KeQueryPerformanceCounter(0LL);
      }
    }
    v9 = 1;
  }
  v13 = *(_QWORD *)(a4 + 72);
  v14 = *(_DWORD *)(a2 + 1264);
  v15 = (_DWORD *)(v13 + 68);
  v16 = *(_DWORD *)(v13 + 68);
  v108 = v9 & ((unsigned __int8)v16 >> 4);
  v118 = v9 & ((unsigned __int8)v16 >> 6);
  v117 = v9 & ((unsigned __int8)v16 >> 5);
  v17 = v14 >> 14;
  v14 &= ~0x4000u;
  *(_DWORD *)(a2 + 1264) = v14;
  v124 = v9 & v17;
  v122 = *(_DWORD *)(a2 + 1080);
  v18 = v9 & (v14 >> 15);
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x17uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) != 0 )
    {
      goto LABEL_15;
    }
LABEL_26:
    v26 = (_DWORD *)(gpsi + 2360LL);
    goto LABEL_31;
  }
  if ( IsDPIDWMSysMet(v19)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_26;
  }
LABEL_15:
  if ( IsDPIDWMSysMet(0x17uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v22 = 0)
      : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v22) )
  {
    v26 = (_DWORD *)(gpsi + 2748LL);
  }
  else
  {
    v26 = (_DWORD *)(gpsi + 1972LL);
  }
LABEL_31:
  if ( v18 != *v26 )
    UpdatePTPRightClickZone((struct tagTPSTATE *)a2, a3, 0);
  v27 = a1;
  v28 = 0LL;
  if ( a1 )
  {
    v54 = a4;
    v77 = v108;
    goto LABEL_180;
  }
  if ( *(_DWORD *)(a4 + 24) )
  {
    v29 = (struct tagPOINTER_INFO *)(v13 + 56);
    v30 = (unsigned __int16 *)(v13 + 48);
    do
    {
      v31 = (unsigned int)*v30 % *(_DWORD *)(a2 + 1068);
      v32 = a2 + 176 * v31;
      if ( *v15 != (_DWORD)v28 )
      {
        UpdateTPStateIndicator((struct tagTPCONTACTSTATE *)(a2 + 176 * v31), (struct tagTPSTATE *)a2, v29, a3, &v121);
        v28 = 0LL;
        v33 = 1;
        if ( (*(_DWORD *)(v32 + 168) & 2) != 0 )
        {
          ++v106;
          v112 = v31;
          if ( gTPTelemTimings > 0 && dword_1C0321BF8 <= 0 )
          {
            dword_1C0321BF8 = v31;
            if ( IsFirstActionAfterKey() )
              qword_1C0321BD8 = *(_QWORD *)v32;
            else
              qword_1C0321BE8 = *(_QWORD *)v32;
          }
        }
        if ( (*v15 & 0x40000) == 0 )
        {
          v126 += v33;
          if ( (*(_DWORD *)(v32 + 168) & 0x80u) != 0 )
          {
            v34 = v105;
            LODWORD(v115) = v33 + v115;
            if ( (_DWORD)v115 == v33 )
              v34 = v31;
            v105 = v34;
            v35 = v110;
            if ( (_DWORD)v115 == 2 )
              v35 = v31;
            v110 = v35;
          }
          else
          {
            v103 += v33;
          }
        }
      }
      v30 += 108;
      v29 = (struct tagPOINTER_INFO *)((char *)v29 + 216);
      v15 += 54;
      ++v8;
    }
    while ( v8 < *(_DWORD *)(a4 + 24) );
    v10 = v115;
    v36 = v126;
    if ( (_DWORD)v115 == 2 && v126 == 2 )
    {
      v37 = v105;
      v38 = a2 + 176LL * v110;
      v39 = *(_QWORD *)(v38 + 40);
      v40 = a2 + 176LL * v105;
      v41 = *(_QWORD *)(v40 + 40);
      if ( v39 <= v41 )
        v42 = v41 - v39;
      else
        v42 = v39 - v41;
      if ( v42 <= 300 * gliQpcFreq.QuadPart / 1000 )
      {
        v43 = *(_DWORD *)(a2 + 1244);
        if ( *(_DWORD *)(v40 + 4) >= v43 && *(_DWORD *)(v38 + 4) >= v43 )
        {
          v44 = *(_QWORD *)v40 - *(_QWORD *)v38;
          v45 = HIDWORD(*(_QWORD *)v40) - HIDWORD(*(_QWORD *)v38);
          if ( v45 * v45 + v44 * v44 <= (unsigned __int64)(unsigned int)dword_1C03236E8 )
          {
            v10 = v28;
            *(_DWORD *)(v40 + 168) &= ~0x80u;
            *(_DWORD *)(v38 + 168) &= ~0x80u;
            *(_DWORD *)(v40 + 168) |= 0x200u;
            *(_DWORD *)(v38 + 168) |= 0x200u;
            *(_DWORD *)(a2 + 1264) |= 0x20000u;
            v103 += 2;
          }
        }
      }
      v36 = v126;
    }
    else
    {
      v37 = v105;
    }
    if ( v121 == (_DWORD)v28 || v36 != 1 )
    {
      v11 = v106;
    }
    else
    {
      CancelInertiaState((struct tagTPSTATE *)a2, 0);
      v11 = v106;
      v28 = 0LL;
    }
  }
  else
  {
    v37 = 0;
  }
  if ( gidTapTimer != v28 && v11 )
  {
    if ( v11 == 1 && (qword_1C0323098 & 0x400000000LL) != 0 )
    {
      v46 = v112;
      v47 = *(_QWORD *)(a2 + 1136) - *(_QWORD *)(176LL * v112 + a2);
      v48 = HIDWORD(*(_QWORD *)(a2 + 1136)) - HIDWORD(*(_QWORD *)(176LL * v112 + a2));
      if ( v48 * v48 + v47 * v47 <= (unsigned __int64)(unsigned int)(dword_1C03236D4 * dword_1C03236D4) )
      {
        v49 = 1;
        goto LABEL_77;
      }
    }
    else
    {
      v46 = v112;
    }
    v49 = v28;
LABEL_77:
    if ( guMouseUpPending != (_DWORD)v28 )
    {
      if ( v49 )
      {
LABEL_81:
        v50 = v28;
LABEL_82:
        xxxCancelMouseUpTimer(v50);
        gbTapTimerFired = 0;
        if ( v49 )
        {
          *(_DWORD *)(a2 + 1064) = guMouseUpPending;
          guMouseUpPending = 0;
          *(_DWORD *)(176LL * v46 + a2 + 168) |= 0x4000u;
        }
        goto LABEL_84;
      }
      *(_DWORD *)(a2 + 1264) &= ~0x10u;
    }
    v50 = 1;
    if ( !v49 )
      goto LABEL_82;
    goto LABEL_81;
  }
LABEL_84:
  v51 = v103;
  if ( *(_DWORD *)(a2 + 1080) == 1 )
  {
    v52 = *(_DWORD *)(a2 + 1064);
    if ( v52 )
    {
      if ( v103 > 1 )
      {
        if ( v52 == 4 )
        {
          *(_DWORD *)(a2 + 1264) &= ~0x10u;
        }
        else if ( v52 == 16 )
        {
          *(_DWORD *)(a2 + 1264) &= ~0x20u;
        }
        xxxSendMouseUpIfPending((unsigned int *)(a2 + 1064), *(_QWORD *)(a2 + 1184));
        v51 = v103;
      }
    }
  }
  if ( gidTapTimer && (v51 > 0 || v10 == 1 && (*(_DWORD *)(176LL * v37 + a2 + 168) & 4) != 0) )
  {
    if ( guMouseUpPending )
      *(_DWORD *)(a2 + 1264) &= ~0x10u;
    xxxCancelMouseUpTimer(1);
    gbTapTimerFired = 0;
  }
  v53 = v126;
  if ( v126 > 2 )
    *(_DWORD *)(a2 + 1264) |= 0x40000u;
  v54 = a4;
  v55 = 0LL;
  v111 = 0LL;
  v56 = 0LL;
  v113 = 0LL;
  v57 = 0;
  v58 = *(_QWORD *)(a4 + 72);
  if ( *(_DWORD *)(a4 + 24) )
  {
    v59 = v122;
    v60 = (int *)(v58 + 68);
    v115 = v122;
    v61 = (unsigned __int16 *)(v58 + 48);
    while ( 1 )
    {
      v62 = (unsigned int)*v61 % *(_DWORD *)(a2 + 1068);
      v63 = *v60;
      v64 = a2 + 176LL * v62;
      if ( *v60 )
        break;
      v61 += 108;
      v60 += 54;
LABEL_159:
      if ( (unsigned int)++v57 >= *(_DWORD *)(a4 + 24) )
      {
        v54 = a4;
        goto LABEL_161;
      }
    }
    if ( !v57 )
    {
      v56 = *(_QWORD *)(v64 + 40);
      v55 = v56;
    }
    v65 = *(_DWORD *)(v64 + 168);
    if ( (v65 & 4) != 0 && (*(_DWORD *)(a2 + 1080) != 2 || v62 != *(_DWORD *)(a2 + 1056)) )
    {
      v66 = v107;
      if ( (v65 & 0x80u) == 0 )
        v66 = 1;
      v120 = 1;
      v107 = v66;
    }
    v109 = (v65 & 0x40000) != 0 && (*(_DWORD *)(a2 + 1080) != 2 || v62 != *(_DWORD *)(a2 + 1056));
    if ( *(_DWORD *)(a2 + 1080) == 2
      && v62 == *(_DWORD *)(a2 + 1056)
      && ((v63 & 0x40000) != 0 || (v65 & 0x80u) != 0 && v53 > 1) )
    {
      *(_DWORD *)(a2 + 1264) &= ~0x4000000u;
      *(_DWORD *)(a2 + 1080) = 1;
    }
    v67 = *(_DWORD *)(a2 + 1064);
    if ( v67 )
    {
      if ( *(_DWORD *)(a2 + 1080) == 5 && (*v60 & 0x40000) == 0 && v53 == 1 )
      {
        v68 = *(_DWORD *)(v64 + 168);
        if ( (v68 & 0x80u) != 0 && (v68 & 4) == 0 && (v68 & 0x2000) == 0 && (v68 & 0x4000) == 0 )
        {
          *(_DWORD *)(a2 + 1080) = 1;
          if ( v67 == 4 )
          {
            *(_DWORD *)(a2 + 1264) &= ~0x10u;
          }
          else if ( v67 == 16 )
          {
            *(_DWORD *)(a2 + 1264) &= ~0x20u;
          }
          xxxSendMouseUpIfPending(
            (unsigned int *)(a2 + 1064),
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
          v59 = v115;
          v53 = v126;
        }
      }
    }
    if ( (*(_DWORD *)(v64 + 168) & 0x40) != 0 && v59 != 3 && (*v60 & 0x40000) != 0 )
      goto LABEL_142;
    if ( *(_DWORD *)(a2 + 1080) != 2 )
    {
LABEL_145:
      if ( v53 == 2 && (*(_DWORD *)(a2 + 1264) & 0x80000) == 0 && (*v60 & 0x40000) == 0 )
      {
        if ( v111 )
          v113 = v64;
        else
          v111 = v64;
      }
      v69 = *(_DWORD *)(a2 + 1072);
      if ( v69 - 3 <= 1 && v53 < v69 && (*(_DWORD *)(a2 + 1264) & 0x2000000) == 0 )
      {
        v70 = *(_QWORD *)(v64 + 40);
        if ( v70 > v56 )
          v56 = *(_QWORD *)(v64 + 40);
        if ( v70 < v55 )
          v55 = *(_QWORD *)(v64 + 40);
      }
      v59 = v115;
      v61 += 108;
      v60 += 54;
      goto LABEL_159;
    }
    if ( *(_QWORD *)(a2 + 1256) )
LABEL_142:
      CleanupGestureCache((struct tagTPSTATE *)a2, 0);
    v53 = v126;
    if ( *(_DWORD *)(a2 + 1080) == 2 )
      *(_DWORD *)(a2 + 1264) |= 0x4000000u;
    goto LABEL_145;
  }
LABEL_161:
  v71 = v55;
  v8 = v126;
  if ( (unsigned int)xxxProcess3and4FingerTap(
                       (const struct tagPOINTERINPUTFRAME *)v54,
                       (struct tagTPSTATE *)a2,
                       v126,
                       v71,
                       v56) )
    goto LABEL_239;
  if ( v126 == 2 )
  {
    v72 = *(_DWORD *)(a2 + 1264);
    if ( (v72 & 0x80000) == 0 )
    {
      v73 = *(_QWORD *)(v113 + 40);
      v74 = *(_QWORD *)(v111 + 40);
      v75 = v73 <= v74 ? v74 - v73 : v73 - v74;
      if ( v75 <= gliQpcFreq.QuadPart * (unsigned int)dword_1C03236C8 / 1000 )
        *(_DWORD *)(a2 + 1264) = v72 | 0x80000;
    }
  }
  v76 = *(_DWORD *)(a2 + 1264);
  if ( (v76 & 0x80000) != 0 && v126 == 1 )
    *(_DWORD *)(a2 + 1264) = v76 & 0xFFE7FFFF;
  if ( *(_DWORD *)(a2 + 1080) != 3 && !*(_QWORD *)(a2 + 1256) && v126 == 2 && (*(_DWORD *)(a2 + 1264) & 0x4000000) == 0 )
  {
    CacheGestureState((const struct tagPOINTERINPUTFRAME *)v54, (struct tagTPSTATE *)a2, a3, a5);
    v102 = 1;
  }
  v77 = v108;
  if ( (*(_DWORD *)(a2 + 1264) & 0x800) != 0 )
  {
    if ( (unsigned int)xxxProcess2FingerTap(
                         *(struct tagPOINTERINFONODE **)(v54 + 72),
                         (struct tagTPSTATE *)a2,
                         v108,
                         *(_DWORD *)(v54 + 24)) )
    {
LABEL_239:
      v85 = 1;
LABEL_234:
      v86 = v102;
      goto LABEL_235;
    }
  }
  v27 = 0;
LABEL_180:
  if ( !xxxDoTPDiscreteButtonProcessing((const struct tagPOINTERINPUTFRAME *)v54, (LARGE_INTEGER *)a2, &v119, &v123)
    || !(unsigned int)xxxDoTPButtonProcessing(
                        (const struct tagPOINTERINPUTFRAME *)v54,
                        (LARGE_INTEGER *)a2,
                        a3,
                        v27,
                        v8,
                        &v116) )
  {
    goto LABEL_239;
  }
  if ( v27 )
    return 1LL;
  if ( v116 || v119 || v123 )
  {
    v79 = *(_DWORD *)(a2 + 1080);
    if ( v79 != 3 && v79 != 6 )
      goto LABEL_239;
  }
  if ( !RevalidateTPDeviceState((unsigned __int64)a5) )
    return 1LL;
  if ( !*(_DWORD *)(a2 + 1064) || (v80 = 1, *(_DWORD *)(a2 + 1080) == 1) )
    v80 = 0;
  if ( v77 || v117 || (v81 = 0, v118) )
    v81 = 1;
  v82 = 0;
  if ( v8 == 2 && !v81 && !v80 && v109 )
  {
    if ( *(_DWORD *)(a2 + 1080) == 3 )
      goto LABEL_213;
    if ( (*(_DWORD *)(a2 + 1264) & 0x4000000) == 0 )
      v82 = IsThisAGesture((const struct tagPOINTERINPUTFRAME *)v54, (struct tagTPSTATE *)a2);
  }
  if ( *(_DWORD *)(a2 + 1080) != 3 && !v82 )
  {
    if ( v8 != 2 )
    {
      v83 = 1;
      goto LABEL_217;
    }
    if ( v103 != 2 || (!v107 || v81 || v80) && !*(_QWORD *)(a2 + 1272) )
      goto LABEL_224;
  }
LABEL_213:
  if ( (*(_DWORD *)(a2 + 1264) & 0x4000000) != 0 )
  {
    CacheGestureState((const struct tagPOINTERINPUTFRAME *)v54, (struct tagTPSTATE *)a2, a3, a5);
    *(_DWORD *)(a2 + 1264) &= ~0x4000000u;
    v102 = 1;
  }
  v83 = 3;
  v104 = 3;
LABEL_217:
  if ( v8 - 3 <= 1 && v83 != 3 && !v77 && !v117 && !v118 && GetPTPShellListener() && v120 != v84 )
    goto LABEL_225;
LABEL_224:
  if ( *(_DWORD *)(a2 + 1080) == 6 )
  {
LABEL_225:
    v85 = 6;
    goto LABEL_227;
  }
  v85 = v104;
LABEL_227:
  if ( v85 != 3 )
  {
    if ( v85 == 6 )
    {
      DoTPShellProcessing((const struct tagPOINTERINPUTFRAME *)v54, (struct tagTPSTATE *)a2, a3, v8, &v114);
    }
    else if ( v8 <= 2 )
    {
      if ( !v77 && !v80 )
        v85 = xxxDoTPMouseProcessing(v54, v8, a2);
    }
    else
    {
      *(_DWORD *)(a2 + 1080) = 1;
    }
    goto LABEL_234;
  }
  v86 = v102;
  xxxDoTPGestureProcessing((const struct tagPOINTERINPUTFRAME *)v54, (struct tagTPSTATE *)a2, a3, a5, v102, v8, &v114);
LABEL_235:
  if ( !RevalidateTPDeviceState((unsigned __int64)a5) )
    return 1LL;
  v88 = 0;
  for ( i = *(_QWORD *)(v54 + 72); v88 < *(_DWORD *)(v54 + 24); ++v88 )
  {
    v90 = *(_WORD *)(i + 48);
    if ( v90 )
      UpdateTPContactState(
        (unsigned int)v90 % *(_DWORD *)(a2 + 1068),
        (struct tagTPSTATE *)a2,
        (struct tagPOINTERINFONODE *)i);
    i += 216LL;
  }
  v91 = *(_DWORD *)(a2 + 1264);
  if ( (v91 & 1) == 0
    && (v91 & 4) == 0
    && (v91 & 8) == 0
    && !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)a2) )
  {
    CancelInertiaState(v92, 0);
  }
  v93 = (unsigned int)-__CFSHR__(*(_DWORD *)(a2 + 1264), 15);
  if ( __CFSHR__(*(_DWORD *)(a2 + 1264), 15) != v124 )
  {
    if ( __CFSHR__(*(_DWORD *)(a2 + 1264), 15) )
      EtwTracePTPElasticDragModeStart(v93, v87, i);
    else
      EtwTracePTPElasticDragModeStop(v93, v87, i);
  }
  if ( !v103 )
    *(_DWORD *)(a2 + 1264) &= ~0x40000u;
  if ( *(_DWORD *)(a2 + 1080) != 2 )
    *(_DWORD *)(a2 + 1264) &= ~0x200000u;
  if ( !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)a2) )
  {
    v95 = *(_DWORD *)(a2 + 1064);
    v96 = v94 & *(_DWORD *)(a2 + 1264) & 0xFFFEFFFF;
    *(_DWORD *)(a2 + 1080) = 1;
    v97 = v96 & 0xFFE7FFFF;
    *(_DWORD *)(a2 + 1264) = v97;
    switch ( v95 )
    {
      case 0:
LABEL_265:
        v99 = v122;
        if ( v122 == 3 )
          CleanupGestureCache((struct tagTPSTATE *)a2, 0);
        if ( v99 == 2 )
        {
          v100 = 176LL * *(unsigned int *)(a2 + 1056);
          if ( (*(_DWORD *)(v100 + a2 + 168) & 0x800) != 0
            && (__int64)((unsigned __int64)(1000LL * (*(_QWORD *)(v100 + a2 + 48) - *(_QWORD *)(v100 + a2 + 64)))
                       / gliQpcFreq.QuadPart) >= (unsigned int)dword_1C0322DE4 )
          {
            *(_QWORD *)(a2 + 1296) = *(_QWORD *)(v100 + a2 + 48);
          }
        }
        if ( gTPTelemTimings > 0 )
        {
          if ( qword_1C0321BB8 )
          {
            qword_1C0321BC8 = KeQueryPerformanceCounter(0LL).QuadPart;
            if ( dword_1C0321BF8 >= 0 )
              qword_1C0321BF0 = *(_QWORD *)(176LL * dword_1C0321BF8 + a2 + 8);
          }
          else
          {
            qword_1C0321BB8 = KeQueryPerformanceCounter(0LL).QuadPart;
            qword_1C0321BC8 = qword_1C0321BB8;
            if ( dword_1C0321BF8 >= 0 )
              qword_1C0321BE0 = *(_QWORD *)(176LL * dword_1C0321BF8 + a2 + 8);
          }
          dword_1C0321BF8 = -1;
        }
        goto LABEL_278;
      case 4:
        v98 = v97 & 0xFFFFFFEF;
        break;
      case 16:
        v98 = v97 & 0xFFFFFFDF;
        break;
      default:
LABEL_264:
        xxxSendMouseUpIfPending(
          (unsigned int *)(a2 + 1064),
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
        goto LABEL_265;
    }
    *(_DWORD *)(a2 + 1264) = v98;
    goto LABEL_264;
  }
LABEL_278:
  if ( v114 )
    *(_DWORD *)(a2 + 1080) = 1;
  if ( v85 == 3 && v86 )
    v85 = 1;
  *(_DWORD *)(a2 + 1072) = v8;
  v101 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / gliQpcFreq.QuadPart;
  if ( v101 - gmsLastTelemetrySentTime > 0xEA60 )
  {
    HandlePTPTelemetry();
    gmsLastTelemetrySentTime = v101;
  }
  return v85;
}
