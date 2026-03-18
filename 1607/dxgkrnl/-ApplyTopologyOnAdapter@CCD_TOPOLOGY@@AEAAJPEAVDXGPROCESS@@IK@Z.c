/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C008C040
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A2E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0001480 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001588 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C000620C (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0006278 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C000838C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000AC00 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0073DD0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00871E0 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0087298 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C0094F0C (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00BCB40 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 *     DxgkQueryDmmInterface @ 0x1C00C5D40 (DxgkQueryDmmInterface.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0147F74 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0180738 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C01AB1AC (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
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
  unsigned __int8 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rcx
  int DmmInterface; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // r12d
  int i; // r13d
  __int64 v22; // rcx
  __int64 v23; // rbx
  const struct tagRECT *DwmClipBox; // rax
  __int64 v25; // rbx
  __int64 v26; // xmm1_8
  __int128 v27; // xmm0
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // ebx
  __int64 v32; // rcx
  int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v34; // rcx
  struct D3DKMDT_HVIDPN__ *v35; // r12
  unsigned int v36; // r8d
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // rdi
  __int64 v41; // r13
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // r13
  int v51; // ebx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  bool v55; // zf
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rbx
  struct DXGGLOBAL *Global; // rax
  signed __int32 v61; // r12d
  __int64 v62; // rdx
  __int64 v63; // rcx
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  unsigned int v77; // r9d
  unsigned int v78; // r8d
  __int64 v79; // r13
  __int64 v80; // rax
  _QWORD *v81; // rsi
  struct _DEVICE_OBJECT *v82; // rcx
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  struct DXGDEVICE *v85; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v86; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v87; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v88; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v89; // [rsp+68h] [rbp-98h]
  __int64 v90; // [rsp+70h] [rbp-90h]
  __int64 v91; // [rsp+78h] [rbp-88h]
  _BYTE v92[8]; // [rsp+80h] [rbp-80h] BYREF
  char v93; // [rsp+88h] [rbp-78h]
  _BYTE v94[8]; // [rsp+90h] [rbp-70h] BYREF
  struct D3DKMDT_HVIDPN__ *v95; // [rsp+98h] [rbp-68h]
  void (__fastcall *v96)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+A0h] [rbp-60h]
  __int64 v97; // [rsp+A8h] [rbp-58h]
  int v98; // [rsp+B0h] [rbp-50h]
  struct tagRECT v99; // [rsp+B8h] [rbp-48h]
  __int64 v100; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v101[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v102[144]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int8 v103; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v104; // [rsp+190h] [rbp+90h]
  char v105; // [rsp+198h] [rbp+98h]

  v104 = a3;
  v4 = 0LL;
  v103 = 0;
  v85 = 0LL;
  v105 = 0;
  v7 = 0;
  v88 = 0;
  v87 = 0;
  v86 = 0;
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
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
      v85 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                             &v85,
                                             0LL);
    v11 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v84 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v84[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v84[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v84[5] = v11;
      WdLogEvent5_WdError(v84);
      return (unsigned int)v11;
    }
    v4 = (volatile signed __int64 *)v85;
    v12 = *((_QWORD *)v85 + 357);
    if ( !v12 )
    {
      v83 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      LODWORD(v15) = -1073741811;
      v83[3] = v4;
      v83[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v83[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v83[6] = -1073741811LL;
      WdLogEvent5_WdError(v83);
      v55 = _InterlockedExchangeAdd64(v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_47;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v101, v85);
    DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v92, a2, v13);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v92);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v102, (__int64)v4, 1, v14, 0);
    v15 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v102);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v4) )
      break;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v102);
    if ( v93 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v92);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v101);
  }
  if ( (int)v15 < 0 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v64[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
    v64[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
    v64[5] = *((_QWORD *)this + 8);
    v64[6] = v15;
  }
  else
  {
    v91 = 0LL;
    DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)v12);
    v15 = DmmInterface;
    if ( DmmInterface >= 0 )
    {
      v19 = *(_QWORD *)(v12 + 2128);
      v20 = 0;
      for ( i = 1; v20 < *(_DWORD *)(v19 + 80); i *= 2 )
      {
        if ( (i & *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 144)) != 0 )
        {
          v57 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource((DXGADAPTER **)v19, v20);
          v59 = v57;
          if ( v57 < 0 )
          {
            v65 = (_QWORD *)WdLogNewEntry5_WdError(v58);
            v65[3] = v20;
            v65[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
            v65[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
            v65[6] = v59;
            WdLogEvent5_WdError(v65);
          }
        }
        v22 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
        if ( (i & *(_DWORD *)(v22 + v8 + 148)) != 0 )
        {
          v23 = *(unsigned int *)(v22 + 4 * (v20 + 42 * v90) + 8);
          DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox(*(DXGADAPTER ***)(v12 + 2128), v20);
          v25 = 216 * v23;
          v27 = *(_OWORD *)(*((_QWORD *)this + 8) + v25 + 208);
          v99 = *DwmClipBox;
          v26 = *(_QWORD *)&v99.left;
          *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 2128) + 112LL) + 1016LL * v20 + 652) = v27;
          v28 = *((_QWORD *)this + 8);
          if ( v26 != *(_QWORD *)(v25 + v28 + 208) || *(_QWORD *)&v99.right != *(_QWORD *)(v25 + v28 + 216) )
            *(_DWORD *)(*(_QWORD *)(v28 + 40) + v8 + 160) |= i;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 2128) + 112LL) + 1016LL * v20 + 644) = *(_QWORD *)(*((_QWORD *)this + 8) + v25 + 192);
          *(_DWORD *)(*((_QWORD *)this + 8) + v25 + 252) = ADAPTER_DISPLAY::GetDisplayId(
                                                             *(ADAPTER_DISPLAY **)(v12 + 2128),
                                                             v20);
        }
        v19 = *(_QWORD *)(v12 + 2128);
        ++v20;
      }
      v29 = *((unsigned int *)this + 19);
      v30 = *((unsigned int *)this + 20);
      LOBYTE(v29) = v29 & 1;
      v31 = v104;
      v95 = 0LL;
      v96 = 0LL;
      v97 = 0LL;
      v98 = 0;
      v32 = *((_QWORD *)this + 8);
      v94[0] = 0;
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   v32,
                                                   v12,
                                                   v29,
                                                   v30,
                                                   v104,
                                                   &v100);
      v15 = PathModalityForAdapterWithCoreAccessHeld;
      if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
      {
        v66 = (_QWORD *)WdLogNewEntry5_WdError(v34);
        v66[3] = *((_QWORD *)this + 8);
        v66[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
        v66[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
        v66[6] = v15;
        WdLogEvent5_WdError(v66);
        v4 = (volatile signed __int64 *)v85;
      }
      else
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
          (__int64)v94,
          v100,
          *(_QWORD *)(v91 + 64),
          v12);
        v35 = v95;
        v36 = v31;
        v4 = (volatile signed __int64 *)v85;
        v37 = DmmCommitVidPnOnAdapter(
                v85,
                v95,
                v36,
                &v87,
                &v88,
                &v86,
                &v103,
                (int *const)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 72),
                (struct COREDEVICEACCESS *)v102);
        v15 = v37;
        if ( v37 < 0 )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdError(v38);
          v67[3] = v35;
          v67[4] = *((_QWORD *)this + 8);
          v67[5] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
          v67[6] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
          v67[7] = v15;
          WdLogEvent5_WdError(v67);
          if ( v94[0] )
            v96(v97, v35);
        }
        else
        {
          if ( v94[0] )
            v96(v97, v35);
          v39 = v86;
          v40 = v87;
          if ( (v86 & v87) != 0 )
          {
            v68 = WdLogNewEntry5_WdAssertion(v38);
            WdLogEvent5_WdAssertion(v68);
          }
          v41 = v88;
          if ( (v88 | (unsigned int)v40) != (_DWORD)v40 || (v88 & (unsigned int)v40) != v88 )
          {
            v69 = WdLogNewEntry5_WdAssertion(v38);
            WdLogEvent5_WdAssertion(v69);
          }
          v42 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
          if ( (_DWORD)v40 != ((unsigned int)v40 & (*(_DWORD *)(v42 + v8 + 144) | *(_DWORD *)(v42 + v8 + 148))) )
          {
            v70 = WdLogNewEntry5_WdAssertion(v42);
            WdLogEvent5_WdAssertion(v70);
          }
          v43 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
          if ( (_DWORD)v39 != ((unsigned int)v39 & *(_DWORD *)(v43 + v8 + 144))
            || ((unsigned int)v39 & *(_DWORD *)(v43 + v8 + 148)) != 0 )
          {
            v71 = WdLogNewEntry5_WdAssertion(v43);
            WdLogEvent5_WdAssertion(v71);
          }
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 152) = v40;
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 156) = v41;
          v44 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
          *(_DWORD *)(v44 + v8 + 164) = v39;
          v45 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v44);
          v45[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
          v45[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
          v45[5] = v40;
          v45[6] = v41;
          v45[7] = v39;
          WdLogEvent5_WdDmmEvent(v45);
          if ( v103 )
          {
            v72 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v46);
            v72[3] = *((_QWORD *)this + 8);
            v72[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
            v72[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
            WdLogEvent5_WdDmmEvent(v72);
            v105 = 1;
          }
          v47 = *(_QWORD *)(v12 + 2128);
          v48 = 0LL;
          if ( *(_DWORD *)(v47 + 80) )
          {
            v49 = 42 * v90;
            *(_QWORD *)&v99.left = 42 * v90;
            do
            {
              v50 = v49 + v48;
              v51 = 1 << v48;
              v52 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
              if ( *(int *)(v52 + 4 * (v49 + v48) + 72) < 0 )
              {
                *(_DWORD *)(v52 + v8 + 164) |= v51 & *(_DWORD *)(v52 + v8 + 144);
                CCD_TOPOLOGY::MarkPathsApplyFailure(
                  this,
                  (const struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8),
                  v48,
                  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * v50 + 72));
                v73 = *((_QWORD *)this + 8);
                if ( *(_DWORD *)(*(_QWORD *)(v73 + 40) + 4 * v50 + 72) == -1071774920 && !v105 )
                {
                  v74 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v73);
                  v74[3] = *((_QWORD *)this + 8);
                  v74[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
                  v74[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
                  v74[6] = (unsigned int)v48;
                  WdLogEvent5_WdDmmEvent(v74);
                  v105 = 1;
                }
              }
              else if ( (v51 & *(_DWORD *)(v52 + v8 + 148)) != 0 )
              {
                LODWORD(v89) = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)v47, v48);
                if ( (int)v89 < 0 )
                {
                  v75 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v53);
                  v75[3] = (unsigned int)v48;
                  v75[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
                  v75[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
                  v75[6] = (int)v89;
                  WdLogEvent5_WdDmmEvent(v75);
                }
                v54 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
                if ( (v51 & *(_DWORD *)(v54 + v8 + 152)) != 0 && (v51 & *(_DWORD *)(v54 + v8 + 156)) == 0 )
                {
                  Global = DXGGLOBAL::GetGlobal();
                  do
                    v61 = _InterlockedIncrement((volatile signed __int32 *)Global + 196);
                  while ( !v61 );
                  v62 = *((_QWORD *)this + 8);
                  v63 = *(unsigned int *)(*(_QWORD *)(v62 + 40) + 4 * v50 + 8);
                  *(_DWORD *)(216 * v63 + v62 + 252) = v61;
                  v89 = *(_QWORD *)(v12 + 2128);
                  if ( (unsigned int)v48 >= *(_DWORD *)(v89 + 80) )
                  {
                    v76 = WdLogNewEntry5_WdAssertion(v63);
                    *(_QWORD *)(v76 + 24) = 4066LL;
                    WdLogEvent5_WdAssertion(v76);
                  }
                  *(_DWORD *)(1016LL * (unsigned int)v48 + *(_QWORD *)(v89 + 112) + 624) = v61;
                }
              }
              v46 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
              if ( (v51 & *(_DWORD *)(v46 + v8 + 140)) != 0 || *(int *)(v46 + 4 * v50 + 72) < 0 )
                ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(*(ADAPTER_DISPLAY **)(v12 + 2128), v48);
              v47 = *(_QWORD *)(v12 + 2128);
              v48 = (unsigned int)(v48 + 1);
              v49 = *(_QWORD *)&v99.left;
            }
            while ( (unsigned int)v48 < *(_DWORD *)(v47 + 80) );
            v4 = (volatile signed __int64 *)v85;
          }
          LODWORD(v15) = 0;
        }
      }
      v7 = v105;
      goto LABEL_42;
    }
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v64[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
    v64[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
    v64[5] = v15;
  }
  WdLogEvent5_WdError(v64);
LABEL_42:
  if ( (int)v15 < 0 )
  {
    v77 = 0;
    v78 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 144) | *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL)
                                                                                        + v8
                                                                                        + 148);
    if ( *(_DWORD *)(*(_QWORD *)(v12 + 2128) + 80LL) )
    {
      v79 = v90;
      do
      {
        if ( (v78 & 1) != 0 )
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * (v77 + 42 * v79) + 72) = v15;
        ++v77;
        v78 >>= 1;
      }
      while ( v77 < *(_DWORD *)(*(_QWORD *)(v12 + 2128) + 80LL) );
      v7 = v105;
    }
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 164) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8)
                                                                                              + 40LL)
                                                                                  + v8
                                                                                  + 144);
    CCD_TOPOLOGY::MarkPathsApplyFailure(
      this,
      (const struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
      0xFFFFFFFF,
      v15);
  }
  if ( v7 )
  {
    v80 = WdLogNewEntry5_WdDmmEvent(v46);
    *(_QWORD *)(v80 + 24) = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
    *(_QWORD *)(v80 + 32) = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
    WdLogEvent5_WdDmmEvent(v80);
    v81 = *(_QWORD **)(v12 + 192);
    ObfReferenceObject(v81);
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v102);
    v82 = *(struct _DEVICE_OBJECT **)(v81[8] + 152LL);
    if ( v82 )
      IoInvalidateDeviceRelations(v82, BusRelations);
    ObfDereferenceObject(v81);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v102);
  if ( v93 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v92);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v101);
  v55 = _InterlockedExchangeAdd64(v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_47:
  if ( v55 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
  return (unsigned int)v15;
}
