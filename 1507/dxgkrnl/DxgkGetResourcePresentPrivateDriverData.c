/*
 * XREFs of DxgkGetResourcePresentPrivateDriverData @ 0x1C012E820
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C000F698 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x1C001C3FC (-GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedB.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00773DC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v5; // rax
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r12
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  KSPIN_LOCK *v32; // rcx
  __int64 v33; // rax
  size_t v34; // r8
  _DWORD *v35; // rdx
  __int64 v36; // rax
  char *v37; // rcx
  __int64 v38; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL;
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v5;
  *(_DWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 2123;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2123);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    v10 = qword_1C00467F0;
    v11 = (qword_1C00467F0 & 2) == 0;
LABEL_8:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2123);
    return 3221225485LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(
    (DXGRESOURCEREFERENCE *)((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL),
    0LL);
  ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                              (__int64)Current,
                                              (DXGRESOURCEREFERENCE *)(v3 + 40),
                                              *(_DWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
  DXGRESOURCEREFERENCE::MoveAssign(
    (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL),
    ResourceSafe);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)(v3 + 40));
  v15 = *(_QWORD *)v3;
  if ( !*(_QWORD *)v3 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = *(unsigned int *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
LABEL_14:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL));
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_8;
  }
  v17 = *(_DWORD *)(*(_QWORD *)(v15 + 8) + 284LL);
  *(_DWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v17;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8), v17, Current, (struct DXGDEVICE **)(v3 + 56));
  v20 = *(_QWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  if ( !v20 )
  {
    v21 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v21 + 24) = *(unsigned int *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
LABEL_17:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    goto LABEL_14;
  }
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 64, v20, 0, v19, 0);
  v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 64));
  v27 = v22;
  if ( v22 >= 0 )
  {
    if ( (*(_DWORD *)(v15 + 4) & 1) == 0 )
    {
      v31 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v31 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v31);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
      goto LABEL_17;
    }
    v32 = *(KSPIN_LOCK **)(*(_QWORD *)(v15 + 56) + 160LL);
    if ( v32 )
    {
      LODWORD(v27) = GetPresentPrivateDriverDataFromResource(
                       v32,
                       (UINT **)(v3 + 16),
                       (struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *)(v3 + 24));
      v34 = *(unsigned int *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
    }
    else
    {
      v33 = WdLogNewEntry5_WdWarning(0LL, v23, v25, v26);
      *(_QWORD *)(v33 + 24) = 0LL;
      *(_QWORD *)(v33 + 32) = 10765LL;
      WdLogEvent5_WdWarning(v33);
      v34 = 0LL;
      *(_DWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 0;
    }
    v35 = (_DWORD *)(a1 + 4);
    if ( a1 + 4 >= MmUserProbeAddress )
      v35 = (_DWORD *)MmUserProbeAddress;
    *v35 = v34;
    if ( (_DWORD)v34 )
    {
      v36 = *(_QWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      if ( v36 )
      {
        v37 = *(char **)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        if ( (unsigned __int64)&v37[v34] > MmUserProbeAddress || &v37[v34] <= v37 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v37, (const void *)(v36 + 8), v34);
      }
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdEvent(v24, v23, v25, v26);
    *(_QWORD *)(v28 + 24) = v27;
    *(_QWORD *)(v28 + 32) = v20;
    WdLogEvent5_WdEvent(v28);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 2123);
  return (unsigned int)v27;
}
