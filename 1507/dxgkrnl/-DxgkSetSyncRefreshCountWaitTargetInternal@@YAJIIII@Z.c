/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x1C00A6B50 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0001AF8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001FA4 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C0002464 (-IsActive@DXGADAPTER@@QEBAHXZ.c)
 *     ?IsRenderAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00024A8 (-IsRenderAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00024B4 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C00026A0 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0005940 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0005A10 (-VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchIsVSyncAvailable@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0005A2C (-VidSchIsVSyncAvailable@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00096CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000FAF4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??0ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0010D7C (--0ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetDisplayAdapter@DXGDEVICE@@QEBAPEAVDXGADAPTER@@I@Z @ 0x1C0010D84 (-GetDisplayAdapter@DXGDEVICE@@QEBAPEAVDXGADAPTER@@I@Z.c)
 *     ?GetDisplayCore@DXGADAPTER@@QEBAPEAVADAPTER_DISPLAY@@XZ @ 0x1C0010D8C (-GetDisplayCore@DXGADAPTER@@QEBAPEAVADAPTER_DISPLAY@@XZ.c)
 *     ?GetExecutionState@DXGDEVICE@@QEBA?BW4DXGDEVICEEXECUTION_STATE@@XZ @ 0x1C0010D94 (-GetExecutionState@DXGDEVICE@@QEBA-BW4DXGDEVICEEXECUTION_STATE@@XZ.c)
 *     ?GetNumVidPnSources@ADAPTER_DISPLAY@@QEBAIXZ @ 0x1C0010D9C (-GetNumVidPnSources@ADAPTER_DISPLAY@@QEBAIXZ.c)
 *     ?GetPowerTransitionState@DXGADAPTER@@QEBA?AW4_DXGADAPTERPOWERSTATE@@XZ @ 0x1C0010DA0 (-GetPowerTransitionState@DXGADAPTER@@QEBA-AW4_DXGADAPTERPOWERSTATE@@XZ.c)
 *     ?GetRenderAdapter@DXGDEVICE@@QEBAQEAVDXGADAPTER@@XZ @ 0x1C0010DA4 (-GetRenderAdapter@DXGDEVICE@@QEBAQEAVDXGADAPTER@@XZ.c)
 *     ?GetRenderCore@DXGADAPTER@@QEBAPEAVADAPTER_RENDER@@XZ @ 0x1C0010DB0 (-GetRenderCore@DXGADAPTER@@QEBAPEAVADAPTER_RENDER@@XZ.c)
 *     ?GetVidSchDevice@DXGDEVICE@@QEBAQEAU_VIDSCH_DEVICE@@XZ @ 0x1C0010DB8 (-GetVidSchDevice@DXGDEVICE@@QEBAQEAU_VIDSCH_DEVICE@@XZ.c)
 *     ?GetVidSchExport@ADAPTER_RENDER@@QEBAPEAVVIDSCH_EXPORT@@XZ @ 0x1C0010DC0 (-GetVidSchExport@ADAPTER_RENDER@@QEBAPEAVVIDSCH_EXPORT@@XZ.c)
 *     ?GetVidSchGlobal@ADAPTER_RENDER@@QEBAPEAU_VIDSCH_GLOBAL@@XZ @ 0x1C0010DC8 (-GetVidSchGlobal@ADAPTER_RENDER@@QEBAPEAU_VIDSCH_GLOBAL@@XZ.c)
 *     ?GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ @ 0x1C0010DD0 (-GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0010DD8 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKXZ @ 0x1C0010DE0 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKXZ.c)
 *     ?RemoteSessionWaitForVerticalBlankEvent@DXGGLOBAL@@QEAAJXZ @ 0x1C001A584 (-RemoteSessionWaitForVerticalBlankEvent@DXGGLOBAL@@QEAAJXZ.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@E@Z @ 0x1C001B36C (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     ?VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@@E@Z @ 0x1C001B390 (-VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C00959C4 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C011E940 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01201C0 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DXGGLOBAL *Global; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct DXGADAPTER *RenderAdapter; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct DXGADAPTER *DisplayAdapter; // rax
  ADAPTER_DISPLAY *DisplayCore; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  ADAPTER_RENDER *RenderCore; // rax
  ADAPTER_RENDER *v35; // rax
  VIDSCH_EXPORT *VidSchExport; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  ADAPTER_RENDER *v49; // rax
  ADAPTER_RENDER *v50; // rax
  VIDSCH_EXPORT *v51; // rax
  ADAPTER_RENDER *v52; // rax
  ADAPTER_RENDER *v53; // rax
  VIDSCH_EXPORT *v54; // rax
  ADAPTER_RENDER *v55; // rax
  struct VIDSCH_EXPORT *v56; // rax
  ADAPTER_RENDER *v57; // rax
  ADAPTER_RENDER *v58; // rax
  struct VIDSCH_EXPORT *v59; // rax
  ADAPTER_DISPLAY *v60; // rax
  ADAPTER_DISPLAY *v61; // rax
  ADAPTER_RENDER *v62; // rax
  ADAPTER_RENDER *v63; // rax
  struct VIDSCH_EXPORT *v64; // rax
  ADAPTER_RENDER *v65; // rax
  struct VIDSCH_EXPORT *v66; // rax
  bool v67; // [rsp+30h] [rbp-218h]
  bool v68; // [rsp+31h] [rbp-217h]
  int PairingAdapters; // [rsp+34h] [rbp-214h]
  int v70; // [rsp+34h] [rbp-214h]
  int v71; // [rsp+34h] [rbp-214h]
  struct DXGADAPTER *v72; // [rsp+38h] [rbp-210h] BYREF
  char v73; // [rsp+40h] [rbp-208h]
  char v74; // [rsp+41h] [rbp-207h]
  char v75; // [rsp+42h] [rbp-206h]
  unsigned __int8 v76[5]; // [rsp+43h] [rbp-205h] BYREF
  struct DXGADAPTER *v77; // [rsp+48h] [rbp-200h] BYREF
  _BYTE v78[8]; // [rsp+50h] [rbp-1F8h] BYREF
  struct DXGDEVICE *v79; // [rsp+58h] [rbp-1F0h]
  unsigned int v80; // [rsp+60h] [rbp-1E8h]
  unsigned int v81; // [rsp+64h] [rbp-1E4h]
  char v82; // [rsp+68h] [rbp-1E0h]
  char v83; // [rsp+69h] [rbp-1DFh]
  char v84; // [rsp+6Ah] [rbp-1DEh]
  char v85; // [rsp+6Bh] [rbp-1DDh]
  char v86; // [rsp+6Ch] [rbp-1DCh]
  char v87; // [rsp+6Dh] [rbp-1DBh]
  char v88; // [rsp+6Eh] [rbp-1DAh]
  char v89; // [rsp+6Fh] [rbp-1D9h]
  char v90; // [rsp+70h] [rbp-1D8h]
  char v91; // [rsp+71h] [rbp-1D7h]
  char v92; // [rsp+72h] [rbp-1D6h]
  __int64 *v93; // [rsp+78h] [rbp-1D0h]
  __int64 *v94; // [rsp+80h] [rbp-1C8h]
  DXGPROCESS *Current; // [rsp+88h] [rbp-1C0h]
  unsigned int v96; // [rsp+90h] [rbp-1B8h]
  unsigned int v97; // [rsp+94h] [rbp-1B4h]
  unsigned int v98; // [rsp+98h] [rbp-1B0h]
  struct DXGADAPTER *v99; // [rsp+A0h] [rbp-1A8h]
  _QWORD *v100; // [rsp+A8h] [rbp-1A0h]
  unsigned int v101; // [rsp+B0h] [rbp-198h]
  struct DXGDEVICE *v102; // [rsp+B8h] [rbp-190h]
  __int64 v103; // [rsp+C0h] [rbp-188h]
  unsigned int v104; // [rsp+C8h] [rbp-180h]
  __int64 v105; // [rsp+D0h] [rbp-178h]
  unsigned int v106; // [rsp+D8h] [rbp-170h]
  __int64 v107; // [rsp+E0h] [rbp-168h]
  unsigned int v108; // [rsp+E8h] [rbp-160h]
  unsigned int v109; // [rsp+ECh] [rbp-15Ch]
  unsigned int v110; // [rsp+F0h] [rbp-158h]
  unsigned int v111; // [rsp+F4h] [rbp-154h]
  unsigned int v112; // [rsp+F8h] [rbp-150h]
  unsigned int v113; // [rsp+FCh] [rbp-14Ch]
  unsigned int v114; // [rsp+100h] [rbp-148h]
  unsigned int v115; // [rsp+104h] [rbp-144h]
  struct DXGADAPTER *v116; // [rsp+108h] [rbp-140h]
  unsigned int v117; // [rsp+110h] [rbp-138h]
  __int64 v118; // [rsp+118h] [rbp-130h]
  unsigned int v119; // [rsp+120h] [rbp-128h]
  unsigned int v120; // [rsp+124h] [rbp-124h]
  unsigned int v121; // [rsp+128h] [rbp-120h]
  unsigned int v122; // [rsp+130h] [rbp-118h]
  unsigned int v123; // [rsp+138h] [rbp-110h]
  unsigned int v124; // [rsp+13Ch] [rbp-10Ch]
  unsigned int v125; // [rsp+140h] [rbp-108h]
  _BYTE v126[16]; // [rsp+148h] [rbp-100h] BYREF
  __int64 v127; // [rsp+158h] [rbp-F0h]
  __int64 v128; // [rsp+160h] [rbp-E8h]
  __int64 v129; // [rsp+168h] [rbp-E0h]
  _BYTE v130[16]; // [rsp+170h] [rbp-D8h] BYREF
  __int64 v131; // [rsp+180h] [rbp-C8h]
  __int64 v132; // [rsp+188h] [rbp-C0h]
  __int64 v133; // [rsp+190h] [rbp-B8h]
  _BYTE v134[56]; // [rsp+198h] [rbp-B0h] BYREF
  struct _VIDSCH_GLOBAL *v135; // [rsp+1D0h] [rbp-78h]
  struct _VIDSCH_DEVICE *v136; // [rsp+1D8h] [rbp-70h]
  unsigned int (*v137)(void); // [rsp+1E0h] [rbp-68h]
  struct _VIDSCH_DEVICE *VidSchDevice; // [rsp+1E8h] [rbp-60h]
  struct _VIDSCH_GLOBAL *v139; // [rsp+1F0h] [rbp-58h]
  unsigned int (__fastcall *v140)(_QWORD); // [rsp+1F8h] [rbp-50h]
  struct _VIDSCH_GLOBAL *v141; // [rsp+200h] [rbp-48h]
  struct _VIDSCH_GLOBAL *VidSchGlobal; // [rsp+208h] [rbp-40h]
  struct _VIDSCH_GLOBAL *v143; // [rsp+210h] [rbp-38h]
  _BYTE v144[24]; // [rsp+218h] [rbp-30h] BYREF
  signed __int64 v145; // [rsp+230h] [rbp-18h]
  unsigned int v146; // [rsp+250h] [rbp+8h]

  v146 = a1;
  v79 = 0LL;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v127 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v127 + 24) = -1073741811LL;
    v89 = WdLogEvent5_WdError(v127);
    return 3221225485LL;
  }
  v137 = (unsigned int (*)(void))*((_QWORD *)DXGPROCESS::GetWin32kInterface(Current) + 27);
  if ( !v137() )
  {
    v133 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v133 + 24) = -1073741790LL;
    v87 = WdLogEvent5_WdWarning(v133);
    return 3221225506LL;
  }
  v140 = (unsigned int (__fastcall *)(_QWORD))*((_QWORD *)DXGPROCESS::GetWin32kInterface(Current) + 28);
  if ( v140(0LL) )
  {
    Global = DXGGLOBAL::GetGlobal(v11, v10, v12, v13);
    return DXGGLOBAL::RemoteSessionWaitForVerticalBlankEvent(Global);
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v144, Current);
  v94 = (__int64 *)((char *)Current + 216);
  v80 = (v146 & 0x3FFFFFC0) >> 6;
  v125 = (v146 & 0xC0000000) >> 30;
  if ( v80 < *((_DWORD *)Current + 58) )
  {
    v16 = *v94;
    if ( v125 == ((*(_DWORD *)(*v94 + 16LL * v80 + 8) >> 4) & 3) )
    {
      v16 = *v94;
      if ( ((*(_DWORD *)(*v94 + 16LL * v80 + 8) >> 12) & 1) != 0 )
      {
        v67 = 0;
      }
      else
      {
        v16 = *v94;
        v67 = (*(_DWORD *)(*v94 + 16LL * v80 + 8) & 0xF) != 0;
      }
    }
    else
    {
      v67 = 0;
    }
  }
  else
  {
    v67 = 0;
  }
  if ( v67 )
  {
    v97 = (v146 & 0x3FFFFFC0) >> 6;
    v16 = *v94;
    if ( (*(_DWORD *)(*v94 + 16LL * v97 + 8) & 0xF) == 1 )
    {
      v16 = *v94;
      v116 = *(struct DXGADAPTER **)(*v94 + 16LL * v97);
    }
    else
    {
      v116 = 0LL;
    }
  }
  else
  {
    v116 = 0LL;
  }
  v99 = v116;
  if ( !v116 )
  {
    v118 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    *(_QWORD *)(v118 + 24) = v146;
    *(_QWORD *)(v118 + 32) = -1073741811LL;
    v91 = WdLogEvent5_WdWarning(v118);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v144);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v93 = (__int64 *)((char *)Current + 216);
    v81 = (a2 & 0x3FFFFFC0) >> 6;
    v115 = (a2 & 0xC0000000) >> 30;
    if ( v81 < *((_DWORD *)Current + 58) )
    {
      v16 = *v93;
      if ( v115 == ((*(_DWORD *)(*v93 + 16LL * v81 + 8) >> 4) & 3) )
      {
        v16 = *v93;
        if ( ((*(_DWORD *)(*v93 + 16LL * v81 + 8) >> 12) & 1) != 0 )
        {
          v68 = 0;
        }
        else
        {
          v16 = *v93;
          v68 = (*(_DWORD *)(*v93 + 16LL * v81 + 8) & 0xF) != 0;
        }
      }
      else
      {
        v68 = 0;
      }
    }
    else
    {
      v68 = 0;
    }
    if ( v68 )
    {
      v98 = (a2 & 0x3FFFFFC0) >> 6;
      v16 = *v93;
      if ( (*(_DWORD *)(*v93 + 16LL * v98 + 8) & 0xF) == 3 )
      {
        v16 = *v93;
        v102 = *(struct DXGDEVICE **)(*v93 + 16LL * v98);
      }
      else
      {
        v102 = 0LL;
      }
    }
    else
    {
      v102 = 0LL;
    }
    v79 = v102;
    if ( !v102 )
    {
      v103 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      *(_QWORD *)(v103 + 24) = v99;
      *(_QWORD *)(v103 + 32) = a2;
      v83 = WdLogEvent5_WdWarning(v103);
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v144);
      return 3221225485LL;
    }
    v145 = _InterlockedIncrement64((volatile signed __int64 *)v79 + 8);
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v144);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78, v79);
  PairingAdapters = DxgkpGetPairingAdapters(v99, a3, &v72, &v77);
  if ( PairingAdapters < 0 )
  {
    v100 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v100[3] = v99;
    v100[4] = a3;
    v100[5] = PairingAdapters;
    v88 = WdLogEvent5_WdError(v100);
    v117 = PairingAdapters;
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
    return v117;
  }
  if ( !v72 || !v77 )
  {
    v131 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    *(_QWORD *)(v131 + 24) = 22984LL;
    v90 = WdLogEvent5_WdAssertion(v131);
  }
  if ( v79 )
  {
    RenderAdapter = DXGDEVICE::GetRenderAdapter(v79);
    if ( v72 != RenderAdapter || (DisplayAdapter = DXGDEVICE::GetDisplayAdapter(v79), v77 != DisplayAdapter) )
    {
      v105 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      *(_QWORD *)(v105 + 24) = v99;
      *(_QWORD *)(v105 + 32) = a2;
      v92 = WdLogEvent5_WdWarning(v105);
      v124 = -1073741811;
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
      return v124;
    }
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v134, v72, v77);
  DXGADAPTER::ReleaseReference(v72);
  DXGADAPTER::ReleaseReference(v77);
  if ( (unsigned int)DXGADAPTER::GetPowerTransitionState((__int64)v77) == 1 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v130, v72, 1);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v126, v77, 0);
    if ( v77 != v72 )
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v126);
    if ( !DXGADAPTER::IsActive(v72) || !DXGADAPTER::IsActive(v77) )
    {
      v109 = -1073741130;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v126);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v130);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
      return v109;
    }
    DisplayCore = DXGADAPTER::GetDisplayCore(v77);
    if ( a3 >= (unsigned int)ADAPTER_DISPLAY::GetNumVidPnSources(DisplayCore) )
    {
      v107 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
      *(_QWORD *)(v107 + 24) = a3;
      *(_QWORD *)(v107 + 32) = -1073741811LL;
      v85 = WdLogEvent5_WdWarning(v107);
      v110 = -1073741811;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v126);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v130);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
      return v110;
    }
    if ( DXGADAPTER::IsDisplayOnlyAdapter(v77) )
    {
      if ( !DXGADAPTER::IsVSyncAvailable(v77, a3) )
      {
        v112 = -1071775738;
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v126);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v130);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
        return v112;
      }
    }
    else
    {
      RenderCore = DXGADAPTER::GetRenderCore(v72);
      VidSchGlobal = ADAPTER_RENDER::GetVidSchGlobal(RenderCore);
      v35 = DXGADAPTER::GetRenderCore(v72);
      VidSchExport = ADAPTER_RENDER::GetVidSchExport(v35);
      if ( !(unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncAvailable(VidSchExport, VidSchGlobal, a3) )
      {
        v114 = -1071775738;
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v126);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v130);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
        return v114;
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v126);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v130);
  }
  v70 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v134);
  if ( v70 < 0 )
  {
    v121 = v70;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
    return v121;
  }
  if ( !DXGADAPTER::IsRenderAdapter(v72) )
  {
    v129 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
    *(_QWORD *)(v129 + 24) = 23053LL;
    v84 = WdLogEvent5_WdAssertion(v129);
  }
  if ( !DXGADAPTER::IsDisplayAdapter(v77) )
  {
    v132 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
    *(_QWORD *)(v132 + 24) = 23054LL;
    v82 = WdLogEvent5_WdAssertion(v132);
  }
  if ( a2 && (unsigned int)DXGDEVICE::GetExecutionState((__int64)v79) != 1 )
  {
    v104 = -1073741130;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
    return v104;
  }
  v75 = 0;
  v76[0] = 0;
  v74 = 0;
  v73 = 0;
  v96 = 0;
  if ( DXGADAPTER::IsDisplayOnlyAdapter(v77) )
  {
    if ( !DXGADAPTER::IsVSyncAvailable(v77, a3) )
    {
      v108 = -1071775738;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
      return v108;
    }
    v60 = DXGADAPTER::GetDisplayCore(v77);
    ADAPTER_DISPLAY::ControlVSyncAdapter(v60, a3);
  }
  else
  {
    if ( v77 != v72 )
    {
      v128 = WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
      *(_QWORD *)(v128 + 24) = 23072LL;
      v86 = WdLogEvent5_WdAssertion(v128);
    }
    v49 = DXGADAPTER::GetRenderCore(v72);
    v141 = ADAPTER_RENDER::GetVidSchGlobal(v49);
    v50 = DXGADAPTER::GetRenderCore(v72);
    v51 = ADAPTER_RENDER::GetVidSchExport(v50);
    if ( !(unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncAvailable(v51, v141, a3) )
    {
      v122 = -1071775738;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
      return v122;
    }
    DXGADAPTER::IncrementVSyncWaiter(v72);
    v75 = 1;
    v52 = DXGADAPTER::GetRenderCore(v72);
    v135 = ADAPTER_RENDER::GetVidSchGlobal(v52);
    v53 = DXGADAPTER::GetRenderCore(v72);
    v54 = ADAPTER_RENDER::GetVidSchExport(v53);
    if ( !(unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncEnabled(v54, v135, a3) )
    {
      if ( v79 )
      {
        VidSchDevice = DXGDEVICE::GetVidSchDevice(v79);
        v55 = DXGADAPTER::GetRenderCore(v72);
        v56 = ADAPTER_RENDER::GetVidSchExport(v55);
        if ( (int)VIDSCH_EXPORT::VidSchControlVSyncDevice((__int64)v56, (__int64)VidSchDevice, 0LL, 1) < 0 )
        {
          DXGADAPTER::DecrementVSyncWaiter(v72);
          v106 = -1071775738;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
          return v106;
        }
        v73 = 1;
      }
      else
      {
        v57 = DXGADAPTER::GetRenderCore(v72);
        v139 = ADAPTER_RENDER::GetVidSchGlobal(v57);
        v58 = DXGADAPTER::GetRenderCore(v72);
        v59 = ADAPTER_RENDER::GetVidSchExport(v58);
        if ( (int)VIDSCH_EXPORT::VidSchControlVSyncAdapter((__int64)v59, (__int64)v139, 1LL, 1) < 0 )
        {
          DXGADAPTER::DecrementVSyncWaiter(v72);
          v123 = -1071775738;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
          return v123;
        }
        v74 = 1;
      }
    }
  }
  v101 = DXGADAPTER::NumberOfVSyncWaiter(v72);
  v61 = DXGADAPTER::GetDisplayCore(v77);
  ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(v61, a3, a4, v101, v76);
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v134);
  if ( v75 && v76[0] )
    DXGADAPTER::DecrementVSyncWaiter(v72);
  if ( v74 )
  {
    v71 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v134);
    if ( v71 < 0 )
    {
      v120 = v71;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
      return v120;
    }
    v62 = DXGADAPTER::GetRenderCore(v72);
    v143 = ADAPTER_RENDER::GetVidSchGlobal(v62);
    v63 = DXGADAPTER::GetRenderCore(v72);
    v64 = ADAPTER_RENDER::GetVidSchExport(v63);
    v70 = VIDSCH_EXPORT::VidSchControlVSyncAdapter((__int64)v64, (__int64)v143, 1LL, 0);
  }
  else if ( v73 )
  {
    v70 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v134);
    if ( v70 < 0 )
    {
      v111 = v70;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
      return v111;
    }
    if ( (unsigned int)DXGDEVICE::GetExecutionState((__int64)v79) == 1 )
    {
      v136 = DXGDEVICE::GetVidSchDevice(v79);
      v65 = DXGADAPTER::GetRenderCore(v72);
      v66 = ADAPTER_RENDER::GetVidSchExport(v65);
      v70 = VIDSCH_EXPORT::VidSchControlVSyncDevice((__int64)v66, (__int64)v136, 0LL, 0);
    }
  }
  if ( v70 >= 0 && v96 )
  {
    v113 = v96;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
    return v113;
  }
  else
  {
    v119 = v70;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v78);
    return v119;
  }
}
