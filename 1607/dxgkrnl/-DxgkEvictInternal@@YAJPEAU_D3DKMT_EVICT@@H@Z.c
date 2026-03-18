/*
 * XREFs of ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00D014C
 * Callers:
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C00CFE10 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 *     DxgkEvict @ 0x1C00D0140 (DxgkEvict.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000A128 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0011450 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C00953E8 (-Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00D0FA0 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00D0FD8 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkEvictInternal(struct _D3DKMT_EVICT *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  int v6; // ebx
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r15
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  bool v14; // zf
  struct _D3DKMT_EVICT *v16; // rax
  struct _D3DKMT_EVICT *v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // rcx
  DXGDEVICE *v21; // r15
  __int64 v22; // rax
  __int64 v23; // r9
  int v24; // r12d
  __int64 v25; // r8
  __int64 NumAllocations; // rcx
  unsigned int *AllocationList; // r12
  unsigned int *v28; // rdx
  __int64 v29; // rax
  UINT64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  struct _KTHREAD **v34; // rax
  unsigned int *v35; // rax
  unsigned int v36; // r13d
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // r8
  _QWORD *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v3 + 24) = a2;
  *(_QWORD *)(v3 + 120) = a1;
  v6 = 2116;
  *(_DWORD *)v3 = 2116;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2116);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v8);
  if ( !ProcessDxgProcess )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    v13 = qword_1C0056840;
    v14 = (qword_1C0056840 & 2) == 0;
LABEL_6:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v13, &EventProfilerExit, v12, v6);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v9 = MmUserProbeAddress;
    v16 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v16 = (struct _D3DKMT_EVICT *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = *(_OWORD *)&v16->hDevice;
    *(_OWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = *(_OWORD *)&v16->Flags.0;
    v17 = (struct _D3DKMT_EVICT *)(v3 + 152);
    *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = ((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                         + 152;
  }
  else
  {
    v17 = a1;
    *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = a1;
  }
  if ( !v17->NumAllocations )
  {
    v18 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
LABEL_17:
    WdLogEvent5_WdError(v18);
LABEL_18:
    v14 = (qword_1C0056840 & 2) == 0;
    goto LABEL_6;
  }
  if ( !v17->AllocationList )
  {
    v18 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v18 + 24) = 717LL;
    goto LABEL_17;
  }
  if ( (v17->Flags.Value & 0xFFFFFFFC) != 0 )
  {
    v18 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v18 + 24) = 724LL;
    goto LABEL_17;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v3 + 288);
  *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = ((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 296;
  *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A8) = 16;
  v19 = v3 + 296;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 16),
    v17->hDevice,
    ProcessDxgProcess,
    (struct DXGDEVICE **)(v3 + 32));
  v21 = *(DXGDEVICE **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v22 + 24) = v17->hDevice;
    WdLogEvent5_WdAssertion(v22);
LABEL_25:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 16));
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v3 + 288);
    goto LABEL_18;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 72),
    *(struct DXGDEVICE **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 192, (__int64)v21, 0, v23, 0);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 192));
  if ( v24 >= 0 )
  {
    NumAllocations = v17->NumAllocations;
    *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = NumAllocations;
    AllocationList = (unsigned int *)v17->AllocationList;
    v28 = &AllocationList[NumAllocations];
    *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v28;
    if ( v28 < AllocationList )
    {
      v29 = WdLogNewEntry5_WdAssertion(NumAllocations);
      *(_QWORD *)(v29 + 24) = v17->NumAllocations;
      WdLogEvent5_WdAssertion(v29);
LABEL_33:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 192));
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 72));
      goto LABEL_25;
    }
    v30 = 0LL;
    *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
    while ( AllocationList != v28 )
    {
      v31 = 16LL;
      if ( (unsigned int)NumAllocations < 0x10 )
        v31 = (unsigned int)NumAllocations;
      *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = v31;
      *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = &AllocationList[v31];
      *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v19;
      v32 = PsGetCurrentProcess(NumAllocations);
      v34 = (struct _KTHREAD **)PsGetProcessDxgProcess(v32, v33);
      *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v34;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 128), v34);
      while ( AllocationList != *(unsigned int **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) )
      {
        if ( *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
        {
          v35 = AllocationList;
          if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
            v35 = (unsigned int *)MmUserProbeAddress;
          v36 = *v35;
          *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *v35;
          v6 = *(_DWORD *)v3;
          v17 = *(struct _D3DKMT_EVICT **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
          v21 = *(DXGDEVICE **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        }
        else
        {
          v36 = *AllocationList;
        }
        DXGPROCESS::GetAllocationUnsafe(
          *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
          (DXGALLOCATIONREFERENCE *)(v3 + 8),
          v36);
        v38 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        if ( !v38 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v37);
          *(_QWORD *)(v39 + 24) = v36;
LABEL_49:
          WdLogEvent5_WdAssertion(v39);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)(v3 + 8));
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 128));
          _guard_dispatch_icall_fptr();
          goto LABEL_33;
        }
        if ( *(DXGDEVICE **)(v38 + 8) != v21 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v37);
          *(_QWORD *)(v39 + 24) = v21;
          *(_QWORD *)(v39 + 32) = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 8LL);
          goto LABEL_49;
        }
        v40 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
        DXGALLOCATIONREFERENCE::MoveAssign(v40, v3 + 8);
        v19 = v40 + 8;
        *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v19;
        ++AllocationList;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)(v3 + 8));
      }
      v41 = (unsigned int)((__int64)(v19 - (v3 + 296)) >> 3);
      v19 = v3 + 296;
      DXGDEVICE::Evict(v21, (struct DXGALLOCATIONREFERENCE *)(v3 + 296), v41, v17->Flags, (unsigned __int64 *)(v3 + 40));
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 128));
      NumAllocations = (unsigned int)*(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40)
                     - *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
      *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = (unsigned int)NumAllocations;
      v30 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      v28 = *(unsigned int **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
    }
    if ( *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
    {
      v42 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) + 24LL);
      if ( (unsigned __int64)v42 >= MmUserProbeAddress )
        v42 = (_QWORD *)MmUserProbeAddress;
      *v42 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    }
    else
    {
      v17->NumBytesToTrim = v30;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 192));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 72));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 16));
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v3 + 288);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v43, &EventProfilerExit, v44, v6);
    return 0LL;
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 192));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 72));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 16));
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v3 + 288);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C0056840, &EventProfilerExit, v25, 2116);
    return (unsigned int)v24;
  }
}
