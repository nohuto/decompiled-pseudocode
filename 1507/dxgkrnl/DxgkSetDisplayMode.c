/*
 * XREFs of DxgkSetDisplayMode @ 0x1C00B96F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001B68 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0002CCC (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006798 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000682C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0009890 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00098B8 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A784 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000AC0C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000F754 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000F920 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0095C98 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00ACF40 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00B6BDC (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C00B74D4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C00B79C8 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     DpiPollDisplayChildren @ 0x1C0167108 (DpiPollDisplayChildren.c)
 *     DmmCacheInvalidDisplayModeChangeRequest @ 0x1C017546C (DmmCacheInvalidDisplayModeChangeRequest.c)
 */

__int64 __fastcall DxgkSetDisplayMode(ULONG64 a1, _QWORD *a2, int *a3)
{
  struct DXGDEVICE **v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r12
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  ULONG64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rcx
  __int64 v25; // r9
  struct DXGDEVICE *v26; // rax
  _QWORD *v27; // rax
  int v28; // r8d
  int v29; // r9d
  _DWORD *v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rcx
  _QWORD *v35; // rax
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rcx
  __int64 v39; // rdx
  _QWORD *v40; // rax
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rcx
  _QWORD *v46; // rax
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // r12
  __int64 v50; // rcx
  _QWORD *v51; // rax
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rcx
  _QWORD *v55; // rax
  struct DXGDEVICE *v56; // rcx
  int v57; // r8d
  int v58; // r9d
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rcx
  _QWORD *v69; // rax
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r8
  __int64 v76; // rax
  int v77; // eax
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rbx
  _QWORD *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  void *v87; // rbx
  __int64 v88; // rcx
  __int64 v89; // rax
  struct DXGALLOCATION *v90; // [rsp+70h] [rbp+0h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_QWORD *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 2018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  *(_QWORD *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    *(_QWORD *)(v7 + 32) = PsGetCurrentProcess(v9);
    WdLogEvent5_WdError(v7);
LABEL_6:
    v11 = qword_1C00467F0;
    v12 = (qword_1C00467F0 & 2) == 0;
LABEL_7:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2018);
    return (unsigned int)v8;
  }
  v14 = a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_OWORD *)v14;
  *(_QWORD *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_QWORD *)(v14 + 16);
  *(_DWORD *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_DWORD *)(v14 + 24);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 1),
    *(_DWORD *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58),
    Current,
    v3 + 9);
  v16 = *(_QWORD *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
  if ( !v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    LODWORD(v8) = -1073741811;
    v17[3] = -1073741811LL;
    v17[4] = PsGetCurrentProcess(v18);
    v17[5] = *(unsigned int *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
    WdLogEvent5_WdError(v17);
LABEL_15:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
    v12 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4),
    *(struct DXGDEVICE **)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48));
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)(v3 + 6), (struct DXGPROCESS *)Current);
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)(v3 + 6), 1u);
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 2), Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 18), v16, 1, v19, 0);
  LODWORD(v8) = COREDEVICEACCESS::AcquireExclusive((__int64)(v3 + 18));
  if ( (int)v8 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 18));
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 2));
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 6));
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
    goto LABEL_6;
  }
  v21 = *(_QWORD *)(v16 + 18704);
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v22 + 24) = v16;
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 18));
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 2));
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 6));
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
    goto LABEL_15;
  }
  ++*(_DWORD *)(*(_QWORD *)(v21 + 1976) + 240LL);
  v23 = *(unsigned int *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C);
  DXGPROCESS::GetAllocationSafe(
    (__int64)Current,
    (DXGALLOCATIONREFERENCE *)((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C));
  v26 = *v3;
  if ( !*v3 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    LODWORD(v8) = -1073741811;
    v27[3] = -1073741811LL;
    v27[4] = v16;
    v27[5] = v23;
    WdLogEvent5_WdError(v27);
    DmmCacheInvalidDisplayModeChangeRequest(v21, -1, v28, v29, -1071775468);
LABEL_22:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(
      (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL),
      (__int64)v30,
      v31,
      v32);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 18));
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 2));
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 6));
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
    v12 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_7;
  }
  v33 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 1) + 16LL) + 16LL);
  v34 = *(_QWORD *)(v16 + 16);
  if ( v33 != *(_QWORD *)(v34 + 16) )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v34);
    v35[3] = v16;
    v35[4] = *v3;
    LODWORD(v8) = -1073741811;
    v35[5] = -1073741811LL;
    WdLogEvent5_WdError(v35);
    DmmCacheInvalidDisplayModeChangeRequest(
      v21,
      (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF,
      v36,
      v37,
      -1071775467);
    goto LABEL_22;
  }
  v38 = *((_QWORD *)v26 + 6);
  v39 = *(unsigned int *)(v38 + 4);
  if ( (v39 & 1) == 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v38);
    LODWORD(v8) = -1073741811;
    v40[3] = -1073741811LL;
    v40[4] = v16;
    v40[5] = v23;
    v40[6] = *v3;
    v40[7] = (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v40);
    DmmCacheInvalidDisplayModeChangeRequest(
      v21,
      (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF,
      v41,
      v42,
      -1071775482);
    goto LABEL_22;
  }
  if ( v21 != *(_QWORD *)(v16 + 18704) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v38, v39, v33, v25);
    *(_QWORD *)(v43 + 24) = 5475LL;
    WdLogEvent5_WdAssertion(v43);
    v26 = *v3;
  }
  v44 = *(int *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
  v45 = (unsigned int)(v44 - 1);
  if ( (unsigned int)v45 > 2 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v45);
    LODWORD(v8) = -1073741811;
    v46[3] = -1073741811LL;
    v46[4] = v16;
    v46[5] = v44;
    WdLogEvent5_WdError(v46);
    DmmCacheInvalidDisplayModeChangeRequest(
      v21,
      (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF,
      v47,
      v48,
      -1071774894);
    goto LABEL_22;
  }
  v49 = *(int *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64);
  v50 = (unsigned int)(v49 - 1);
  if ( (unsigned int)v50 > 3 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v50);
    LODWORD(v8) = -1073741811;
    v51[3] = -1073741811LL;
    v51[4] = v16;
    v51[5] = v49;
    WdLogEvent5_WdError(v51);
    DmmCacheInvalidDisplayModeChangeRequest(
      v21,
      (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF,
      v52,
      v53,
      -1071774907);
    goto LABEL_22;
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(v21 + 1976),
          (const struct DXGDEVICE *)v16,
          (*(_DWORD *)(*((_QWORD *)v26 + 6) + 4LL) >> 6) & 0xF) )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v54);
    v8 = -1071775744LL;
