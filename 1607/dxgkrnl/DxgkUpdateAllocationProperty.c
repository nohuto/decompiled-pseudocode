/*
 * XREFs of DxgkUpdateAllocationProperty @ 0x1C016EA70
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0009738 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000A128 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C000D934 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C000DA08 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPERTY@@@Z @ 0x1C014CFFC (-DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPER.c)
 */

__int64 __fastcall DxgkUpdateAllocationProperty(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  ULONG64 v14; // rax
  int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  ADAPTER_RENDER **v20; // r14
  __int64 v21; // r9
  int v22; // edi
  __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ebx
  int v33; // edi
  int updated; // eax
  __int64 v35; // rcx
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // ebx
  _QWORD *v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 2132;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2132);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    v11 = qword_1C0056840;
    v12 = (qword_1C0056840 & 2) == 0;
LABEL_6:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2132);
    return 3221225485LL;
  }
  v14 = a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_OWORD *)v14;
  *(_OWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)(v14 + 16);
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_QWORD *)(v14 + 32);
  v15 = *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
  if ( (v15 & 0xFFFFFFF8) != 0 || !v15 )
  {
    v16 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
LABEL_14:
    v12 = (qword_1C0056840 & 2) == 0;
    goto LABEL_6;
  }
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE(
    (DXGPAGINGQUEUEBYHANDLE *)(v3 + 8),
    *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
    ProcessDxgProcess,
    (struct DXGPAGINGQUEUE **)(v3 + 32));
  v18 = *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  if ( !v18 )
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = *(unsigned int *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)(v3 + 8));
    goto LABEL_14;
  }
  v20 = *(ADAPTER_RENDER ***)(v18 + 16);
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v20;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 16),
    (struct DXGDEVICE *)v20);
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 144, (__int64)v20, 0, v21, 0);
  v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 144));
  if ( v22 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 16));
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)(v3 + 8));
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C0056840, &EventProfilerExit, v23, 2132);
    return (unsigned int)v22;
  }
  DXGPROCESS::GetAllocationSafe(
    (__int64)ProcessDxgProcess,
    (DXGALLOCATIONREFERENCE *)((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44));
  v25 = *(_QWORD **)v3;
  if ( !*(_QWORD *)v3 )
  {
    v26 = WdLogNewEntry5_WdError(v24);
    v27 = *(unsigned int *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44);
LABEL_25:
    *(_QWORD *)(v26 + 24) = v27;
LABEL_26:
    WdLogEvent5_WdError(v26);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL));
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 16));
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)(v3 + 8));
    v12 = (qword_1C0056840 & 2) == 0;
    goto LABEL_6;
  }
  if ( (ADAPTER_RENDER **)v25[1] != v20 )
  {
    v26 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v26 + 24) = v20;
    *(_QWORD *)(v26 + 32) = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
    goto LABEL_26;
  }
  v28 = v25[3];
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v28;
  if ( !v28 )
  {
    v26 = WdLogNewEntry5_WdError(0LL);
    v27 = *(_QWORD *)v3;
    goto LABEL_25;
  }
  v29 = (__int64)v20[2];
  v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 192LL) + 64LL);
  if ( *(_DWORD *)(*(_QWORD *)(v30 + 40) + 28LL) < 0x6002u )
  {
    v26 = WdLogNewEntry5_WdError(v30);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    *(_QWORD *)(v26 + 32) = 1025LL;
    goto LABEL_26;
  }
  v31 = *(_QWORD *)(v29 + 16);
  if ( !*(_QWORD *)(v31 + 960) )
  {
    v26 = WdLogNewEntry5_WdError(v31);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    *(_QWORD *)(v26 + 32) = 1031LL;
    goto LABEL_26;
  }
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v25[4];
  v32 = *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v32;
  v33 = *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C);
  *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34) = v33;
  *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 0x48);
  *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = v15;
  updated = ADAPTER_RENDER::DdiValidateUpdateAllocationProperty(
              v20[2],
              (const struct _DXGKARG_VALIDATEUPDATEALLOCPROPERTY *)(v3 + 40),
              v29);
  v36 = updated;
  if ( updated >= 0 )
  {
    *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8) = v32;
    *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF4) = v33;
    *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x48);
    *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xFC) = v15;
    v40 = _guard_dispatch_icall_fptr();
    if ( v40 >= 0 )
    {
      v41 = (_QWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v41 = (_QWORD *)MmUserProbeAddress;
      *v41 = *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL));
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 16));
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)(v3 + 8));
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v42, &EventProfilerExit, v43, 2132);
    return (unsigned int)v40;
  }
  else
  {
    v37 = WdLogNewEntry5_WdError(v35);
    *(_QWORD *)(v37 + 24) = v36;
    WdLogEvent5_WdError(v37);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFC0uLL));
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 16));
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)(v3 + 8));
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v38, &EventProfilerExit, v39, 2132);
    return (unsigned int)v36;
  }
}
