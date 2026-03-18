/*
 * XREFs of DxgkGetResourcePresentPrivateDriverData @ 0x1C0153100
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0011318 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x1C0021494 (-GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedB.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00A5A60 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01519D0 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // r13
  _OWORD *v5; // rax
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r15
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r12
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  KSPIN_LOCK *v34; // rcx
  __int64 v35; // rax
  size_t v36; // r8
  _DWORD *v37; // rdx
  char *v38; // rcx
  __int64 v39; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v3 + 72) = a1;
  v4 = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v5;
  *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 2123;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2123);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v7);
  if ( !ProcessDxgProcess )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    v12 = qword_1C0056840;
    v13 = (qword_1C0056840 & 2) == 0;
LABEL_8:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v12, &EventProfilerExit, v11, 2123);
    return 3221225485LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(
    (DXGRESOURCEREFERENCE *)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL),
    0LL);
  ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                              (__int64)ProcessDxgProcess,
                                              (DXGRESOURCEREFERENCE *)(v3 + 56),
                                              *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
  DXGRESOURCEREFERENCE::MoveAssign(
    (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL),
    ResourceSafe);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)(v3 + 56));
  v17 = *(_QWORD *)v3;
  if ( !*(_QWORD *)v3 )
  {
    v18 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v18 + 24) = *(unsigned int *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_14:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL));
    v13 = (qword_1C0056840 & 2) == 0;
    goto LABEL_8;
  }
  v19 = *(_DWORD *)(*(_QWORD *)(v17 + 8) + 308LL);
  *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v19;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 8),
    v19,
    ProcessDxgProcess,
    (struct DXGDEVICE **)(v3 + 64));
  v22 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  if ( !v22 )
  {
    v23 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v23 + 24) = *(unsigned int *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
LABEL_17:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    goto LABEL_14;
  }
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 80, v22, 0, v21, 0);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 80));
  v29 = v24;
  if ( v24 >= 0 )
  {
    if ( (*(_DWORD *)(v17 + 4) & 1) == 0 )
    {
      v33 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v33 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v33);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 80));
      goto LABEL_17;
    }
    v34 = *(KSPIN_LOCK **)(*(_QWORD *)(v17 + 56) + 168LL);
    if ( v34 )
    {
      LODWORD(v29) = GetPresentPrivateDriverDataFromResource(
                       v34,
                       (UINT **)(v3 + 40),
                       (struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *)(v3 + 24));
      v4 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      v36 = *(unsigned int *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
    }
    else
    {
      v35 = WdLogNewEntry5_WdWarning(0LL, v25, v27, v28);
      *(_QWORD *)(v35 + 24) = 0LL;
      *(_QWORD *)(v35 + 32) = 10939LL;
      WdLogEvent5_WdWarning(v35);
      v36 = 0LL;
      *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 0;
    }
    v37 = (_DWORD *)(*(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) + 4LL);
    if ( (unsigned __int64)v37 >= MmUserProbeAddress )
      v37 = (_DWORD *)MmUserProbeAddress;
    *v37 = v36;
    if ( (_DWORD)v36 && v4 )
    {
      v38 = *(char **)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      if ( (unsigned __int64)&v38[v36] > MmUserProbeAddress || &v38[v36] <= v38 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v38, (const void *)(v4 + 8), v36);
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdEvent(v26);
    *(_QWORD *)(v30 + 24) = v29;
    *(_QWORD *)(v30 + 32) = v22;
    WdLogEvent5_WdEvent(v30);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 80));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v31, &EventProfilerExit, v32, 2123);
  return (unsigned int)v29;
}
