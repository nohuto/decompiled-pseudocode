/*
 * XREFs of ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00B4EBC
 * Callers:
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C00B3FE0 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 *     DxgkEvict @ 0x1C00B4EB0 (DxgkEvict.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0001650 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001678 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0001750 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010E38 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C006CEEC (-Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0076A24 (-Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00B554C (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00B55CC (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
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
  __int64 v18; // rcx
  DXGDEVICE *v19; // r15
  __int64 v20; // rax
  void *v21; // rcx
  __int64 v22; // r9
  int v23; // r12d
  void *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 NumAllocations; // rcx
  unsigned int *AllocationList; // r12
  unsigned int *v29; // rdx
  __int64 v30; // rax
  UINT64 v31; // rax
  __int64 v32; // rax
  struct DXGPROCESS *v33; // rax
  unsigned int *v34; // rax
  unsigned int v35; // r13d
  __int64 v36; // rcx
  __int64 v37; // rax
  struct _EX_RUNDOWN_REF **v38; // r13
  __int64 v39; // r8
  _QWORD *v40; // rdx
  void *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v3 + 24) = a2;
  *(_QWORD *)(v3 + 112) = a1;
  v6 = 2116;
  *(_DWORD *)(v3 + 8) = 2116;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2116);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
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
    *(_OWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) = *(_OWORD *)&v14->hDevice;
    *(_OWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = *(_OWORD *)&v14->Flags.0;
    v15 = (struct _D3DKMT_EVICT *)(v3 + 384);
    *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = ((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                         + 384;
  }
  else
  {
    v15 = a1;
    *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = a1;
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
    *(_QWORD *)(v16 + 24) = 718LL;
    goto LABEL_17;
  }
  if ( (v15->Flags.Value & 0xFFFFFFFC) != 0 )
  {
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = 725LL;
    goto LABEL_17;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v3 + 416);
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) = ((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 424;
  *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x228) = 16;
  v17 = (struct _EX_RUNDOWN_REF **)(v3 + 424);
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = ((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 168;
  *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = 16;
  memset((void *)(v3 + 168), 0, 0x80uLL);
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 0xA0);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 16),
    v15->hDevice,
    Current,
    (struct DXGDEVICE **)(v3 + 32));
  v19 = *(DXGDEVICE **)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v20 + 24) = v15->hDevice;
    WdLogEvent5_WdAssertion(v20);
LABEL_25:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 16));
    v21 = *(void **)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
    if ( v21 != (void *)(v3 + 168) && v21 )
      ExFreePoolWithTag(v21, 0);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v3 + 416);
    goto LABEL_18;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 64),
    *(struct DXGDEVICE **)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 304, (__int64)v19, 0, v22, 0);
  v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 304));
  if ( v23 >= 0 )
  {
    NumAllocations = v15->NumAllocations;
    *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = NumAllocations;
    AllocationList = (unsigned int *)v15->AllocationList;
    v29 = &AllocationList[NumAllocations];
    *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v29;
    if ( v29 < AllocationList )
    {
      v30 = WdLogNewEntry5_WdAssertion(NumAllocations);
      *(_QWORD *)(v30 + 24) = v15->NumAllocations;
      WdLogEvent5_WdAssertion(v30);
LABEL_39:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 304));
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 64));
      goto LABEL_25;
    }
    v31 = 0LL;
    *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
    while ( AllocationList != v29 )
    {
      v32 = 16LL;
      if ( (unsigned int)NumAllocations < 0x10 )
        v32 = (unsigned int)NumAllocations;
      *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = v32;
      *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = &AllocationList[v32];
      *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v17;
      v33 = DXGPROCESS::GetCurrent();
      *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v33;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 136), v33);
      while ( AllocationList != *(unsigned int **)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) )
      {
        if ( *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
        {
          v34 = AllocationList;
          if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
            v34 = (unsigned int *)MmUserProbeAddress;
          v35 = *v34;
          *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *v34;
          v6 = *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          v15 = *(struct _D3DKMT_EVICT **)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
          v19 = *(DXGDEVICE **)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        }
        else
        {
          v35 = *AllocationList;
        }
        DXGPROCESS::GetAllocationUnsafe(
          *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80),
          (DXGALLOCATIONREFERENCE *)((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL),
          v35);
        if ( !*(_QWORD *)v3 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v36);
          *(_QWORD *)(v37 + 24) = v35;
LABEL_55:
          WdLogEvent5_WdAssertion(v37);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL));
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 136));
          _guard_dispatch_icall_fptr();
          goto LABEL_39;
        }
        if ( *(DXGDEVICE **)(*(_QWORD *)v3 + 8LL) != v19 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v36);
          *(_QWORD *)(v37 + 24) = v19;
          *(_QWORD *)(v37 + 32) = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
          goto LABEL_55;
        }
        v38 = *(struct _EX_RUNDOWN_REF ***)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
        DXGALLOCATIONREFERENCE::Assign(v38, (struct DXGALLOCATION **)((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL));
        **(_QWORD **)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = *(_QWORD *)(*(_QWORD *)v3 + 24LL);
        v17 = v38 + 1;
        *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v17;
        ++AllocationList;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL));
      }
      v39 = (unsigned int)((__int64)((__int64)v17 - v3 - 424) >> 3);
      v17 = (struct _EX_RUNDOWN_REF **)(v3 + 424);
      DXGDEVICE::Evict(v19, (struct DXGALLOCATIONREFERENCE *)(v3 + 424), v39, v15->Flags, (unsigned __int64 *)(v3 + 40));
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 136));
      LODWORD(NumAllocations) = *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30)
                              - *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
      *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = (unsigned int)NumAllocations;
      v31 = *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      v29 = *(unsigned int **)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
    }
    if ( *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
    {
      v40 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) + 24LL);
      if ( (unsigned __int64)v40 >= MmUserProbeAddress )
        v40 = (_QWORD *)MmUserProbeAddress;
      *v40 = *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    }
    else
    {
      v15->NumBytesToTrim = v31;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 304));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 64));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 16));
    v41 = *(void **)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
    if ( v41 != (void *)(v3 + 168) && v41 )
      ExFreePoolWithTag(v41, 0);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v3 + 416);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v42, &EventProfilerExit, v43, v6);
    return 0LL;
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 304));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 64));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 16));
    v24 = *(void **)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
    if ( v24 != (void *)(v3 + 168) && v24 )
      ExFreePoolWithTag(v24, 0);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v3 + 416);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v25, &EventProfilerExit, v26, 2116);
    return (unsigned int)v23;
  }
}
