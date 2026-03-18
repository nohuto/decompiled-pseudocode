/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x1C01304C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C00017B0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0001890 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0002850 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C1C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C68 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C00096EC (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009718 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C000E60C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000F754 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C001C0DC (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00838D0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C0132D28 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0132D90 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 */

__int64 __fastcall DxgkUpdateGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v15; // rax
  __int64 v16; // rcx
  struct DXGDEVICE *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD **v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  struct VIDMM_COMPANION_CONTEXT *VidMmCompanionContext; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rsi
  DXGALLOCATIONREFERENCE *v47; // r13
  bool v48; // of
  SIZE_T v49; // rax
  __int64 v50; // rcx
  PVOID v51; // r9
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // rcx
  bool v55; // zf
  size_t v56; // r8
  char *v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 i; // rcx
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rax
  void *v65; // rcx
  unsigned int v66; // r13d
  __int64 v67; // rax
  bool v68; // cf
  SIZE_T v69; // rax
  char *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  SIZE_T v73; // rax
  _BYTE *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // r8
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 *v81; // r11
  _DWORD *v82; // rax
  unsigned int v83; // edx
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r9
  __int64 v91; // r8
  __int64 v92; // rcx
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int v96; // ecx
  __int64 v97; // rax
  __int64 v98; // r9
  int v99; // r8d
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rsi
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  int v116; // eax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // rax
  _BYTE v126[336]; // [rsp+1D0h] [rbp+1D0h] BYREF

  v3 = (unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 2106;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2106);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    v12 = qword_1C00467F0;
    v13 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v12, &EventProfilerExit, v11, 2106);
    return 3221225485LL;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = *(_OWORD *)v4;
  *(_OWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = *(_OWORD *)(v4 + 16);
  *(_OWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = *(_OWORD *)(v4 + 32);
  *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = *(_QWORD *)(v4 + 48);
  if ( !*(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) )
  {
    v15 = WdLogNewEntry5_WdWarning(v6, v5, v8, v9);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    *(_QWORD *)(v15 + 32) = 10337LL;
    WdLogEvent5_WdWarning(v15);
LABEL_14:
    v13 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 24),
    *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98),
    Current,
    (struct DXGDEVICE **)(v3 + 88));
  v17 = *(struct DXGDEVICE **)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
  *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v17;
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v18 + 24) = *(unsigned int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_17:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 24));
    goto LABEL_14;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)(v3 + 72),
    *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C),
    (struct DXGPROCESS *)Current,
    (struct DXGCONTEXT **)(v3 + 104),
    0);
  v23 = *(struct _KTHREAD ***)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
  if ( !v23 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    v24[3] = Current;
    v24[4] = *(unsigned int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C);
    v24[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
LABEL_20:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 72));
    goto LABEL_17;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 136), v17);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)(v3 + 208), v23 + 45);
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 256, (__int64)v17, 0, v25, 0);
  v26 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 256));
  v31 = v26;
  if ( v26 < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
    *(_QWORD *)(v32 + 24) = v31;
    *(_QWORD *)(v32 + 32) = 10373LL;
    WdLogEvent5_WdWarning(v32);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 256));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 208));
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 136));
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 72));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 24));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v33, &EventProfilerExit, v34, 2106);
    return (unsigned int)v31;
  }
  v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) + 16LL) + 16LL);
  if ( (*(_DWORD *)(v35 + 1380) & 0x40) == 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v27, v29, v30);
    v36[3] = -1073741811LL;
    v36[4] = 10379LL;
