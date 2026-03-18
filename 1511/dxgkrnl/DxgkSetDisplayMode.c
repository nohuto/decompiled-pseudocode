/*
 * XREFs of DxgkSetDisplayMode @ 0x1C00AF380
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003638 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007A8C (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0007AD8 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007D6C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00080EC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000AE8C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010D7C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0011020 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C001102C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C006C7E8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C006D448 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A798 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C009B8E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     DmmCacheDisplayModeChangeRequest @ 0x1C00AE9B0 (DmmCacheDisplayModeChangeRequest.c)
 *     DxgkStatusChangeNotify @ 0x1C00B1110 (DxgkStatusChangeNotify.c)
 *     DpiPollDisplayChildren @ 0x1C016B6D8 (DpiPollDisplayChildren.c)
 */

__int64 __fastcall DxgkSetDisplayMode(ULONG64 a1, _QWORD *a2, int *a3)
{
  struct DXGDEVICE **v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r12
  ULONG64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rcx
  struct DXGDEVICE *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r15
  __int64 v30; // rcx
  bool v31; // zf
  __int64 v32; // rcx
  __int64 v33; // r8
  bool v34; // zf
  __int64 v36; // rbx
  _QWORD *v37; // rbx
  __int64 v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // r13
  __int64 v46; // rcx
  struct DXGDEVICE *v47; // rcx
  __int64 v48; // r8
  _QWORD *v49; // rax
  __int64 v50; // r8
  _DWORD *v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // rax
  void *v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rax
  _BYTE v57[288]; // [rsp+170h] [rbp+170h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_QWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 2018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  *(_QWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = Current;
  if ( !Current )
  {
    v36 = WdLogNewEntry5_WdError(v5);
    v12 = -1073741811;
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    *(_QWORD *)(v36 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v36);
    v32 = qword_1C00467F0;
    v34 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_35;
  }
  v7 = a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_OWORD *)v7;
  *(_QWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v7 + 16);
  *(_DWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_DWORD *)(v7 + 24);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 1),
    *(_DWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
    Current,
    v3 + 15);
  v9 = *(_QWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
  if ( !v9 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v12 = -1073741811;
    v37[3] = -1073741811LL;
    v37[4] = PsGetCurrentProcess();
    v37[5] = *(unsigned int *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    WdLogEvent5_WdError(v37);
LABEL_34:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
    v34 = (qword_1C00467F0 & 2) == 0;
LABEL_35:
    if ( !v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v32, &EventProfilerExit, v33, 2018);
    return (unsigned int)v12;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 16),
    *(struct DXGDEVICE **)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78));
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)(v3 + 12), (struct DXGPROCESS *)Current);
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)(v3 + 12), 1u);
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 10), Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 10));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 20), v9, 1, v10, 0);
  v12 = COREDEVICEACCESS::AcquireExclusive((__int64)(v3 + 20));
  if ( v12 < 0 )
    goto LABEL_44;
  v13 = *(_QWORD *)(v9 + 2832);
  if ( !v13 )
  {
    v38 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v38 + 24) = v9;
    v12 = -1073741811;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v38);
LABEL_44:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 20));
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 10));
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 12));
    v31 = *(_QWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) == 0LL;
    goto LABEL_32;
  }
  ++*(_DWORD *)(*(_QWORD *)(v13 + 1984) + 312LL);
  v14 = *(unsigned int *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24);
  DXGPROCESS::GetAllocationSafe(
    (__int64)Current,
    (DXGALLOCATIONREFERENCE *)((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24));
  v16 = *v3;
  if ( !*v3 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v12 = -1073741811;
    v39[3] = -1073741811LL;
    v39[4] = v9;
    v39[5] = v14;
    WdLogEvent5_WdError(v39);
    *(_DWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
    memset((char *)v3 + 36, 0, 0x28uLL);
    DmmCacheDisplayModeChangeRequest((DXGADAPTER *)v13, 0xFFFFFFFF, (__int64)(v3 + 4), 2u, -1071775468, 3, 0LL);
LABEL_31:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL));
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 20));
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 10));
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 12));
    v31 = *(_QWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) == 0LL;
    goto LABEL_32;
  }
  v17 = *((_QWORD *)v16 + 6);
  if ( (*(_DWORD *)(v17 + 4) & 1) == 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v12 = -1073741811;
    v40[3] = -1073741811LL;
    v40[4] = v9;
    v40[5] = v14;
    v40[6] = *v3;
    v40[7] = (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v40);
    *(_DWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
    memset((char *)v3 + 36, 0, 0x28uLL);
    DmmCacheDisplayModeChangeRequest(
      (DXGADAPTER *)v13,
      (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF,
      (__int64)(v3 + 4),
      2u,
      -1071775482,
      3,
      0LL);
    goto LABEL_31;
  }
  if ( v13 != *(_QWORD *)(v9 + 2832) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v41 + 24) = 5611LL;
    WdLogEvent5_WdAssertion(v41);
    v16 = *v3;
  }
  v18 = *(int *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  v19 = (unsigned int)(v18 - 1);
  if ( (unsigned int)v19 > 2 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v12 = -1073741811;
    v42[3] = -1073741811LL;
    v42[4] = v9;
    v42[5] = v18;
    WdLogEvent5_WdError(v42);
    *(_DWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
    memset((char *)v3 + 36, 0, 0x28uLL);
    DmmCacheDisplayModeChangeRequest(
      (DXGADAPTER *)v13,
      (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF,
      (__int64)(v3 + 4),
      2u,
      -1071774894,
      3,
      0LL);
    goto LABEL_31;
  }
  v20 = (unsigned int)(*(_DWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) - 1);
  if ( (unsigned int)v20 > 3 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v12 = -1073741811;
    v43[3] = -1073741811LL;
    v43[4] = v9;
    v43[5] = *(int *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C);
    WdLogEvent5_WdError(v43);
    *(_DWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
    memset((char *)v3 + 36, 0, 0x28uLL);
    DmmCacheDisplayModeChangeRequest(
      (DXGADAPTER *)v13,
      (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF,
      (__int64)(v3 + 4),
      2u,
      -1071774907,
      3,
      0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL));
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 20));
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 10));
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 12));
    v31 = *(_QWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) == 0LL;
