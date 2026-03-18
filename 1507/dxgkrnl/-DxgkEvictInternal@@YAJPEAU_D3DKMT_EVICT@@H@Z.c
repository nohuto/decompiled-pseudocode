/*
 * XREFs of ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C0144B48
 * Callers:
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C01315B0 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 *     DxgkEvict @ 0x1C0145BC0 (DxgkEvict.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00013C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00013F8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0002DAC (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00698CC (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C011EEC8 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C0135EA0 (-Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkEvictInternal(struct _D3DKMT_EVICT *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  int v6; // ebx
  ULONG64 v7; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  struct _D3DKMT_EVICT *v14; // rax
  struct _D3DKMT_EVICT *v15; // rsi
  __int64 v16; // rax
  struct _EX_RUNDOWN_REF **v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  DXGDEVICE *v22; // r15
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r12d
  __int64 v28; // r8
  __int64 NumAllocations; // rcx
  unsigned int *AllocationList; // r12
  unsigned int *v31; // rdx
  __int64 v32; // rax
  UINT64 v33; // rax
  __int64 v34; // rax
  struct DXGPROCESS *v35; // rax
  unsigned int *v36; // rax
  unsigned int v37; // r13d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  struct _EX_RUNDOWN_REF **v47; // r13
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r8
  _QWORD *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v3 + 24) = a2;
  *(_QWORD *)(v3 + 104) = a1;
  v6 = 2116;
  *(_DWORD *)v3 = 2116;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2116);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    v11 = qword_1C00467F0;
    v12 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, v6);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v7 = MmUserProbeAddress;
    v14 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v14 = (struct _D3DKMT_EVICT *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = *(_OWORD *)&v14->hDevice;
    *(_OWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = *(_OWORD *)&v14->Flags.0;
    v15 = (struct _D3DKMT_EVICT *)(v3 + 240);
    *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = ((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                         + 240;
  }
  else
  {
    v15 = a1;
    *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = a1;
  }
  if ( !v15->NumAllocations )
  {
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
LABEL_17:
    WdLogEvent5_WdError(v16);
LABEL_18:
    v12 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  if ( !v15->AllocationList )
  {
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = 726LL;
    goto LABEL_17;
  }
  if ( (v15->Flags.Value & 0xFFFFFFFC) != 0 )
  {
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = 733LL;
    goto LABEL_17;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v3 + 272);
  *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = ((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 280;
  *(_DWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x198) = 16;
  v17 = (struct _EX_RUNDOWN_REF **)(v3 + 280);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 16),
    v15->hDevice,
    Current,
    (struct DXGDEVICE **)(v3 + 32));
  v22 = *(DXGDEVICE **)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  if ( !v22 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    *(_QWORD *)(v23 + 24) = v15->hDevice;
    WdLogEvent5_WdAssertion(v23);
LABEL_25:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 16));
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((DXGALLOCATIONREFERENCE **)(v3 + 272));
    goto LABEL_18;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 64),
    *(struct DXGDEVICE **)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 160, (__int64)v22, 0, v24, 0);
  v27 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 160));
  if ( v27 >= 0 )
  {
    NumAllocations = v15->NumAllocations;
    *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = NumAllocations;
    AllocationList = (unsigned int *)v15->AllocationList;
    v31 = &AllocationList[NumAllocations];
    *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v31;
    if ( v31 < AllocationList )
    {
      v32 = WdLogNewEntry5_WdAssertion(NumAllocations, v31, v25, v26);
      *(_QWORD *)(v32 + 24) = v15->NumAllocations;
      WdLogEvent5_WdAssertion(v32);
LABEL_33:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 160));
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 64));
      goto LABEL_25;
    }
    v33 = 0LL;
    *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
    while ( AllocationList != v31 )
    {
      v34 = 16LL;
      if ( (unsigned int)NumAllocations < 0x10 )
        v34 = (unsigned int)NumAllocations;
      *(_DWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = v34;
      *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = &AllocationList[v34];
      *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v17;
      v35 = DXGPROCESS::GetCurrent(NumAllocations);
      *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v35;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 128), v35);
      while ( AllocationList != *(unsigned int **)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) )
      {
        if ( *(_DWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
        {
          v36 = AllocationList;
          if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
            v36 = (unsigned int *)MmUserProbeAddress;
          v37 = *v36;
          *(_DWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *v36;
          v6 = *(_DWORD *)v3;
          v15 = *(struct _D3DKMT_EVICT **)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
          v22 = *(DXGDEVICE **)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        }
        else
        {
          v37 = *AllocationList;
        }
        DXGPROCESS::GetAllocationUnsafe(
          *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78),
          (DXGALLOCATIONREFERENCE *)(v3 + 8),
          v37);
        v42 = *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        if ( !v42 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
          *(_QWORD *)(v43 + 24) = v37;
LABEL_49:
          WdLogEvent5_WdAssertion(v43);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)(v3 + 8), v44, v45, v46);
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 128));
          _guard_dispatch_icall_fptr();
          goto LABEL_33;
        }
        if ( *(DXGDEVICE **)(v42 + 8) != v22 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
          *(_QWORD *)(v43 + 24) = v22;
          *(_QWORD *)(v43 + 32) = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 8LL);
          goto LABEL_49;
        }
        v47 = *(struct _EX_RUNDOWN_REF ***)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        DXGALLOCATIONREFERENCE::MoveAssign(v47, (struct _EX_RUNDOWN_REF **)(v3 + 8));
        v17 = v47 + 1;
        *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v17;
        ++AllocationList;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)(v3 + 8), v48, v49, v50);
      }
      v51 = (unsigned int)((__int64)((__int64)v17 - v3 - 280) >> 3);
      v17 = (struct _EX_RUNDOWN_REF **)(v3 + 280);
      DXGDEVICE::Evict(v22, (struct DXGALLOCATIONREFERENCE *)(v3 + 280), v51, v15->Flags, (unsigned __int64 *)(v3 + 40));
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 128));
      NumAllocations = (unsigned int)*(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38)
                     - *(_DWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
      *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = (unsigned int)NumAllocations;
      v33 = *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      v31 = *(unsigned int **)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
    }
    if ( *(_DWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
    {
      v52 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) + 24LL);
      if ( (unsigned __int64)v52 >= MmUserProbeAddress )
        v52 = (_QWORD *)MmUserProbeAddress;
      *v52 = *(_QWORD *)(((unsigned __int64)&v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    }
    else
    {
      v15->NumBytesToTrim = v33;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 160));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 64));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 16));
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((DXGALLOCATIONREFERENCE **)(v3 + 272));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v53, &EventProfilerExit, v54, v6);
    return 0LL;
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 160));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 64));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 16));
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((DXGALLOCATIONREFERENCE **)(v3 + 272));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v28, 2116);
    return (unsigned int)v27;
  }
}
