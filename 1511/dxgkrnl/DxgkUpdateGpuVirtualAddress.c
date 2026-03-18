/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x1C0135050
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00035B8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00070F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007138 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007194 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C000B17C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C000BE7C (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BEA0 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000C6F0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000C7D0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C000CDF4 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010D7C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C001C8E0 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0076A24 (-Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0094C04 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C0136FC8 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0137030 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 */

__int64 __fastcall DxgkUpdateGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
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
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  PVOID v53; // r9
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // rcx
  bool v57; // zf
  size_t v58; // r8
  char *v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 i; // rcx
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rax
  void *v67; // rcx
  unsigned int v68; // r13d
  __int64 v69; // rax
  bool v70; // cf
  SIZE_T v71; // rax
  char *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  SIZE_T v78; // rax
  _BYTE *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  int v85; // edx
  __int64 v86; // rcx
  unsigned int v87; // r8d
  char *v88; // r9
  __int64 v89; // r11
  _DWORD *v90; // rax
  unsigned int v91; // r8d
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  _QWORD *v96; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int v98; // ecx
  __int64 v99; // rax
  __int64 v100; // r9
  int v101; // r8d
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rsi
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rax
  _BYTE v128[336]; // [rsp+1D0h] [rbp+1D0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = a1;
  *(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 2106;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2106);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = Current;
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
  *(_OWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = *(_OWORD *)v4;
  *(_OWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = *(_OWORD *)(v4 + 16);
  *(_OWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = *(_OWORD *)(v4 + 32);
  *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = *(_QWORD *)(v4 + 48);
  if ( !*(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x94) )
  {
    v15 = WdLogNewEntry5_WdWarning(v6, v5, v8, v9);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    *(_QWORD *)(v15 + 32) = 10054LL;
    WdLogEvent5_WdWarning(v15);
LABEL_14:
    v13 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 4),
    *(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88),
    Current,
    (struct DXGDEVICE **)v3 + 13);
  v17 = *(struct DXGDEVICE **)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
  *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = v17;
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v18 + 24) = *(unsigned int *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_17:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 4));
    goto LABEL_14;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)(v3 + 18),
    *(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x8C),
    (struct DXGPROCESS *)Current,
    (struct DXGCONTEXT **)v3 + 12,
    0);
  v23 = *(struct _KTHREAD ***)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
  if ( !v23 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    v24[3] = Current;
    v24[4] = *(unsigned int *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x8C);
    v24[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
LABEL_20:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 18));
    goto LABEL_17;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 10), v17);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)(v3 + 50), v23 + 45);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 64), (__int64)v17, 0, v25, 0);
  v26 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 64));
  v31 = v26;
  if ( v26 < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
    *(_QWORD *)(v32 + 24) = v31;
    *(_QWORD *)(v32 + 32) = 10090LL;
    WdLogEvent5_WdWarning(v32);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 50));
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 10));
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 18));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 4));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v33, &EventProfilerExit, v34, 2106);
    return (unsigned int)v31;
  }
  v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) + 16LL) + 16LL);
  if ( (*(_DWORD *)(v35 + 1388) & 0x40) == 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v27, v29, v30);
    v36[3] = -1073741811LL;
    v36[4] = 10096LL;