LABEL_28:
    WdLogEvent5_WdWarning(v36);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 256));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 208));
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 136));
    goto LABEL_20;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext((DXGCONTEXT *)v23) )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
    v36[3] = Current;
    v36[4] = *(unsigned int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C);
    v36[5] = -1073741811LL;
    goto LABEL_28;
  }
  VidMmCompanionContext = DXGCONTEXT::GetVidMmCompanionContext((DXGCONTEXT *)v23);
  *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = VidMmCompanionContext;
  if ( !VidMmCompanionContext )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44, v45);
    v36[3] = Current;
    v36[4] = *(unsigned int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C);
    v36[5] = -1073741811LL;
    v36[6] = 10395LL;
    goto LABEL_28;
  }
  LODWORD(v46) = -1073741811;
  *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = -1073741811;
  v47 = 0LL;
  *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0;
  v49 = (unsigned __int64)*(unsigned int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) << 6;
  v48 = (*(unsigned int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) * (unsigned __int128)0x40uLL) >> 64 != 0;
  *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = -1LL;
  if ( v48 )
    v49 = -1LL;
  v51 = operator new[](v49, 0x4B677844u, PagedPool);
  *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v51;
  if ( !v51 )
  {
    v52 = WdLogNewEntry5_WdLowResource(v50);
    LODWORD(v46) = -1073741801;
    *(_QWORD *)(v52 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v52);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 256));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 208));
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 136));
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 72));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 24));
    v54 = qword_1C00467F0;
    v55 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_37;
  }
  v56 = (unsigned __int64)*(unsigned int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) << 6;
  v57 = *(char **)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8);
  if ( &v57[v56] < v57 || (unsigned __int64)&v57[v56] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v51, v57, v56);
  v58 = *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = v58;
  v59 = 0LL;
  for ( i = 0LL;
        (unsigned int)i < *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4);
        i = (unsigned int)(i + 1) )
  {
    v61 = (unsigned __int64)(unsigned int)i << 6;
    v62 = *(unsigned int *)(v61 + v58);
    if ( !(_DWORD)v62 || (_DWORD)v62 == 3 )
    {
      v63 = *(unsigned int *)(v61 + v58 + 24);
      if ( !(_DWORD)v63 )
      {
        v64 = WdLogNewEntry5_WdWarning(i, v63, v58, v59);
        *(_QWORD *)(v64 + 32) = 10443LL;
LABEL_56:
        *(_QWORD *)(v64 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v64);
LABEL_57:
        v65 = 0LL;
        goto LABEL_117;
      }
      if ( (_DWORD)v59 != (_DWORD)v63 )
      {
        ++*(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
        v59 = (unsigned int)v63;
      }
    }
    else if ( (unsigned int)(v62 - 1) > 1 )
    {
      v64 = WdLogNewEntry5_WdWarning(i, v62, v58, v59);
      *(_QWORD *)(v64 + 32) = 10456LL;
      goto LABEL_56;
    }
  }
  v66 = *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
  v67 = 8LL * v66;
  if ( !is_mul_ok(v66, 8uLL) )
    v67 = -1LL;
  v68 = __CFADD__(v67, 8LL);
  v69 = v67 + 8;
  if ( v68 )
    v69 = -1LL;
  v70 = (char *)operator new[](v69, 0x4B677844u, PagedPool);
  if ( v70 )
  {
    *(_DWORD *)v70 = v66;
    v47 = (DXGALLOCATIONREFERENCE *)(v70 + 8);
    `vector constructor iterator'(
      v70 + 8,
      8LL,
      *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC),
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  }
  else
  {
    v47 = 0LL;
  }
  if ( !v47 )
  {
    v72 = WdLogNewEntry5_WdLowResource(v71);
    LODWORD(v46) = -1073741801;
    *(_QWORD *)(v72 + 24) = -1073741801LL;
    *(_QWORD *)(v72 + 32) = 10465LL;
    WdLogEvent5_WdLowResource(v72);
    goto LABEL_57;
  }
  v73 = 8LL * *(unsigned int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
  if ( !is_mul_ok(*(unsigned int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC), 8uLL) )
    v73 = -1LL;
  v74 = operator new[](v73, 0x4B677844u, PagedPool);
  *(_QWORD *)v3 = v74;
  if ( !v74 )
  {
    v77 = WdLogNewEntry5_WdLowResource(v75);
    LODWORD(v46) = -1073741801;
    *(_QWORD *)(v77 + 24) = -1073741801LL;
    *(_QWORD *)(v77 + 32) = 10473LL;
    WdLogEvent5_WdLowResource(v77);
    goto LABEL_116;
  }
  v78 = 0LL;
  v79 = 0LL;
  *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0;
  v80 = *(unsigned int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4);
  if ( !(_DWORD)v80 )
  {
LABEL_84:
    *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x80)
                                                                         + 192LL;
    while ( 1 )
    {
      Global = DXGGLOBAL::GetGlobal(v79, v80, v78, v76);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v3 + 48), Global);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v3 + 48));
      *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 0xA0);
      DXGPUSHLOCK::AcquireShared(*(DXGPUSHLOCK **)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
      v96 = (*(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 8) >> 6) & 0xFFFFFF;
      v97 = *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      if ( v96 < *(_DWORD *)(v97 + 232)
        && (v98 = *(_QWORD *)(v97 + 216),
            v99 = *(_DWORD *)(v98 + 16LL * v96 + 8),
            ((*(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 8) >> 26) & 0x30) == (*(_BYTE *)(v98 + 16LL * v96 + 8) & 0x30))
        && (v99 & 0x1000) == 0
        && (v99 & 0xF) != 0
        && (*(_BYTE *)(v98 + 16LL * v96 + 8) & 0xF) == 0xB )
      {
        *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_QWORD *)(v98 + 16LL * v96);
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      }
      ExReleasePushLockSharedEx(*(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20), 0LL);
      KeLeaveCriticalRegion();
      if ( !*(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      {
        v125 = WdLogNewEntry5_WdWarning(v101, v100, v102, v103);
        *(_QWORD *)(v125 + 24) = *(unsigned int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
        *(_QWORD *)(v125 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v125);
        goto LABEL_104;
      }
      v104 = *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX(
        (DXGSYNCOBJECTMUTEX *)(v3 + 112),
        *(struct DXGSYNCOBJECT **)(v104 + 32),
        v102);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 112));
      DXGSYNCOBJECT::GetVidSchSyncObject(
        *(DXGSYNCOBJECT **)(v104 + 32),
        *(struct ADAPTER_RENDER **)(*(_QWORD *)(v104 + 16) + 16LL));
      *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
      v105 = _guard_dispatch_icall_fptr();
      v46 = v105;
      if ( v105 != -1071775486 )
        break;
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)(v3 + 256));
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)(v3 + 112));
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 48));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v110, &EventBlockThread, v111, 68);
      KeWaitForSingleObject(
        *(PVOID *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
        UserRequest,
        0,
        1u,
        0LL);
      KeReleaseSemaphore(*(PRKSEMAPHORE *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60), 0, 1, 0);
      if ( PsIsThreadTerminating(KeGetCurrentThread()) )
      {
        v122 = WdLogNewEntry5_WdWarning(v113, v112, v114, v115);
        *(_QWORD *)(v122 + 24) = 10588LL;
        WdLogEvent5_WdWarning(v122);
        LODWORD(v46) = -1073741130;
LABEL_103:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 112));
LABEL_104:
        if ( *(_BYTE *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 48));
        goto LABEL_116;
      }
      v116 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 256));
      v46 = v116;
      if ( v116 < 0 )
      {
        v121 = WdLogNewEntry5_WdWarning(v118, v117, v119, v120);
        *(_QWORD *)(v121 + 32) = 10599LL;
LABEL_102:
        *(_QWORD *)(v121 + 24) = v46;
        WdLogEvent5_WdWarning(v121);
        goto LABEL_103;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 48));
    }
    if ( v105 < 0 )
    {
      v121 = WdLogNewEntry5_WdWarning(v107, v106, v108, v109);
      *(_QWORD *)(v121 + 32) = 10606LL;
      goto LABEL_102;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 112));
    if ( *(_BYTE *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 48));
    DXGALLOCATIONREFERENCE::`vector deleting destructor'(v47);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 256));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 208));
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 136));
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 72));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 24));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v123, &EventProfilerExit, v124, 2106);
    return 0LL;
  }
  v81 = (__int64 *)((char *)v47 - 8);
  *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v74 - (_BYTE *)v47;
  v76 = -1LL;
  while ( 1 )
  {
    v82 = (_DWORD *)(*(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8)
                   + ((unsigned __int64)(unsigned int)v79 << 6));
    *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v82;
    if ( *v82 && *v82 != 3 )
      goto LABEL_80;
    v83 = v82[6];
    if ( (_DWORD)v78 != v83 )
      break;
LABEL_79:
    v82[6] = v76;
    v80 = *(unsigned int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4);
LABEL_80:
    v79 = (unsigned int)(v79 + 1);
    *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v79;
    if ( (unsigned int)v79 >= (unsigned int)v80 )
      goto LABEL_84;
  }
  *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v83;
  ++*(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v81 + 1;
  AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80),
                                                (DXGALLOCATIONREFERENCE *)(v3 + 240),
                                                v83);
  DXGALLOCATIONREFERENCE::MoveAssign(
    (struct _EX_RUNDOWN_REF **)v47 + *(int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    AllocationSafe);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)(v3 + 240), v85, v86, v87);
  v81 = *(__int64 **)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
  v91 = *v81;
  if ( *v81 )
  {
    v92 = *(_QWORD *)(*(_QWORD *)(v91 + 8) + 16LL);
    if ( *(_QWORD *)(v92 + 16) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                    + 0x40)
                                                        + 16LL)
                                            + 16LL) )
    {
      v93 = (_QWORD *)WdLogNewEntry5_WdError(v92);
      v93[3] = *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      v93[4] = *((_QWORD *)v47 + *(int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
      v93[5] = -1073741811LL;
      WdLogEvent5_WdError(v93);
      goto LABEL_116;
    }
    *(__int64 *)((char *)v81 + *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58)) = *(_QWORD *)(v91 + 24);
    v82 = *(_DWORD **)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    LODWORD(v79) = *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    v78 = *(unsigned int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v76 = *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    goto LABEL_79;
  }
  v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v89, v88, 0LL, v90);
  v94[3] = *(unsigned int *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v94[4] = -1073741811LL;
  v94[5] = 10504LL;
  WdLogEvent5_WdWarning(v94);
LABEL_116:
  v65 = *(void **)v3;
LABEL_117:
  operator delete(v65);
  operator delete(*(void **)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8));
  if ( v47 )
    DXGALLOCATIONREFERENCE::`vector deleting destructor'(v47);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 256));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 208));
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 136));
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 72));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 24));
  v55 = (qword_1C00467F0 & 2) == 0;
LABEL_37:
  if ( !v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v54, &EventProfilerExit, v53, 2106);
  return (unsigned int)v46;
}
