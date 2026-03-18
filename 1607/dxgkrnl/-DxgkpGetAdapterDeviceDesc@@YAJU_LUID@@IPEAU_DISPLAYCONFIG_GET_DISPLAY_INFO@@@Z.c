/*
 * XREFs of ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C0079520
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C0079460 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C000620C (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006BF4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0079D88 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C0079E68 (DxgkAcquireSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     MonitorGetLinkInfo @ 0x1C007A3F4 (MonitorGetLinkInfo.c)
 *     ?D3dPixelFormatToDisplayConfigPixelFormat@@YAXW4_D3DDDIFORMAT@@PEAW4DISPLAYCONFIG_PIXELFORMAT@@@Z @ 0x1C007A4D8 (-D3dPixelFormatToDisplayConfigPixelFormat@@YAXW4_D3DDDIFORMAT@@PEAW4DISPLAYCONFIG_PIXELFORMAT@@@.c)
 *     DmmIsTargetHMD @ 0x1C007B5F8 (DmmIsTargetHMD.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0086898 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C0088C0C (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkpGetAdapterDeviceDesc(
        struct _LUID a1,
        unsigned int a2,
        struct _DISPLAYCONFIG_GET_DISPLAY_INFO *a3)
{
  __int64 v3; // r12
  DXGGLOBAL *v4; // rcx
  __int64 v5; // rcx
  ADAPTER_DISPLAY **v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v9; // rbx
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 ProcessDxgProcess; // rax
  unsigned __int64 *v13; // rax
  unsigned int v14; // edx
  struct DXGADAPTER **v15; // rcx
  __int64 v16; // rcx
  volatile signed __int64 *v17; // rbx
  DXGADAPTER *v18; // rdi
  _BOOL8 v19; // rcx
  DXGADAPTER *v20; // r14
  signed __int64 v21; // rax
  DXGADAPTER *v22; // rbx
  DXGADAPTER *v23; // rbx
  char *v24; // r15
  int v25; // eax
  DXGADAPTER *v26; // r9
  __int64 v27; // r9
  __int16 v28; // r10
  _WORD *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int16 v34; // ax
  unsigned __int16 *v35; // rax
  _WORD *v36; // rcx
  __int64 v37; // rdi
  unsigned __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int16 v41; // ax
  DXGADAPTER *v42; // r14
  DXGADAPTER *v43; // rbx
  char *v44; // r15
  int v45; // eax
  DXGADAPTER *v46; // r13
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  struct SESSION_VIEW *SessionViewOwner; // rbx
  __int64 v53; // r12
  unsigned int v54; // r15d
  BOOL v55; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r14
  __int64 v57; // rbx
  __int128 v58; // xmm0
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v59; // r12
  int v60; // eax
  int CurrentOrientation; // eax
  __int64 v62; // rdx
  int LinkInfo; // eax
  int v64; // ecx
  __int16 v65; // r9
  _WORD *v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int16 v69; // ax
  unsigned __int16 *v70; // rcx
  _WORD *v71; // rax
  unsigned __int64 v72; // r8
  __int64 v73; // rdx
  __int16 v74; // cx
  struct DXGADAPTER *v75; // rcx
  struct DXGADAPTER *v76; // rcx
  unsigned int v78; // ebx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  int v90; // edx
  int v91; // edx
  _QWORD *v92; // rax
  DXGADAPTER *v93; // [rsp+30h] [rbp-D0h] BYREF
  DXGADAPTER *v94; // [rsp+38h] [rbp-C8h] BYREF
  char *v95; // [rsp+40h] [rbp-C0h]
  DXGADAPTER *v96; // [rsp+48h] [rbp-B8h]
  ADAPTER_DISPLAY **v97; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v98; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v99[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v100; // [rsp+64h] [rbp-9Ch]
  _BYTE v101[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v102; // [rsp+80h] [rbp-80h]
  struct DXGADAPTER *v103; // [rsp+88h] [rbp-78h]
  char v104; // [rsp+90h] [rbp-70h]
  _BYTE v105[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-60h]
  struct DXGADAPTER *v107; // [rsp+A8h] [rbp-58h]
  char v108; // [rsp+B0h] [rbp-50h]
  _QWORD v109[2]; // [rsp+C0h] [rbp-40h] BYREF
  char v110; // [rsp+D0h] [rbp-30h]
  _QWORD v111[2]; // [rsp+D8h] [rbp-28h] BYREF
  char v112; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v113; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v114; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v116; // [rsp+158h] [rbp+58h]
  bool v118; // [rsp+168h] [rbp+68h]

  v116 = a2;
  v3 = a2;
  v94 = 0LL;
  v93 = 0LL;
  if ( !a3 )
  {
    v82 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdAssertion)(a1);
    *(_QWORD *)(v82 + 24) = 5353LL;
    WdLogEvent5_WdAssertion(v82);
  }
  v4 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v83 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v83 + 24) = 982LL;
    WdLogEvent5_WdAssertion(v83);
    v4 = DXGGLOBAL::m_pGlobal;
  }
  v97 = (ADAPTER_DISPLAY **)DXGGLOBAL::ReferenceAdapterByLuid(v4, a1, &v113);
  v6 = v97;
  if ( !v97 )
  {
    v84 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v84 + 24) = a1.HighPart;
    *(_QWORD *)(v84 + 32) = a1.LowPart;
    WdLogEvent5_WdError(v84);
    return -1073741811LL;
  }
  v7 = DxgkAcquireSessionModeChangeLock(0LL);
  v9 = (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)v7;
  v118 = v7 >= 0;
  if ( v7 < 0 )
  {
    v85 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v85 + 24) = v9;
    WdLogEvent5_WdError(v85);
    goto LABEL_93;
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v11);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(ProcessDxgProcess + 72) + 224LL))(0LL) )
  {
    v78 = 0;
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( SessionData )
    {
      v81 = *((unsigned int *)v97 + 67);
      if ( *((_DWORD *)SessionData + 4623) == (_DWORD)v81 )
      {
        v81 = *((unsigned int *)v97 + 68);
        if ( *((_DWORD *)SessionData + 4624) == (_DWORD)v81 )
          v78 = *((_DWORD *)SessionData + 4625);
      }
    }
    if ( (unsigned int)v3 >= v78 && (_DWORD)v3 != -1 )
    {
      v86 = WdLogNewEntry5_WdError(v81);
      *(_QWORD *)(v86 + 32) = v78;
      *(_QWORD *)(v86 + 24) = v3;
      WdLogEvent5_WdError(v86);
      LODWORD(v9) = -1073741811;
      goto LABEL_93;
    }
    LODWORD(v3) = -1;
    v116 = -1;
  }
  v98 = -1LL;
  if ( (_DWORD)v3 == -1 )
  {
    v13 = 0LL;
    v15 = 0LL;
    v14 = 0;
  }
  else
  {
    v13 = &v98;
    v14 = v3;
    v15 = &v94;
  }
  if ( (int)DxgkpGetPairingAdapters((struct DXGADAPTER *)v97, v14, &v93, &v114, v15, v13) >= 0 )
  {
    v17 = (volatile signed __int64 *)v93;
    if ( !v93 )
    {
      v88 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v88 + 24) = 5438LL;
      WdLogEvent5_WdAssertion(v88);
    }
    v18 = v94;
    v19 = (_DWORD)v3 == -1;
    if ( v19 != (v94 == 0LL) )
    {
      v89 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v89 + 24) = 5439LL;
      WdLogEvent5_WdAssertion(v89);
    }
    v103 = (struct DXGADAPTER *)v17;
    v104 = 0;
    if ( !v18 )
      v18 = (DXGADAPTER *)v17;
    if ( v17 )
    {
      _InterlockedIncrement64(v17 + 3);
      v17 = (volatile signed __int64 *)v93;
      v102 = -1LL;
    }
    if ( v18 )
      v17 = (volatile signed __int64 *)v18;
    v107 = (struct DXGADAPTER *)v17;
    v108 = 0;
    if ( v17 )
    {
      _InterlockedIncrement64(v17 + 3);
      v106 = -1LL;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v6[2], (struct DXGADAPTER *)v6);
    v20 = v93;
    v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)v93 + 3, 0xFFFFFFFFFFFFFFFFuLL);
    v22 = v93;
    if ( v21 == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v93 + 2), v93);
    if ( v94 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v94 + 2), v94);
      v22 = v93;
    }
    else
    {
      v94 = v22;
    }
    v109[1] = v22;
    _InterlockedIncrement64((volatile signed __int64 *)v20 + 3);
    v109[0] = -1LL;
    KeEnterCriticalRegion();
    v23 = v93;
    v24 = (char *)v93 + 120;
    ExAcquirePushLockSharedEx((char *)v93 + 120, 0LL);
    v25 = *((_DWORD *)v23 + 44);
    v110 = 1;
    if ( v25 != 1 )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v109);
      LODWORD(v9) = -1073741130;
      goto LABEL_83;
    }
    v26 = v93;
    v9 = a3;
    *((_DWORD *)a3 + 208) = *((_DWORD *)v93 + 74);
    *((_DWORD *)a3 + 209) = *((_DWORD *)v26 + 69);
    *((_DWORD *)a3 + 210) = *((_DWORD *)v26 + 70);
    *((_DWORD *)a3 + 211) = *((_DWORD *)v26 + 71);
    *((_DWORD *)a3 + 212) = *((_DWORD *)v26 + 72);
    *((_DWORD *)a3 + 213) = *((_DWORD *)v26 + 73);
    *((_DWORD *)a3 + 409) = (*((_DWORD *)v26 + 75) & 0x80u) != 0;
    *((_DWORD *)a3 + 410) = *((_DWORD *)v26 + 62) > 1u;
    *((_DWORD *)a3 + 214) = DXGADAPTER::GetDriverVersion(v26);
    v29 = (_WORD *)((char *)a3 + 860);
    v30 = *(_QWORD *)(v27 + 1064);
    v31 = 128LL;
    if ( v30 )
    {
      v32 = 128LL;
      v33 = v30 - (_QWORD)v29;
      while ( v32 != -2147483518 )
      {
        v34 = *(_WORD *)((char *)v29 + v33);
        if ( !v34 )
          break;
        *v29++ = v34;
        if ( !--v32 )
        {
          --v29;
          break;
        }
      }
    }
    else if ( a3 == (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)-860LL )
    {
LABEL_39:
      v35 = *(unsigned __int16 **)(v27 + 1072);
      v36 = (_WORD *)((char *)a3 + 1116);
      v37 = 260LL;
      v38 = (unsigned __int64)*v35 >> 1;
      if ( v38 <= 0x7FFFFFFE )
      {
        v39 = 260LL;
        v40 = *((_QWORD *)v35 + 1) - (_QWORD)v36;
        while ( v39 + v38 - 260 )
        {
          v41 = *(_WORD *)((char *)v36 + v40);
          if ( !v41 )
            break;
          *v36++ = v41;
          if ( !--v39 )
          {
            --v36;
            break;
          }
        }
      }
      *v36 = v28;
      ExReleasePushLockSharedEx(v24, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v93 + 2), v93);
      v42 = v94;
      v96 = v94;
      if ( !v94 )
        goto LABEL_82;
      v111[1] = v94;
      _InterlockedIncrement64((volatile signed __int64 *)v94 + 3);
      v111[0] = -1LL;
      KeEnterCriticalRegion();
      v43 = v94;
      v44 = (char *)v94 + 120;
      v95 = (char *)v94 + 120;
      ExAcquirePushLockSharedEx((char *)v94 + 120, 0LL);
      v45 = *((_DWORD *)v43 + 44);
      v112 = 1;
      if ( v45 == 1 )
      {
        v46 = v94;
        if ( (_DWORD)v3 == -1
          || (v47 = PsGetCurrentProcess(),
              v49 = PsGetProcessDxgProcess(v47, v48),
              (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v49 + 72) + 224LL))(0LL)) )
        {
          v9 = a3;
          goto LABEL_64;
        }
        v51 = *((_QWORD *)v46 + 266);
        if ( v51 && (unsigned int)v3 < *(_DWORD *)(v51 + 80) )
        {
          SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v97[266], v3);
          if ( !SessionViewOwner )
          {
            v9 = a3;
            v64 = 1;
            *((_DWORD *)a3 + 479) = -1;
            *(_QWORD *)((char *)a3 + 1644) = 0LL;
            *(_QWORD *)((char *)a3 + 1652) = 0LL;
            *((_QWORD *)a3 + 244) = 0LL;
            *((_QWORD *)a3 + 245) = 0LL;
            *(_QWORD *)((char *)a3 + 1924) = 0LL;
            *(_QWORD *)((char *)a3 + 1932) = 5LL;
            *((_DWORD *)a3 + 485) = 1;
            *((_QWORD *)a3 + 243) = 1LL;
LABEL_65:
            *((_DWORD *)v9 + 5) = *((_DWORD *)v46 + 74);
            *((_DWORD *)v9 + 6) = *((_DWORD *)v46 + 69);
            *((_DWORD *)v9 + 7) = *((_DWORD *)v46 + 70);
            *((_DWORD *)v9 + 8) = *((_DWORD *)v46 + 71);
            *((_DWORD *)v9 + 9) = *((_DWORD *)v46 + 72);
            *((_DWORD *)v9 + 10) = *((_DWORD *)v46 + 73);
            *((_DWORD *)v9 + 206) = (*((_DWORD *)v46 + 75) & 0x80u) != 0;
            if ( *((_DWORD *)v46 + 62) <= 1u )
              v64 = 0;
            *((_DWORD *)v9 + 207) = v64;
            *((_DWORD *)v9 + 11) = DXGADAPTER::GetDriverVersion(v46);
            v66 = (_WORD *)((char *)v9 + 48);
            v67 = *((_QWORD *)v46 + 133);
            if ( v67 )
            {
              v68 = v67 - (_QWORD)v66;
              while ( v31 != -2147483518 )
              {
                v69 = *(_WORD *)((char *)v66 + v68);
                if ( !v69 )
                  break;
                *v66++ = v69;
                if ( !--v31 )
                {
                  --v66;
                  break;
                }
              }
            }
            else if ( v9 == (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)-48LL )
            {
              goto LABEL_74;
            }
            *v66 = v65;
LABEL_74:
            v70 = (unsigned __int16 *)*((_QWORD *)v46 + 134);
            v71 = (_WORD *)((char *)v9 + 304);
            v72 = (unsigned __int64)*v70 >> 1;
            if ( v72 <= 0x7FFFFFFE )
            {
              v73 = *((_QWORD *)v70 + 1) - (_QWORD)v71;
              while ( v37 + v72 - 260 )
              {
                v74 = *(_WORD *)((char *)v71 + v73);
                if ( !v74 )
                  break;
                *v71++ = v74;
                if ( !--v37 )
                {
                  --v71;
                  break;
                }
              }
            }
            *v71 = v65;
            ExReleasePushLockSharedEx(v44, 0LL);
            KeLeaveCriticalRegion();
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v94 + 2), v94);
LABEL_82:
            *((_WORD *)v9 + 153) = 92;
            *((_WORD *)v9 + 559) = 92;
            LODWORD(v9) = 0;
LABEL_83:
            v75 = v107;
            if ( v107 )
            {
              if ( v108 )
              {
                COREACCESS::Release((COREACCESS *)v105);
                v75 = v107;
              }
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v75 + 2), v75);
            }
            v76 = v103;
            if ( v103 )
            {
              if ( v104 )
              {
                COREACCESS::Release((COREACCESS *)v101);
                v76 = v103;
              }
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v76 + 2), v76);
            }
            goto LABEL_93;
          }
          v53 = 1016LL * (unsigned int)v3;
          v54 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 266) + 112LL) + v53 + 964);
          v55 = v54 != -1 && (unsigned __int8)DmmIsTargetHMD(v46, v54);
          *((_DWORD *)a3 + 493) ^= (*((_DWORD *)a3 + 493) ^ (8 * v55)) & 8;
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v46 + 266), v116);
          if ( (*((_DWORD *)a3 + 493) & 8) != 0 )
          {
            v59 = a3;
            *(_QWORD *)((char *)a3 + 1644) = 0LL;
            *(_QWORD *)((char *)a3 + 1652) = 0LL;
            *((_QWORD *)a3 + 244) = 0LL;
            *((_QWORD *)a3 + 245) = 0LL;
          }
          else
          {
            *(_OWORD *)((char *)a3 + 1644) = *(_OWORD *)((char *)SessionViewOwner + 24);
            v57 = *((_QWORD *)v46 + 266);
            DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v57 + 16));
            v58 = *(_OWORD *)(*(_QWORD *)(v57 + 112) + v53 + 652);
            v59 = a3;
            *((_OWORD *)a3 + 122) = v58;
          }
          *((_DWORD *)v59 + 479) = v54;
          *((_DWORD *)v59 + 480) = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v46 + 266), v116);
          *((_DWORD *)v59 + 481) = *(_DWORD *)DisplayModeInfo;
          *((_DWORD *)v59 + 482) = *((_DWORD *)DisplayModeInfo + 1);
          D3dPixelFormatToDisplayConfigPixelFormat(
            *((enum _D3DDDIFORMAT *)DisplayModeInfo + 2),
            (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)((char *)v59 + 1932));
          v60 = *((_DWORD *)DisplayModeInfo + 4);
          if ( v60 == -2 && *((_DWORD *)DisplayModeInfo + 5) == -2 )
          {
            *((_DWORD *)v59 + 484) = 64;
            *((_DWORD *)v59 + 485) = 1;
          }
          else
          {
            *((_DWORD *)v59 + 484) = v60;
            *((_DWORD *)v59 + 485) = *((_DWORD *)DisplayModeInfo + 5);
          }
          CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v46 + 266), v116, 2LL);
          v9 = a3;
          v62 = *((unsigned int *)a3 + 479);
          *((_DWORD *)a3 + 486) = CurrentOrientation;
          *((_DWORD *)a3 + 487) = *((_DWORD *)DisplayModeInfo + 6);
          LinkInfo = MonitorGetLinkInfo(v46, v62, v99);
          v42 = v96;
          v44 = v95;
          if ( LinkInfo >= 0 )
          {
            v90 = ((*((_DWORD *)a3 + 493) | 0x40) ^ (v100 << 7)) & 0x80 ^ (*((_DWORD *)a3 + 493) | 0x40);
            v91 = ((unsigned __int16)v90 ^ (unsigned __int16)((_WORD)v100 << 6)) & 0x100 ^ v90;
            *((_DWORD *)a3 + 493) = v91 ^ ((unsigned __int16)v91 ^ (unsigned __int16)((_WORD)v100 << 8)) & 0x200;
          }
          else
          {
            *((_DWORD *)a3 + 493) &= 0xFFFFFC3F;
          }
LABEL_64:
          v64 = 1;
          goto LABEL_65;
        }
        v92 = (_QWORD *)WdLogNewEntry5_WdError(v50);
        LODWORD(v9) = -1073741811;
        v92[3] = (unsigned int)v3;
        v92[4] = v97;
        v92[5] = -1073741811LL;
        WdLogEvent5_WdError(v92);
      }
      else
      {
        LODWORD(v9) = -1073741130;
      }
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
      goto LABEL_83;
    }
    *v29 = v28;
    goto LABEL_39;
  }
  v87 = WdLogNewEntry5_WdError(v16);
  *(_QWORD *)(v87 + 32) = (unsigned int)v3;
  *(_QWORD *)(v87 + 24) = v6;
  WdLogEvent5_WdError(v87);
  LODWORD(v9) = -1073741811;
LABEL_93:
  if ( v118 )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v9;
}
