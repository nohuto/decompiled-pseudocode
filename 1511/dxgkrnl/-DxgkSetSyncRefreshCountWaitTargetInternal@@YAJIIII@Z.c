/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x1C00B8E40 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0001750 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C0003140 (-IsActive@DXGADAPTER@@QEBAHXZ.c)
 *     ?IsRenderAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000316C (-IsRenderAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0003178 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00031E8 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0003400 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003D78 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0003E08 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?VidSchIsVSyncAvailable@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C000B9B4 (-VidSchIsVSyncAvailable@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C000BA2C (-VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000BE34 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??0ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00124FC (--0ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetDisplayAdapter@DXGDEVICE@@QEBAPEAVDXGADAPTER@@I@Z @ 0x1C0012504 (-GetDisplayAdapter@DXGDEVICE@@QEBAPEAVDXGADAPTER@@I@Z.c)
 *     ?GetDisplayCore@DXGADAPTER@@QEBAPEAVADAPTER_DISPLAY@@XZ @ 0x1C001250C (-GetDisplayCore@DXGADAPTER@@QEBAPEAVADAPTER_DISPLAY@@XZ.c)
 *     ?GetExecutionState@DXGDEVICE@@QEBA?BW4DXGDEVICEEXECUTION_STATE@@XZ @ 0x1C0012514 (-GetExecutionState@DXGDEVICE@@QEBA-BW4DXGDEVICEEXECUTION_STATE@@XZ.c)
 *     ?GetNumVidPnSources@ADAPTER_DISPLAY@@QEBAIXZ @ 0x1C001251C (-GetNumVidPnSources@ADAPTER_DISPLAY@@QEBAIXZ.c)
 *     ?GetPowerTransitionState@DXGADAPTER@@QEBA?AW4_DXGADAPTERPOWERSTATE@@XZ @ 0x1C0012520 (-GetPowerTransitionState@DXGADAPTER@@QEBA-AW4_DXGADAPTERPOWERSTATE@@XZ.c)
 *     ?GetRenderAdapter@DXGDEVICE@@QEBAQEAVDXGADAPTER@@XZ @ 0x1C0012524 (-GetRenderAdapter@DXGDEVICE@@QEBAQEAVDXGADAPTER@@XZ.c)
 *     ?GetRenderCore@DXGADAPTER@@QEBAPEAVADAPTER_RENDER@@XZ @ 0x1C0012530 (-GetRenderCore@DXGADAPTER@@QEBAPEAVADAPTER_RENDER@@XZ.c)
 *     ?GetVidSchDevice@DXGDEVICE@@QEBAQEAU_VIDSCH_DEVICE@@XZ @ 0x1C0012538 (-GetVidSchDevice@DXGDEVICE@@QEBAQEAU_VIDSCH_DEVICE@@XZ.c)
 *     ?GetVidSchExport@ADAPTER_RENDER@@QEBAPEAVVIDSCH_EXPORT@@XZ @ 0x1C0012540 (-GetVidSchExport@ADAPTER_RENDER@@QEBAPEAVVIDSCH_EXPORT@@XZ.c)
 *     ?GetVidSchGlobal@ADAPTER_RENDER@@QEBAPEAU_VIDSCH_GLOBAL@@XZ @ 0x1C0012548 (-GetVidSchGlobal@ADAPTER_RENDER@@QEBAPEAU_VIDSCH_GLOBAL@@XZ.c)
 *     ?GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ @ 0x1C0012550 (-GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0012558 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKXZ @ 0x1C0012560 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKXZ.c)
 *     ?RemoteSessionWaitForVerticalBlankEvent@DXGGLOBAL@@QEAAJXZ @ 0x1C001B588 (-RemoteSessionWaitForVerticalBlankEvent@DXGGLOBAL@@QEAAJXZ.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@E@Z @ 0x1C001BE1C (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     ?VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@@E@Z @ 0x1C001BE40 (-VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0079E00 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C009A310 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0125D08 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  DXGADAPTER *RenderAdapter; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  DXGADAPTER *DisplayAdapter; // rax
  ADAPTER_DISPLAY *DisplayCore; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  ADAPTER_RENDER *RenderCore; // rax
  ADAPTER_RENDER *v29; // rax
  VIDSCH_EXPORT *VidSchExport; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  ADAPTER_RENDER *v34; // rax
  ADAPTER_RENDER *v35; // rax
  VIDSCH_EXPORT *v36; // rax
  ADAPTER_RENDER *v37; // rax
  ADAPTER_RENDER *v38; // rax
  VIDSCH_EXPORT *v39; // rax
  ADAPTER_RENDER *v40; // rax
  struct VIDSCH_EXPORT *v41; // rax
  ADAPTER_RENDER *v42; // rax
  ADAPTER_RENDER *v43; // rax
  struct VIDSCH_EXPORT *v44; // rax
  ADAPTER_DISPLAY *v45; // rax
  ADAPTER_DISPLAY *v46; // rax
  ADAPTER_RENDER *v47; // rax
  ADAPTER_RENDER *v48; // rax
  struct VIDSCH_EXPORT *v49; // rax
  ADAPTER_RENDER *v50; // rax
  struct VIDSCH_EXPORT *v51; // rax
  bool v52; // [rsp+30h] [rbp-218h]
  bool v53; // [rsp+31h] [rbp-217h]
  int PairingAdapters; // [rsp+34h] [rbp-214h]
  int v55; // [rsp+34h] [rbp-214h]
  int v56; // [rsp+34h] [rbp-214h]
  DXGADAPTER *v57; // [rsp+38h] [rbp-210h] BYREF
  char v58; // [rsp+40h] [rbp-208h]
  char v59; // [rsp+41h] [rbp-207h]
  char v60; // [rsp+42h] [rbp-206h]
  unsigned __int8 v61[5]; // [rsp+43h] [rbp-205h] BYREF
  DXGADAPTER *v62; // [rsp+48h] [rbp-200h] BYREF
  _BYTE v63[8]; // [rsp+50h] [rbp-1F8h] BYREF
  struct DXGDEVICE *v64; // [rsp+58h] [rbp-1F0h]
  unsigned int v65; // [rsp+60h] [rbp-1E8h]
  unsigned int v66; // [rsp+64h] [rbp-1E4h]
  char v67; // [rsp+68h] [rbp-1E0h]
  char v68; // [rsp+69h] [rbp-1DFh]
  char v69; // [rsp+6Ah] [rbp-1DEh]
  char v70; // [rsp+6Bh] [rbp-1DDh]
  char v71; // [rsp+6Ch] [rbp-1DCh]
  char v72; // [rsp+6Dh] [rbp-1DBh]
  char v73; // [rsp+6Eh] [rbp-1DAh]
  char v74; // [rsp+6Fh] [rbp-1D9h]
  char v75; // [rsp+70h] [rbp-1D8h]
  char v76; // [rsp+71h] [rbp-1D7h]
  char v77; // [rsp+72h] [rbp-1D6h]
  __int64 *v78; // [rsp+78h] [rbp-1D0h]
  __int64 *v79; // [rsp+80h] [rbp-1C8h]
  DXGPROCESS *Current; // [rsp+88h] [rbp-1C0h]
  unsigned int v81; // [rsp+90h] [rbp-1B8h]
  unsigned int v82; // [rsp+94h] [rbp-1B4h]
  unsigned int v83; // [rsp+98h] [rbp-1B0h]
  struct DXGADAPTER *v84; // [rsp+A0h] [rbp-1A8h]
  _QWORD *v85; // [rsp+A8h] [rbp-1A0h]
  unsigned int v86; // [rsp+B0h] [rbp-198h]
  struct DXGDEVICE *v87; // [rsp+B8h] [rbp-190h]
  __int64 v88; // [rsp+C0h] [rbp-188h]
  unsigned int v89; // [rsp+C8h] [rbp-180h]
  __int64 v90; // [rsp+D0h] [rbp-178h]
  unsigned int v91; // [rsp+D8h] [rbp-170h]
  __int64 v92; // [rsp+E0h] [rbp-168h]
  unsigned int v93; // [rsp+E8h] [rbp-160h]
  unsigned int v94; // [rsp+ECh] [rbp-15Ch]
  unsigned int v95; // [rsp+F0h] [rbp-158h]
  unsigned int v96; // [rsp+F4h] [rbp-154h]
  unsigned int v97; // [rsp+F8h] [rbp-150h]
  unsigned int v98; // [rsp+FCh] [rbp-14Ch]
  unsigned int v99; // [rsp+100h] [rbp-148h]
  unsigned int v100; // [rsp+104h] [rbp-144h]
  struct DXGADAPTER *v101; // [rsp+108h] [rbp-140h]
  unsigned int v102; // [rsp+110h] [rbp-138h]
  __int64 v103; // [rsp+118h] [rbp-130h]
  unsigned int v104; // [rsp+120h] [rbp-128h]
  unsigned int v105; // [rsp+124h] [rbp-124h]
  unsigned int v106; // [rsp+128h] [rbp-120h]
  unsigned int v107; // [rsp+130h] [rbp-118h]
  unsigned int v108; // [rsp+138h] [rbp-110h]
  unsigned int v109; // [rsp+13Ch] [rbp-10Ch]
  unsigned int v110; // [rsp+140h] [rbp-108h]
  _BYTE v111[16]; // [rsp+148h] [rbp-100h] BYREF
  __int64 v112; // [rsp+158h] [rbp-F0h]
  __int64 v113; // [rsp+160h] [rbp-E8h]
  __int64 v114; // [rsp+168h] [rbp-E0h]
  _BYTE v115[16]; // [rsp+170h] [rbp-D8h] BYREF
  __int64 v116; // [rsp+180h] [rbp-C8h]
  __int64 v117; // [rsp+188h] [rbp-C0h]
  __int64 v118; // [rsp+190h] [rbp-B8h]
  _BYTE v119[56]; // [rsp+198h] [rbp-B0h] BYREF
  struct _VIDSCH_GLOBAL *v120; // [rsp+1D0h] [rbp-78h]
  struct _VIDSCH_DEVICE *v121; // [rsp+1D8h] [rbp-70h]
  unsigned int (*v122)(void); // [rsp+1E0h] [rbp-68h]
  struct _VIDSCH_DEVICE *VidSchDevice; // [rsp+1E8h] [rbp-60h]
  struct _VIDSCH_GLOBAL *v124; // [rsp+1F0h] [rbp-58h]
  unsigned int (__fastcall *v125)(_QWORD); // [rsp+1F8h] [rbp-50h]
  struct _VIDSCH_GLOBAL *v126; // [rsp+200h] [rbp-48h]
  struct _VIDSCH_GLOBAL *VidSchGlobal; // [rsp+208h] [rbp-40h]
  struct _VIDSCH_GLOBAL *v128; // [rsp+210h] [rbp-38h]
  _BYTE v129[24]; // [rsp+218h] [rbp-30h] BYREF
  signed __int64 v130; // [rsp+230h] [rbp-18h]

  v64 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v112 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v112 + 24) = -1073741811LL;
    v74 = WdLogEvent5_WdError(v112);
    return 3221225485LL;
  }
  v122 = (unsigned int (*)(void))*((_QWORD *)DXGPROCESS::GetWin32kInterface(Current) + 27);
  if ( !v122() )
  {
    v118 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v118 + 24) = -1073741790LL;
    v72 = WdLogEvent5_WdWarning(v118);
    return 3221225506LL;
  }
  v125 = (unsigned int (__fastcall *)(_QWORD))*((_QWORD *)DXGPROCESS::GetWin32kInterface(Current) + 28);
  if ( v125(0LL) )
  {
    Global = DXGGLOBAL::GetGlobal(v10);
    return DXGGLOBAL::RemoteSessionWaitForVerticalBlankEvent(Global);
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v129, Current);
  v79 = (__int64 *)((char *)Current + 216);
  v65 = (a1 & 0x3FFFFFC0) >> 6;
  v110 = (a1 & 0xC0000000) >> 30;
  if ( v65 < *((_DWORD *)Current + 58) )
  {
    v13 = *v79;
    if ( v110 == ((*(_DWORD *)(*v79 + 16LL * v65 + 8) >> 4) & 3) )
    {
      v13 = *v79;
      if ( ((*(_DWORD *)(*v79 + 16LL * v65 + 8) >> 12) & 1) != 0 )
      {
        v52 = 0;
      }
      else
      {
        v13 = *v79;
        v52 = (*(_DWORD *)(*v79 + 16LL * v65 + 8) & 0xF) != 0;
      }
    }
    else
    {
      v52 = 0;
    }
  }
  else
  {
    v52 = 0;
  }
  if ( v52 )
  {
    v82 = (a1 & 0x3FFFFFC0) >> 6;
    v13 = *v79;
    if ( (*(_DWORD *)(*v79 + 16LL * v82 + 8) & 0xF) == 1 )
    {
      v13 = *v79;
      v101 = *(struct DXGADAPTER **)(*v79 + 16LL * v82);
    }
    else
    {
      v101 = 0LL;
    }
  }
  else
  {
    v101 = 0LL;
  }
  v84 = v101;
  if ( !v101 )
  {
    v103 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v103 + 24) = a1;
    *(_QWORD *)(v103 + 32) = -1073741811LL;
    v76 = WdLogEvent5_WdWarning(v103);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v129);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v78 = (__int64 *)((char *)Current + 216);
    v66 = (a2 & 0x3FFFFFC0) >> 6;
    v100 = (a2 & 0xC0000000) >> 30;
    if ( v66 < *((_DWORD *)Current + 58) )
    {
      v13 = *v78;
      if ( v100 == ((*(_DWORD *)(*v78 + 16LL * v66 + 8) >> 4) & 3) )
      {
        v13 = *v78;
        if ( ((*(_DWORD *)(*v78 + 16LL * v66 + 8) >> 12) & 1) != 0 )
        {
          v53 = 0;
        }
        else
        {
          v13 = *v78;
          v53 = (*(_DWORD *)(*v78 + 16LL * v66 + 8) & 0xF) != 0;
        }
      }
      else
      {
        v53 = 0;
      }
    }
    else
    {
      v53 = 0;
    }
    if ( v53 )
    {
      v83 = (a2 & 0x3FFFFFC0) >> 6;
      v13 = *v78;
      if ( (*(_DWORD *)(*v78 + 16LL * v83 + 8) & 0xF) == 3 )
      {
        v13 = *v78;
        v87 = *(struct DXGDEVICE **)(*v78 + 16LL * v83);
      }
      else
      {
        v87 = 0LL;
      }
    }
    else
    {
      v87 = 0LL;
    }
    v64 = v87;
    if ( !v87 )
    {
      v88 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v88 + 24) = v84;
      *(_QWORD *)(v88 + 32) = a2;
      v68 = WdLogEvent5_WdWarning(v88);
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v129);
      return 3221225485LL;
    }
    v130 = _InterlockedIncrement64((volatile signed __int64 *)v64 + 8);
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v129);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63, v64);
  PairingAdapters = DxgkpGetPairingAdapters(v84, a3, &v57, &v62);
  if ( PairingAdapters < 0 )
  {
    v85 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v85[3] = v84;
    v85[4] = a3;
    v85[5] = PairingAdapters;
    v73 = WdLogEvent5_WdError(v85);
    v102 = PairingAdapters;
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
    return v102;
  }
  if ( !v57 || !v62 )
  {
    v116 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v116 + 24) = 23568LL;
    v75 = WdLogEvent5_WdAssertion(v116);
  }
  if ( v64 )
  {
    RenderAdapter = DXGDEVICE::GetRenderAdapter(v64);
    if ( v57 != RenderAdapter || (DisplayAdapter = DXGDEVICE::GetDisplayAdapter(v64), v62 != DisplayAdapter) )
    {
      v90 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v90 + 24) = v84;
      *(_QWORD *)(v90 + 32) = a2;
      v77 = WdLogEvent5_WdWarning(v90);
      v109 = -1073741811;
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
      return v109;
    }
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v119, v57, v62);
  DXGADAPTER::ReleaseReference(v57);
  DXGADAPTER::ReleaseReference(v62);
  if ( (unsigned int)DXGADAPTER::GetPowerTransitionState((__int64)v62) == 1 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v115, v57, 1);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v111, v62, 0);
    if ( v62 != v57 )
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
    if ( !DXGADAPTER::IsActive(v57) || !DXGADAPTER::IsActive(v62) )
    {
      v94 = -1073741130;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v115);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
      return v94;
    }
    DisplayCore = DXGADAPTER::GetDisplayCore(v62);
    if ( a3 >= (unsigned int)ADAPTER_DISPLAY::GetNumVidPnSources(DisplayCore) )
    {
      v92 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      *(_QWORD *)(v92 + 24) = a3;
      *(_QWORD *)(v92 + 32) = -1073741811LL;
      v70 = WdLogEvent5_WdWarning(v92);
      v95 = -1073741811;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v115);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
      return v95;
    }
    if ( DXGADAPTER::IsDisplayOnlyAdapter(v62) )
    {
      if ( !(unsigned __int8)DXGADAPTER::IsVSyncAvailable(v62, a3) )
      {
        v97 = -1071775738;
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v115);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
        return v97;
      }
    }
    else
    {
      RenderCore = DXGADAPTER::GetRenderCore(v57);
      VidSchGlobal = ADAPTER_RENDER::GetVidSchGlobal(RenderCore);
      v29 = DXGADAPTER::GetRenderCore(v57);
      VidSchExport = ADAPTER_RENDER::GetVidSchExport(v29);
      if ( !(unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncAvailable(VidSchExport, VidSchGlobal, a3) )
      {
        v99 = -1071775738;
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v115);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
        return v99;
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v115);
  }
  v55 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v119);
  if ( v55 < 0 )
  {
    v106 = v55;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
    return v106;
  }
  if ( !DXGADAPTER::IsRenderAdapter(v57) )
  {
    v114 = WdLogNewEntry5_WdAssertion(v31);
    *(_QWORD *)(v114 + 24) = 23637LL;
    v69 = WdLogEvent5_WdAssertion(v114);
  }
  if ( !DXGADAPTER::IsDisplayAdapter(v62) )
  {
    v117 = WdLogNewEntry5_WdAssertion(v32);
    *(_QWORD *)(v117 + 24) = 23638LL;
    v67 = WdLogEvent5_WdAssertion(v117);
  }
  if ( a2 && (unsigned int)DXGDEVICE::GetExecutionState((__int64)v64) != 1 )
  {
    v89 = -1073741130;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
    return v89;
  }
  v60 = 0;
  v61[0] = 0;
  v59 = 0;
  v58 = 0;
  v81 = 0;
  if ( DXGADAPTER::IsDisplayOnlyAdapter(v62) )
  {
    if ( !(unsigned __int8)DXGADAPTER::IsVSyncAvailable(v62, a3) )
    {
      v93 = -1071775738;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
      return v93;
    }
    v45 = DXGADAPTER::GetDisplayCore(v62);
    ADAPTER_DISPLAY::ControlVSyncAdapter(v45, a3);
  }
  else
  {
    if ( v62 != v57 )
    {
      v113 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v113 + 24) = 23656LL;
      v71 = WdLogEvent5_WdAssertion(v113);
    }
    v34 = DXGADAPTER::GetRenderCore(v57);
    v126 = ADAPTER_RENDER::GetVidSchGlobal(v34);
    v35 = DXGADAPTER::GetRenderCore(v57);
    v36 = ADAPTER_RENDER::GetVidSchExport(v35);
    if ( !(unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncAvailable(v36, v126, a3) )
    {
      v107 = -1071775738;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
      return v107;
    }
    DXGADAPTER::IncrementVSyncWaiter(v57);
    v60 = 1;
    v37 = DXGADAPTER::GetRenderCore(v57);
    v120 = ADAPTER_RENDER::GetVidSchGlobal(v37);
    v38 = DXGADAPTER::GetRenderCore(v57);
    v39 = ADAPTER_RENDER::GetVidSchExport(v38);
    if ( !(unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncEnabled(v39, v120, a3) )
    {
      if ( v64 )
      {
        VidSchDevice = DXGDEVICE::GetVidSchDevice(v64);
        v40 = DXGADAPTER::GetRenderCore(v57);
        v41 = ADAPTER_RENDER::GetVidSchExport(v40);
        if ( (int)VIDSCH_EXPORT::VidSchControlVSyncDevice((__int64)v41, (__int64)VidSchDevice, 0LL, 1) < 0 )
        {
          DXGADAPTER::DecrementVSyncWaiter(v57);
          v91 = -1071775738;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
          return v91;
        }
        v58 = 1;
      }
      else
      {
        v42 = DXGADAPTER::GetRenderCore(v57);
        v124 = ADAPTER_RENDER::GetVidSchGlobal(v42);
        v43 = DXGADAPTER::GetRenderCore(v57);
        v44 = ADAPTER_RENDER::GetVidSchExport(v43);
        if ( (int)VIDSCH_EXPORT::VidSchControlVSyncAdapter((__int64)v44, (__int64)v124, 1LL, 1) < 0 )
        {
          DXGADAPTER::DecrementVSyncWaiter(v57);
          v108 = -1071775738;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
          return v108;
        }
        v59 = 1;
      }
    }
  }
  v86 = DXGADAPTER::NumberOfVSyncWaiter(v57);
  v46 = DXGADAPTER::GetDisplayCore(v62);
  ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(v46, a3, a4, v86, v61);
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v119);
  if ( v60 && v61[0] )
    DXGADAPTER::DecrementVSyncWaiter(v57);
  if ( v59 )
  {
    v56 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v119);
    if ( v56 < 0 )
    {
      v105 = v56;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
      return v105;
    }
    v47 = DXGADAPTER::GetRenderCore(v57);
    v128 = ADAPTER_RENDER::GetVidSchGlobal(v47);
    v48 = DXGADAPTER::GetRenderCore(v57);
    v49 = ADAPTER_RENDER::GetVidSchExport(v48);
    v55 = VIDSCH_EXPORT::VidSchControlVSyncAdapter((__int64)v49, (__int64)v128, 1LL, 0);
  }
  else if ( v58 )
  {
    v55 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v119);
    if ( v55 < 0 )
    {
      v96 = v55;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
      return v96;
    }
    if ( (unsigned int)DXGDEVICE::GetExecutionState((__int64)v64) == 1 )
    {
      v121 = DXGDEVICE::GetVidSchDevice(v64);
      v50 = DXGADAPTER::GetRenderCore(v57);
      v51 = ADAPTER_RENDER::GetVidSchExport(v50);
      v55 = VIDSCH_EXPORT::VidSchControlVSyncDevice((__int64)v51, (__int64)v121, 0LL, 0);
    }
  }
  if ( v55 >= 0 && v81 )
  {
    v98 = v81;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
    return v98;
  }
  else
  {
    v104 = v55;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v63);
    return v104;
  }
}