LABEL_28:
    WdLogEvent5_WdWarning(v36);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 50));
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 10));
    goto LABEL_20;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext((DXGCONTEXT *)v23) )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
    v36[3] = Current;
    v36[4] = *(unsigned int *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x8C);
    v36[5] = -1073741811LL;
    goto LABEL_28;
  }
  VidMmCompanionContext = DXGCONTEXT::GetVidMmCompanionContext((DXGCONTEXT *)v23);
  *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = VidMmCompanionContext;
  if ( !VidMmCompanionContext )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44, v45);
    v36[3] = Current;
    v36[4] = *(unsigned int *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x8C);
    v36[5] = -1073741811LL;
    v36[6] = 10112LL;
    goto LABEL_28;
  }
  LODWORD(v46) = -1073741811;
  *v3 = -1073741811;
  v47 = 0LL;
  *(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
  v49 = (unsigned __int64)*(unsigned int *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x94) << 6;
  v48 = (*(unsigned int *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x94) * (unsigned __int128)0x40uLL) >> 64 != 0;
  *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = -1LL;
  if ( v48 )
    v49 = -1LL;
  v53 = operator new[](v49, 0x4B677844u, PagedPool);
  *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v53;
  if ( !v53 )
  {
    v54 = WdLogNewEntry5_WdLowResource(v51, v50, v52, 0LL);
    LODWORD(v46) = -1073741801;
    *(_QWORD *)(v54 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v54);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 50));
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 10));
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 18));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 4));
    v56 = qword_1C00467F0;
    v57 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_37;
  }
  v58 = (unsigned __int64)*(unsigned int *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x94) << 6;
  v59 = *(char **)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
  if ( &v59[v58] < v59 || (unsigned __int64)&v59[v58] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v53, v59, v58);
  v60 = *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v60;
  v61 = 0LL;
  for ( i = 0LL;
        (unsigned int)i < *(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x94);
        i = (unsigned int)(i + 1) )
  {
    v63 = (unsigned __int64)(unsigned int)i << 6;
    v64 = *(unsigned int *)(v63 + v60);
    if ( !(_DWORD)v64 || (_DWORD)v64 == 3 )
    {
      v65 = *(unsigned int *)(v63 + v60 + 24);
      if ( !(_DWORD)v65 )
      {
        v66 = WdLogNewEntry5_WdWarning(i, v65, v60, v61);
        *(_QWORD *)(v66 + 32) = 10160LL;
LABEL_56:
        *(_QWORD *)(v66 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v66);
LABEL_57:
        v67 = 0LL;
        goto LABEL_115;
      }
      if ( (_DWORD)v61 != (_DWORD)v65 )
      {
        ++*(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        v61 = (unsigned int)v65;
      }
    }
    else if ( (unsigned int)(v64 - 1) > 1 )
    {
      v66 = WdLogNewEntry5_WdWarning(i, v64, v60, v61);
      *(_QWORD *)(v66 + 32) = 10173LL;
      goto LABEL_56;
    }
  }
  v68 = *(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  v69 = 8LL * v68;
  if ( !is_mul_ok(v68, 8uLL) )
    v69 = -1LL;
  v70 = __CFADD__(v69, 8LL);
  v71 = v69 + 8;
  if ( v70 )
    v71 = -1LL;
  v72 = (char *)operator new[](v71, 0x4B677844u, PagedPool);
  if ( v72 )
  {
    *(_DWORD *)v72 = v68;
    v47 = (DXGALLOCATIONREFERENCE *)(v72 + 8);
    `vector constructor iterator'(
      v72 + 8,
      8LL,
      *(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  }
  else
  {
    v47 = 0LL;
  }
  if ( !v47 )
  {
    v77 = WdLogNewEntry5_WdLowResource(v74, v73, v75, v76);
    LODWORD(v46) = -1073741801;
    *(_QWORD *)(v77 + 24) = -1073741801LL;
    *(_QWORD *)(v77 + 32) = 10182LL;
    WdLogEvent5_WdLowResource(v77);
    goto LABEL_57;
  }
  v78 = 8LL * *(unsigned int *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  if ( !is_mul_ok(*(unsigned int *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 4), 8uLL) )
    v78 = -1LL;
  v79 = operator new[](v78, 0x4B677844u, PagedPool);
  *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v79;
  if ( !v79 )
  {
    v84 = WdLogNewEntry5_WdLowResource(v81, v80, v82, v83);
    LODWORD(v46) = -1073741801;
    *(_QWORD *)(v84 + 24) = -1073741801LL;
    *(_QWORD *)(v84 + 32) = 10190LL;
    WdLogEvent5_WdLowResource(v84);
    goto LABEL_114;
  }
  v85 = 0;
  v86 = 0LL;
  *(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0;
  v87 = *(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x94);
  if ( !v87 )
  {
LABEL_82:
    *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x58)
                                                                         + 192LL;
    while ( 1 )
    {
      Global = DXGGLOBAL::GetGlobal(v86);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v3 + 14), Global);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v3 + 14));
      *v3 = *(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      DXGPUSHLOCK::AcquireShared(*(DXGPUSHLOCK **)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
      v98 = (*v3 >> 6) & 0xFFFFFF;
      v99 = *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
      if ( v98 < *(_DWORD *)(v99 + 232)
        && (v100 = *(_QWORD *)(v99 + 216),
            v101 = *(_DWORD *)(v100 + 16LL * v98 + 8),
            ((*v3 >> 26) & 0x30) == (*(_BYTE *)(v100 + 16LL * v98 + 8) & 0x30))
        && (v101 & 0x1000) == 0
        && (v101 & 0xF) != 0
        && (*(_BYTE *)(v100 + 16LL * v98 + 8) & 0xF) == 0xB )
      {
        *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)(v100 + 16LL * v98);
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
      }
      ExReleasePushLockSharedEx(*(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20), 0LL);
      KeLeaveCriticalRegion();
      if ( !*(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
      {
        v127 = WdLogNewEntry5_WdWarning(v103, v102, v104, v105);
        *(_QWORD *)(v127 + 24) = *(unsigned int *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
        *(_QWORD *)(v127 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v127);
        goto LABEL_102;
      }
      v106 = *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)(v3 + 28), *(struct DXGSYNCOBJECT **)(v106 + 32));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 28));
      DXGSYNCOBJECT::GetVidSchSyncObject(
        *(DXGSYNCOBJECT **)(v106 + 32),
        *(struct ADAPTER_RENDER **)(*(_QWORD *)(v106 + 16) + 16LL));
      *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0LL;
      v107 = _guard_dispatch_icall_fptr();
      v46 = v107;
      if ( v107 != -1071775486 )
        break;
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)(v3 + 64));
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)(v3 + 28));
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 14));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v112, &EventBlockThread, v113, 68);
      KeWaitForSingleObject(
        *(PVOID *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80),
        UserRequest,
        0,
        1u,
        0LL);
      KeReleaseSemaphore(*(PRKSEMAPHORE *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80), 0, 1, 0);
      if ( PsIsThreadTerminating(KeGetCurrentThread()) )
      {
        v124 = WdLogNewEntry5_WdWarning(v115, v114, v116, v117);
        *(_QWORD *)(v124 + 24) = 10297LL;
        WdLogEvent5_WdWarning(v124);
        LODWORD(v46) = -1073741130;
LABEL_101:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 28));
LABEL_102:
        if ( *(_BYTE *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 14));
        goto LABEL_114;
      }
      v118 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 64));
      v46 = v118;
      if ( v118 < 0 )
      {
        v123 = WdLogNewEntry5_WdWarning(v120, v119, v121, v122);
        *(_QWORD *)(v123 + 32) = 10308LL;
LABEL_100:
        *(_QWORD *)(v123 + 24) = v46;
        WdLogEvent5_WdWarning(v123);
        goto LABEL_101;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 28));
      if ( *(_BYTE *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 14));
    }
    if ( v107 < 0 )
    {
      v123 = WdLogNewEntry5_WdWarning(v109, v108, v110, v111);
      *(_QWORD *)(v123 + 32) = 10315LL;
      goto LABEL_100;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 28));
    if ( *(_BYTE *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 14));
    DXGALLOCATIONREFERENCE::`vector deleting destructor'(v47);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 50));
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 10));
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 18));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 4));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v125, &EventProfilerExit, v126, 2106);
    return 0LL;
  }
  v88 = (char *)v47 - 8;
  *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v79 - (_BYTE *)v47;
  LODWORD(v89) = -1;
  while ( 1 )
  {
    v90 = (_DWORD *)(*(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98)
                   + ((unsigned __int64)(unsigned int)v86 << 6));
    *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v90;
    if ( *v90 && *v90 != 3 )
      goto LABEL_79;
    v91 = v90[6];
    if ( v85 != v91 )
      break;
LABEL_78:
    v90[6] = v89;
    v87 = *(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x94);
LABEL_79:
    v86 = (unsigned int)(v86 + 1);
    *(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v86;
    if ( (unsigned int)v86 >= v87 )
      goto LABEL_82;
  }
  *v3 = v91;
  ++*(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v88 + 8;
  AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                              *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58),
                                              (DXGALLOCATIONREFERENCE *)(v3 + 58),
                                              v91);
  DXGALLOCATIONREFERENCE::Assign(
    (struct _EX_RUNDOWN_REF **)v47 + *(int *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
    AllocationSafe);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v3 + 29);
  v88 = *(char **)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
  if ( *(_QWORD *)v88 )
  {
    *(_QWORD *)&v88[*(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68)] = *(_QWORD *)(*(_QWORD *)v88 + 24LL);
    v90 = *(_DWORD **)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    LODWORD(v86) = *(_DWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    v85 = *v3;
    v89 = *(_QWORD *)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    goto LABEL_78;
  }
  v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v94, v93, v95, v88);
  v96[3] = *v3;
  v96[4] = -1073741811LL;
  v96[5] = 10221LL;
  WdLogEvent5_WdWarning(v96);
LABEL_114:
  v67 = *(void **)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
LABEL_115:
  operator delete(v67);
  operator delete(*(void **)(((unsigned __int64)v128 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98));
  if ( v47 )
    DXGALLOCATIONREFERENCE::`vector deleting destructor'(v47);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 50));
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 10));
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 18));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 4));
  v57 = (qword_1C00467F0 & 2) == 0;
LABEL_37:
  if ( !v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v56, &EventProfilerExit, v55, 2106);
  return (unsigned int)v46;
}
