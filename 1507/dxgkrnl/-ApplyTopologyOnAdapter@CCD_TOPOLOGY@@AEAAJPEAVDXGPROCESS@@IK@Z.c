/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C0065524
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0066644 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001B68 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0006570 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0006720 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A784 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C005E564 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C0079BDC (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0095C98 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0095D44 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C009BADC (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0126BF0 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0156B24 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEAU_LUID@@IJ@Z @ 0x1C017DB68 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEAU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGFASTMUTEX *const *a2,
        unsigned int a3,
        unsigned int a4)
{
  volatile signed __int64 *v4; // rbx
  char v7; // r13
  __int64 v8; // r14
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rcx
  ADAPTER_DISPLAY *v16; // rcx
  unsigned int v17; // r12d
  int i; // r13d
  __int64 v19; // rcx
  __int64 v20; // rbx
  const struct tagRECT *DwmClipBox; // rax
  __int64 v22; // rbx
  __int64 v23; // xmm1_8
  __int128 v24; // xmm0
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // ebx
  int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v29; // rcx
  struct D3DKMDT_HVIDPN__ *v30; // r12
  unsigned int v31; // r8d
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r12
  __int64 v38; // rdi
  __int64 v39; // r13
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  ADAPTER_DISPLAY *v44; // r8
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rdx
  int v49; // r9d
  int v50; // ebx
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // eax
  bool v54; // zf
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  signed __int32 v62; // ebx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  unsigned int v78; // r9d
  unsigned int v79; // r8d
  __int64 v80; // r13
  __int64 v81; // rax
  _QWORD *v82; // rsi
  struct _DEVICE_OBJECT *v83; // rcx
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  DXGDEVICE *v86; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v87; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v88; // [rsp+5Ch] [rbp-7Dh] BYREF
  unsigned int v89; // [rsp+60h] [rbp-79h] BYREF
  __int64 v90; // [rsp+68h] [rbp-71h]
  __int64 v91; // [rsp+70h] [rbp-69h]
  __int64 v92; // [rsp+78h] [rbp-61h] BYREF
  _BYTE v93[8]; // [rsp+80h] [rbp-59h] BYREF
  char v94; // [rsp+88h] [rbp-51h]
  struct tagRECT v95; // [rsp+90h] [rbp-49h]
  struct D3DKMDT_HVIDPN__ *v96; // [rsp+A0h] [rbp-39h] BYREF
  _BYTE v97[128]; // [rsp+B0h] [rbp-29h] BYREF
  unsigned __int8 v98; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v99; // [rsp+150h] [rbp+77h]
  char v100; // [rsp+158h] [rbp+7Fh]

  v99 = a3;
  v4 = 0LL;
  v98 = 0;
  v86 = 0LL;
  v100 = 0;
  v7 = 0;
  v88 = 0;
  v87 = 0;
  v89 = 0;
  v90 = a4;
  v8 = 168LL * a4;
  while ( 1 )
  {
    if ( v4 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
        (struct DXGDEVICE *)v4);
      if ( _InterlockedExchangeAdd64(v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v86 + 2), v86);
      v86 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                             &v86,
                                             0LL);
    v11 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v85 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v85[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v85[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v85[5] = v11;
      WdLogEvent5_WdError(v85);
      return (unsigned int)v11;
    }
    v4 = (volatile signed __int64 *)v86;
    v12 = *((_QWORD *)v86 + 2338);
    if ( !v12 )
    {
      v84 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      LODWORD(v14) = -1073741811;
      v84[3] = v4;
      v84[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v84[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v84[6] = -1073741811LL;
      WdLogEvent5_WdError(v84);
      v54 = _InterlockedExchangeAdd64(v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_44;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v92, v86);
    DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v93, a2);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v93);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v97, (__int64)v4, 1, v13, 0);
    v14 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v97);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v4) )
      break;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
    if ( v94 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v93);
    ExReleaseResourceLite(*(PERESOURCE *)(v92 + 80));
    KeLeaveCriticalRegion();
  }
  if ( (int)v14 < 0 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v66[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
    v66[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
    v66[5] = *((_QWORD *)this + 8);
    v66[6] = v14;
    WdLogEvent5_WdError(v66);
  }
  else
  {
    v16 = *(ADAPTER_DISPLAY **)(v12 + 1976);
    v17 = 0;
    for ( i = 1; v17 < *((_DWORD *)v16 + 20); i *= 2 )
    {
      if ( (i & *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 144)) != 0 )
      {
        v56 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(v16, v17);
        v58 = v56;
        if ( v56 < 0 )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdError(v57);
          v67[3] = v17;
          v67[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
          v67[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
          v67[6] = v58;
          WdLogEvent5_WdError(v67);
        }
      }
      v19 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
      if ( (i & *(_DWORD *)(v19 + v8 + 148)) != 0 )
      {
        v20 = *(unsigned int *)(v19 + 4 * (v17 + 42 * v90) + 8);
        DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox(*(DXGADAPTER ***)(v12 + 1976), v17);
        v22 = 216 * v20;
        v24 = *(_OWORD *)(*((_QWORD *)this + 8) + v22 + 204);
        v95 = *DwmClipBox;
        v23 = *(_QWORD *)&v95.left;
        *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 1976) + 112LL) + 1008LL * v17 + 652) = v24;
        v25 = *((_QWORD *)this + 8);
        if ( v23 != *(_QWORD *)(v22 + v25 + 204) || *(_QWORD *)&v95.right != *(_QWORD *)(v22 + v25 + 212) )
          *(_DWORD *)(*(_QWORD *)(v25 + 40) + v8 + 160) |= i;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 1976) + 112LL) + 1008LL * v17 + 644) = *(_QWORD *)(*((_QWORD *)this + 8) + v22 + 188);
        *(_DWORD *)(*((_QWORD *)this + 8) + v22 + 252) = ADAPTER_DISPLAY::GetDisplayId(
                                                           *(ADAPTER_DISPLAY **)(v12 + 1976),
                                                           v17);
      }
      v16 = *(ADAPTER_DISPLAY **)(v12 + 1976);
      ++v17;
    }
    v26 = *((unsigned int *)this + 19);
    LOBYTE(v26) = v26 & 1;
    v27 = v99;
    PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                 *((_QWORD *)this + 8),
                                                 v12,
                                                 v26,
                                                 *((unsigned int *)this + 20),
                                                 v99,
                                                 &v96);
    v14 = PathModalityForAdapterWithCoreAccessHeld;
    if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdError(v29);
      v68[3] = *((_QWORD *)this + 8);
      v68[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v68[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v68[6] = v14;
      WdLogEvent5_WdError(v68);
      v4 = (volatile signed __int64 *)v86;
    }
    else
    {
      v30 = v96;
      v31 = v27;
      v4 = (volatile signed __int64 *)v86;
      v32 = DmmCommitVidPnOnAdapter(
              v86,
              v96,
              v31,
              &v87,
              &v88,
              &v89,
              &v98,
              (int *const)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 72),
              (struct COREDEVICEACCESS *)v97);
      v14 = v32;
      if ( v32 < 0 )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdError(v34);
        v69[3] = v30;
        v69[4] = *((_QWORD *)this + 8);
        v69[5] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
        v69[6] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
        v69[7] = v14;
        WdLogEvent5_WdError(v69);
      }
      else
      {
        v37 = v89;
        v38 = v87;
        if ( (v89 & v87) != 0 )
        {
          v70 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
          WdLogEvent5_WdAssertion(v70);
        }
        v39 = v88;
        if ( (v88 | (unsigned int)v38) != (_DWORD)v38 || (v88 & (unsigned int)v38) != v88 )
        {
          v71 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
          WdLogEvent5_WdAssertion(v71);
        }
        v40 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
        v41 = (unsigned int)v38 & (*(_DWORD *)(v40 + v8 + 144) | *(_DWORD *)(v40 + v8 + 148));
        if ( (_DWORD)v38 != (_DWORD)v41 )
        {
          v72 = WdLogNewEntry5_WdAssertion(v40, v41, v35, v36);
          WdLogEvent5_WdAssertion(v72);
        }
        v42 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
        if ( (_DWORD)v37 != ((unsigned int)v37 & *(_DWORD *)(v42 + v8 + 144))
          || ((unsigned int)v37 & *(_DWORD *)(v42 + v8 + 148)) != 0 )
        {
          v73 = WdLogNewEntry5_WdAssertion(v42, v41, v35, v36);
          WdLogEvent5_WdAssertion(v73);
        }
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 152) = v38;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 156) = v39;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 164) = v37;
        v43 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v43[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
        v43[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
        v43[5] = v38;
        v43[6] = v39;
        v43[7] = v37;
        WdLogEvent5_WdDmmEvent(v43);
        if ( v98 )
        {
          v74 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v74[3] = *((_QWORD *)this + 8);
          v74[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
          v74[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
          WdLogEvent5_WdDmmEvent(v74);
          v100 = 1;
        }
        v44 = *(ADAPTER_DISPLAY **)(v12 + 1976);
        v45 = 0LL;
        if ( *((_DWORD *)v44 + 20) )
        {
          v46 = 42 * v90;
          *(_QWORD *)&v95.left = 42 * v90;
          do
          {
            v47 = v46 + v45;
            v48 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
            v49 = *(_DWORD *)(v48 + 4 * (v46 + v45) + 72);
            if ( v49 < 0 )
            {
              CCD_TOPOLOGY::MarkPathsApplyFailure(this, (struct _LUID *)(v8 + v48), v45, v49);
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * v47 + 72) == -1071774920 && !v100 )
              {
                v75 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
                v75[3] = *((_QWORD *)this + 8);
                v75[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
                v75[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
                v75[6] = (unsigned int)v45;
                WdLogEvent5_WdDmmEvent(v75);
                v100 = 1;
              }
            }
            else
            {
              v50 = 1 << v45;
              if ( ((1 << v45) & *(_DWORD *)(v48 + v8 + 148)) != 0 )
              {
                LODWORD(v91) = ADAPTER_DISPLAY::SetCopyProtectionWithLock(v44, v45);
                if ( (int)v91 < 0 )
                {
                  v76 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
                  v76[3] = (unsigned int)v45;
                  v76[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
                  v76[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
                  v76[6] = (int)v91;
                  WdLogEvent5_WdDmmEvent(v76);
                }
                v51 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
                if ( (v50 & *(_DWORD *)(v51 + v8 + 152)) != 0 && (v50 & *(_DWORD *)(v51 + v8 + 156)) == 0 )
                {
                  Global = DXGGLOBAL::GetGlobal();
                  do
                    v62 = _InterlockedIncrement((volatile signed __int32 *)Global + 200);
                  while ( !v62 );
                  v63 = *((_QWORD *)this + 8);
                  v64 = *(unsigned int *)(*(_QWORD *)(v63 + 40) + 4 * v47 + 8);
                  *(_DWORD *)(216 * v64 + v63 + 252) = v62;
                  v65 = *(_QWORD *)(v12 + 1976);
                  v91 = v65;
                  if ( (unsigned int)v45 >= *(_DWORD *)(v65 + 80) )
                  {
                    v77 = WdLogNewEntry5_WdAssertion(v64, v63, v60, v61);
                    *(_QWORD *)(v77 + 24) = 3770LL;
                    WdLogEvent5_WdAssertion(v77);
                    v65 = v91;
                  }
                  *(_DWORD *)(*(_QWORD *)(v65 + 112) + 1008LL * (unsigned int)v45 + 624) = v62;
                }
              }
            }
            v52 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
            v53 = *(_DWORD *)(v52 + v8 + 140);
            if ( _bittest(&v53, v45) || *(int *)(v52 + 4 * v47 + 72) < 0 )
              ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(*(ADAPTER_DISPLAY **)(v12 + 1976), v45);
            v44 = *(ADAPTER_DISPLAY **)(v12 + 1976);
            v45 = (unsigned int)(v45 + 1);
            v46 = *(_QWORD *)&v95.left;
          }
          while ( (unsigned int)v45 < *((_DWORD *)v44 + 20) );
          v4 = (volatile signed __int64 *)v86;
        }
        LODWORD(v14) = 0;
      }
    }
    v7 = v100;
  }
  if ( (int)v14 < 0 )
  {
    v78 = 0;
    v79 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 144) | *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL)
                                                                                        + v8
                                                                                        + 148);
    if ( *(_DWORD *)(*(_QWORD *)(v12 + 1976) + 80LL) )
    {
      v80 = v90;
      do
      {
        if ( (v79 & 1) != 0 )
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * (v78 + 42 * v80) + 72) = v14;
        ++v78;
        v79 >>= 1;
      }
      while ( v78 < *(_DWORD *)(*(_QWORD *)(v12 + 1976) + 80LL) );
      v7 = v100;
    }
    CCD_TOPOLOGY::MarkPathsApplyFailure(
      this,
      (struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
      0xFFFFFFFF,
      v14);
  }
  if ( v7 )
  {
    v81 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v81 + 24) = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
    *(_QWORD *)(v81 + 32) = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
    WdLogEvent5_WdDmmEvent(v81);
    v82 = *(_QWORD **)(v12 + 176);
    ObfReferenceObject(v82);
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v97);
    v83 = *(struct _DEVICE_OBJECT **)(v82[8] + 152LL);
    if ( v83 )
      IoInvalidateDeviceRelations(v83, BusRelations);
    ObfDereferenceObject(v82);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
  if ( v94 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v93);
  ExReleaseResourceLite(*(PERESOURCE *)(v92 + 80));
  KeLeaveCriticalRegion();
  v54 = _InterlockedExchangeAdd64(v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_44:
  if ( v54 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v86 + 2), v86);
  return (unsigned int)v14;
}