LABEL_35:
    v55[3] = v8;
    v55[4] = v16;
    v55[5] = v23;
    v55[6] = *v3;
    v56 = (struct DXGDEVICE *)((*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF);
LABEL_36:
    v55[7] = v56;
    WdLogEvent5_WdDmmEvent(v55);
    DmmCacheInvalidDisplayModeChangeRequest(v21, (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF, v57, v58, v8);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(
      (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL),
      v59,
      v60,
      v61);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 18));
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 2));
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 6));
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
    v11 = qword_1C00467F0;
    v12 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_7;
  }
  if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                        *(DXGADAPTER ***)(v21 + 1976),
                        (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF) == 2
     || *(_DWORD *)(v16 + 280) == 1)
    && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(DXGADAPTER ***)(v21 + 1976),
         (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF,
         v62,
         v63) )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v64);
    v8 = -1071774910LL;
    goto LABEL_35;
  }
  if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
          *(DXGADAPTER ***)(v21 + 1976),
          (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF) )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v65);
    LODWORD(v8) = -1071774972;
    v55[3] = -1071774972LL;
    v55[4] = v16;
    v55[5] = (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF;
    v55[6] = v23;
    v56 = *v3;
    goto LABEL_36;
  }
  v68 = *((_QWORD *)*v3 + 6);
  if ( *(_DWORD *)(v16 + 280) == 1 )
  {
    LODWORD(v8) = DXGDEVICE::PinPrimaryAllocations((DXGDEVICE *)v16, (*(_DWORD *)(v68 + 4) >> 6) & 0xF, v66, v67);
LABEL_50:
    v76 = WdLogNewEntry5_WdDmmEvent(v68);
    *(_QWORD *)(v76 + 24) = (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF;
    *(_QWORD *)(v76 + 32) = v21;
    WdLogEvent5_WdDmmEvent(v76);
    if ( (int)v8 >= 0 )
    {
      v77 = DXGDEVICE::SetDisplayMode(
              (DXGDEVICE *)v16,
              *v3,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)*(_DWORD *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                     + 0x60),
              (enum _D3DDDI_ROTATION)v49,
              *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C),
              (unsigned int *)v3 + 18);
      LODWORD(v8) = v77;
      if ( v77 == -1071774891 )
      {
        v30 = (_DWORD *)(*(_QWORD *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) + 16LL);
        if ( (unsigned __int64)v30 >= MmUserProbeAddress )
          v30 = (_DWORD *)MmUserProbeAddress;
        *v30 = *(_DWORD *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
      }
      else if ( v77 >= 0 )
      {
        v78 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                *(DXGADAPTER ***)(v21 + 1976),
                (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF);
        v83 = v78;
        if ( v78 < 0 )
        {
          v84 = (_QWORD *)WdLogNewEntry5_WdError(v80);
          v84[3] = v21;
          v84[4] = (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF;
          v84[5] = v83;
          WdLogEvent5_WdError(v84);
        }
        *(_DWORD *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 7;
        *(_QWORD *)(((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0LL;
        if ( (int)DxgkStatusChangeNotify((int *)v3 + 30, v79, v81, v82) < 0 )
        {
          v86 = WdLogNewEntry5_WdAssertion(v85, v30, v31, v32);
          *(_QWORD *)(v86 + 24) = 5618LL;
          WdLogEvent5_WdAssertion(v86);
        }
        *a2 = *(_QWORD *)(v21 + 252);
        *a3 = (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF;
      }
    }
    if ( (_DWORD)v8 == -1071774920 )
    {
      v87 = *(void **)(v21 + 176);
      ObfReferenceObject(v87);
      v89 = WdLogNewEntry5_WdDmmEvent(v88);
      *(_QWORD *)(v89 + 24) = v87;
      WdLogEvent5_WdDmmEvent(v89);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)(v3 + 18));
      DpiPollDisplayChildren(v87, 16LL);
      ObfDereferenceObject(v87);
    }
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(v68 + 4) & 0x10) == 0 )
    goto LABEL_50;
  v69 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v68);
  v69[3] = -1071775482LL;
  v69[4] = v16;
  v69[5] = v23;
  v69[6] = *v3;
  v69[7] = (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF;
  WdLogEvent5_WdDmmEvent(v69);
  DmmCacheInvalidDisplayModeChangeRequest(
    v21,
    (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF,
    v70,
    v71,
    -1071775482);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(
    (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v90 & 0xFFFFFFFFFFFFFFC0uLL),
    v72,
    v73,
    v74);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 18));
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 2));
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 6));
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v75, 2018);
  return 3223191814LL;
}
