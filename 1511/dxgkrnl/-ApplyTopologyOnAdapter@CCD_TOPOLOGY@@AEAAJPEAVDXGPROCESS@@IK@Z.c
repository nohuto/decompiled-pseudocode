/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C00A3CD0
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4E18 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003638 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C00075BC (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00078C4 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000AE8C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000AEAC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C006CBD4 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A798 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A844 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00A7368 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00B0870 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C012CDA4 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C015AE3C (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEAU_LUID@@IJ@Z @ 0x1C0181FE0 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEAU_LUID@@IJ@Z.c)
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
  __int64 v16; // rcx
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
  __int64 v33; // rcx
  __int64 v34; // r12
  __int64 v35; // rdi
  __int64 v36; // r13
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rdx
  int v47; // r9d
  int v48; // ebx
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // eax
  bool v52; // zf
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rbx
  struct DXGGLOBAL *Global; // rax
  signed __int32 v58; // ebx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rcx
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  unsigned int v75; // r9d
  unsigned int v76; // r8d
  __int64 v77; // r13
  __int64 v78; // rax
  _QWORD *v79; // rsi
  struct _DEVICE_OBJECT *v80; // rcx
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  DXGDEVICE *v83; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v84; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v85; // [rsp+5Ch] [rbp-7Dh] BYREF
  unsigned int v86; // [rsp+60h] [rbp-79h] BYREF
  __int64 v87; // [rsp+68h] [rbp-71h]
  __int64 v88; // [rsp+70h] [rbp-69h]
  _BYTE v89[8]; // [rsp+78h] [rbp-61h] BYREF
  char v90; // [rsp+80h] [rbp-59h]
  struct tagRECT v91; // [rsp+88h] [rbp-51h]
  struct D3DKMDT_HVIDPN__ *v92; // [rsp+98h] [rbp-41h] BYREF
  _BYTE v93[16]; // [rsp+A0h] [rbp-39h] BYREF
  _BYTE v94[128]; // [rsp+B0h] [rbp-29h] BYREF
  unsigned __int8 v95; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v96; // [rsp+150h] [rbp+77h]
  char v97; // [rsp+158h] [rbp+7Fh]

  v96 = a3;
  v4 = 0LL;
  v95 = 0;
  v83 = 0LL;
  v97 = 0;
  v7 = 0;
  v85 = 0;
  v84 = 0;
  v86 = 0;
  v87 = a4;
  v8 = 168LL * a4;
  while ( 1 )
  {
    if ( v4 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
        (struct DXGDEVICE *)v4);
      if ( _InterlockedExchangeAdd64(v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v83 + 2), v83);
      v83 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                             &v83,
                                             0LL);
    v11 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v82 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v82[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v82[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v82[5] = v11;
      WdLogEvent5_WdError(v82);
      return (unsigned int)v11;
    }
    v4 = (volatile signed __int64 *)v83;
    v12 = *((_QWORD *)v83 + 354);
    if ( !v12 )
    {
      v81 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      LODWORD(v14) = -1073741811;
      v81[3] = v4;
      v81[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v81[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v81[6] = -1073741811LL;
      WdLogEvent5_WdError(v81);
      v52 = _InterlockedExchangeAdd64(v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_44;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v93, v83);
    DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v89, a2);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v89);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v94, (__int64)v4, 1, v13, 0);
    v14 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v94);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v4) )
      break;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
    if ( v90 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v89);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v93);
  }
  if ( (int)v14 < 0 )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v62[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
    v62[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
    v62[5] = *((_QWORD *)this + 8);
    v62[6] = v14;
    WdLogEvent5_WdError(v62);
  }
  else
  {
    v16 = *(_QWORD *)(v12 + 1984);
    v17 = 0;
    for ( i = 1; v17 < *(_DWORD *)(v16 + 104); i *= 2 )
    {
      if ( (i & *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 144)) != 0 )
      {
        v54 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource((DXGADAPTER **)v16, v17);
        v56 = v54;
        if ( v54 < 0 )
        {
          v63 = (_QWORD *)WdLogNewEntry5_WdError(v55);
          v63[3] = v17;
          v63[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
          v63[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
          v63[6] = v56;
          WdLogEvent5_WdError(v63);
        }
      }
      v19 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
      if ( (i & *(_DWORD *)(v19 + v8 + 148)) != 0 )
      {
        v20 = *(unsigned int *)(v19 + 4 * (v17 + 42 * v87) + 8);
        DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox(*(DXGADAPTER ***)(v12 + 1984), v17);
        v22 = 216 * v20;
        v24 = *(_OWORD *)(*((_QWORD *)this + 8) + v22 + 204);
        v91 = *DwmClipBox;
        v23 = *(_QWORD *)&v91.left;
        *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 1984) + 136LL) + 1016LL * v17 + 652) = v24;
        v25 = *((_QWORD *)this + 8);
        if ( v23 != *(_QWORD *)(v22 + v25 + 204) || *(_QWORD *)&v91.right != *(_QWORD *)(v22 + v25 + 212) )
          *(_DWORD *)(*(_QWORD *)(v25 + 40) + v8 + 160) |= i;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 1984) + 136LL) + 1016LL * v17 + 644) = *(_QWORD *)(*((_QWORD *)this + 8) + v22 + 188);
        *(_DWORD *)(*((_QWORD *)this + 8) + v22 + 252) = ADAPTER_DISPLAY::GetDisplayId(
                                                           *(ADAPTER_DISPLAY **)(v12 + 1984),
                                                           v17);
      }
      v16 = *(_QWORD *)(v12 + 1984);
      ++v17;
    }
    v26 = *((unsigned int *)this + 19);
    LOBYTE(v26) = v26 & 1;
    v27 = v96;
    PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                 *((_QWORD *)this + 8),
                                                 v12,
                                                 v26,
                                                 *((unsigned int *)this + 20),
                                                 v96,
                                                 &v92);
    v14 = PathModalityForAdapterWithCoreAccessHeld;
    if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdError(v29);
      v64[3] = *((_QWORD *)this + 8);
      v64[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v64[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v64[6] = v14;
      WdLogEvent5_WdError(v64);
      v4 = (volatile signed __int64 *)v83;
    }
    else
    {
      v30 = v92;
      v31 = v27;
      v4 = (volatile signed __int64 *)v83;
      v32 = DmmCommitVidPnOnAdapter(
              v83,
              v92,
              v31,
              &v84,
              &v85,
              &v86,
              &v95,
              (int *const)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 72),
              (struct COREDEVICEACCESS *)v94);
      v14 = v32;
      if ( v32 < 0 )
      {
        v65 = (_QWORD *)WdLogNewEntry5_WdError(v33);
        v65[3] = v30;
        v65[4] = *((_QWORD *)this + 8);
        v65[5] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
        v65[6] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
        v65[7] = v14;
        WdLogEvent5_WdError(v65);
      }
      else
      {
        v34 = v86;
        v35 = v84;
        if ( (v86 & v84) != 0 )
        {
          v66 = WdLogNewEntry5_WdAssertion(v33);
          WdLogEvent5_WdAssertion(v66);
        }
        v36 = v85;
        if ( (v85 | (unsigned int)v35) != (_DWORD)v35 || (v85 & (unsigned int)v35) != v85 )
        {
          v67 = WdLogNewEntry5_WdAssertion(v33);
          WdLogEvent5_WdAssertion(v67);
        }
        v37 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
        if ( (_DWORD)v35 != ((unsigned int)v35 & (*(_DWORD *)(v37 + v8 + 144) | *(_DWORD *)(v37 + v8 + 148))) )
        {
          v68 = WdLogNewEntry5_WdAssertion(v37);
          WdLogEvent5_WdAssertion(v68);
        }
        v38 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
        if ( (_DWORD)v34 != ((unsigned int)v34 & *(_DWORD *)(v38 + v8 + 144))
          || ((unsigned int)v34 & *(_DWORD *)(v38 + v8 + 148)) != 0 )
        {
          v69 = WdLogNewEntry5_WdAssertion(v38);
          WdLogEvent5_WdAssertion(v69);
        }
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 152) = v35;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 156) = v36;
        v39 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
        *(_DWORD *)(v39 + v8 + 164) = v34;
        v40 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v39);
        v40[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
        v40[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
        v40[5] = v35;
        v40[6] = v36;
        v40[7] = v34;
        WdLogEvent5_WdDmmEvent(v40);
        if ( v95 )
        {
          v70 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v41);
          v70[3] = *((_QWORD *)this + 8);
          v70[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
          v70[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
          WdLogEvent5_WdDmmEvent(v70);
          v97 = 1;
        }
        v42 = *(_QWORD *)(v12 + 1984);
        v43 = 0LL;
        if ( *(_DWORD *)(v42 + 104) )
        {
          v44 = 42 * v87;
          *(_QWORD *)&v91.left = 42 * v87;
          do
          {
            v45 = v44 + v43;
            v46 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
            v47 = *(_DWORD *)(v46 + 4 * (v44 + v43) + 72);
            if ( v47 < 0 )
            {
              CCD_TOPOLOGY::MarkPathsApplyFailure(this, (struct _LUID *)(v8 + v46), v43, v47);
              v71 = *((_QWORD *)this + 8);
              if ( *(_DWORD *)(*(_QWORD *)(v71 + 40) + 4 * v45 + 72) == -1071774920 && !v97 )
              {
                v72 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v71);
                v72[3] = *((_QWORD *)this + 8);
                v72[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
                v72[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
                v72[6] = (unsigned int)v43;
                WdLogEvent5_WdDmmEvent(v72);
                v97 = 1;
              }
            }
            else
            {
              v48 = 1 << v43;
              if ( ((1 << v43) & *(_DWORD *)(v46 + v8 + 148)) != 0 )
              {
                LODWORD(v88) = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)v42, v43);
                if ( (int)v88 < 0 )
                {
                  v73 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v49);
                  v73[3] = (unsigned int)v43;
                  v73[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
                  v73[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
                  v73[6] = (int)v88;
                  WdLogEvent5_WdDmmEvent(v73);
                }
                v50 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
                if ( (v48 & *(_DWORD *)(v50 + v8 + 152)) != 0 && (v48 & *(_DWORD *)(v50 + v8 + 156)) == 0 )
                {
                  Global = DXGGLOBAL::GetGlobal(v50);
                  do
                    v58 = _InterlockedIncrement((volatile signed __int32 *)Global + 236);
                  while ( !v58 );
                  v59 = *((_QWORD *)this + 8);
                  v60 = *(unsigned int *)(*(_QWORD *)(v59 + 40) + 4 * v45 + 8);
                  *(_DWORD *)(216 * v60 + v59 + 252) = v58;
                  v61 = *(_QWORD *)(v12 + 1984);
                  v88 = v61;
                  if ( (unsigned int)v43 >= *(_DWORD *)(v61 + 104) )
                  {
                    v74 = WdLogNewEntry5_WdAssertion(v60);
                    *(_QWORD *)(v74 + 24) = 3909LL;
                    WdLogEvent5_WdAssertion(v74);
                    v61 = v88;
                  }
                  *(_DWORD *)(*(_QWORD *)(v61 + 136) + 1016LL * (unsigned int)v43 + 624) = v58;
                }
              }
            }
            v41 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
            v51 = *(_DWORD *)(v41 + v8 + 140);
            if ( _bittest(&v51, v43) || *(int *)(v41 + 4 * v45 + 72) < 0 )
              ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(*(ADAPTER_DISPLAY **)(v12 + 1984), v43);
            v42 = *(_QWORD *)(v12 + 1984);
            v43 = (unsigned int)(v43 + 1);
            v44 = *(_QWORD *)&v91.left;
          }
          while ( (unsigned int)v43 < *(_DWORD *)(v42 + 104) );
          v4 = (volatile signed __int64 *)v83;
        }
        LODWORD(v14) = 0;
      }
    }
    v7 = v97;
  }
  if ( (int)v14 < 0 )
  {
    v75 = 0;
    v76 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 144) | *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL)
                                                                                        + v8
                                                                                        + 148);
    if ( *(_DWORD *)(*(_QWORD *)(v12 + 1984) + 104LL) )
    {
      v77 = v87;
      do
      {
        if ( (v76 & 1) != 0 )
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * (v75 + 42 * v77) + 72) = v14;
        ++v75;
        v76 >>= 1;
      }
      while ( v75 < *(_DWORD *)(*(_QWORD *)(v12 + 1984) + 104LL) );
      v7 = v97;
    }
    CCD_TOPOLOGY::MarkPathsApplyFailure(
      this,
      (struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
      0xFFFFFFFF,
      v14);
  }
  if ( v7 )
  {
    v78 = WdLogNewEntry5_WdDmmEvent(v41);
    *(_QWORD *)(v78 + 24) = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
    *(_QWORD *)(v78 + 32) = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
    WdLogEvent5_WdDmmEvent(v78);
    v79 = *(_QWORD **)(v12 + 176);
    ObfReferenceObject(v79);
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v94);
    v80 = *(struct _DEVICE_OBJECT **)(v79[8] + 152LL);
    if ( v80 )
      IoInvalidateDeviceRelations(v80, BusRelations);
    ObfDereferenceObject(v79);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
  if ( v90 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v89);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v93);
  v52 = _InterlockedExchangeAdd64(v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_44:
  if ( v52 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v83 + 2), v83);
  return (unsigned int)v14;
}