LABEL_32:
    if ( !v31 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2));
    goto LABEL_34;
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(v13 + 1984),
          (const struct DXGDEVICE *)v9,
          (*(_DWORD *)(*((_QWORD *)v16 + 6) + 4LL) >> 6) & 0xF) )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21);
    v45 = -1071775744LL;
LABEL_51:
    v46 = *(unsigned int *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24);
    v44[3] = v45;
    v44[4] = v9;
    v44[5] = v46;
    v44[6] = *v3;
    v47 = (struct DXGDEVICE *)((*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF);
LABEL_53:
    v44[7] = v47;
    WdLogEvent5_WdDmmEvent(v44);
    *(_DWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
    memset((char *)v3 + 36, 0, 0x28uLL);
    DmmCacheDisplayModeChangeRequest(
      (DXGADAPTER *)v13,
      (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF,
      (__int64)(v3 + 4),
      2u,
      v45,
      3,
      0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL));
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 20));
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 10));
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 12));
    if ( *(_QWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v48, 2018);
    return (unsigned int)v45;
  }
  if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                        *(DXGADAPTER ***)(v13 + 1984),
                        (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF) == 2
     || *(_DWORD *)(v9 + 280) == 1)
    && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(DXGADAPTER ***)(v13 + 1984),
         (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF) )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v22);
    v45 = -1071774910LL;
    goto LABEL_51;
  }
  if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
          *(DXGADAPTER ***)(v13 + 1984),
          (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF) )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v23);
    LODWORD(v45) = -1071774972;
    v44[3] = -1071774972LL;
    v44[4] = v9;
    v44[5] = (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF;
    v44[6] = *(unsigned int *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24);
    v47 = *v3;
    goto LABEL_53;
  }
  v24 = *((_QWORD *)*v3 + 6);
  if ( *(_DWORD *)(v9 + 280) == 1 )
  {
    v12 = DXGDEVICE::PinPrimaryAllocations((DXGDEVICE *)v9, (*(_DWORD *)(v24 + 4) >> 6) & 0xF);
LABEL_21:
    v25 = WdLogNewEntry5_WdDmmEvent(v24);
    *(_QWORD *)(v25 + 24) = (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF;
    *(_QWORD *)(v25 + 32) = v13;
    WdLogEvent5_WdDmmEvent(v25);
    if ( v12 >= 0 )
    {
      v26 = DXGDEVICE::SetDisplayMode(
              (DXGDEVICE *)v9,
              *v3,
              v18,
              (enum _D3DDDI_ROTATION)*(_DWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C),
              *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34),
              (unsigned int *)v3 + 30);
      v12 = v26;
      if ( v26 == -1071774891 )
      {
        v51 = (_DWORD *)(*(_QWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) + 16LL);
        if ( (unsigned __int64)v51 >= MmUserProbeAddress )
          v51 = (_DWORD *)MmUserProbeAddress;
        *v51 = *(_DWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
      }
      else if ( v26 >= 0 )
      {
        v27 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                *(DXGADAPTER ***)(v13 + 1984),
                (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF);
        v29 = v27;
        if ( v27 < 0 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(v28);
          v52[3] = v13;
          v52[4] = (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF;
          v52[5] = v29;
          WdLogEvent5_WdError(v52);
        }
        *(_DWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 7;
        *(_QWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0LL;
        if ( (int)DxgkStatusChangeNotify(v3 + 17) < 0 )
        {
          v53 = WdLogNewEntry5_WdAssertion(v30);
          *(_QWORD *)(v53 + 24) = 5754LL;
          WdLogEvent5_WdAssertion(v53);
        }
        *a2 = *(_QWORD *)(v13 + 252);
        *a3 = (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF;
      }
    }
    if ( v12 == -1071774920 )
    {
      v54 = *(void **)(v13 + 176);
      ObfReferenceObject(v54);
      v56 = WdLogNewEntry5_WdDmmEvent(v55);
      *(_QWORD *)(v56 + 24) = v54;
      WdLogEvent5_WdDmmEvent(v56);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)(v3 + 20));
      DpiPollDisplayChildren(v54, 16LL);
      ObfDereferenceObject(v54);
    }
    goto LABEL_31;
  }
  if ( (*(_DWORD *)(v24 + 4) & 0x10) == 0 )
    goto LABEL_21;
  v49 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v24);
  v49[3] = -1071775482LL;
  v49[4] = v9;
  v49[5] = *(unsigned int *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24);
  v49[6] = *v3;
  v49[7] = (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF;
  WdLogEvent5_WdDmmEvent(v49);
  *(_DWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
  memset((char *)v3 + 36, 0, 0x28uLL);
  DmmCacheDisplayModeChangeRequest(
    (DXGADAPTER *)v13,
    (*(_DWORD *)(*((_QWORD *)*v3 + 6) + 4LL) >> 6) & 0xF,
    (__int64)(v3 + 4),
    2u,
    -1071775482,
    3,
    0LL);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL));
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 20));
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 10));
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 12));
  if ( *(_QWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v50, 2018);
  return 3223191814LL;
}
