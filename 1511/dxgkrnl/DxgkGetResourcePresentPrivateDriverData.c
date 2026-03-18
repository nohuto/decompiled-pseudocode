/*
 * XREFs of DxgkGetResourcePresentPrivateDriverData @ 0x1C0133D40
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0010CC0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x1C001C968 (-GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedB.c)
 *     ?Assign@DXGRESOURCEREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0065DC4 (-Assign@DXGRESOURCEREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v5; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct _KTHREAD **v8; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  struct DXGRESOURCE **ResourceSafe; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  KSPIN_LOCK *v33; // rcx
  __int64 v34; // rax
  size_t v35; // r8
  _DWORD *v36; // rdx
  __int64 v37; // rax
  char *v38; // rcx
  __int64 v39; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL;
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v5;
  *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 2123;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2123);
  Current = DXGPROCESS::GetCurrent();
  v8 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    v11 = qword_1C00467F0;
    v12 = (qword_1C00467F0 & 2) == 0;
LABEL_8:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2123);
    return 3221225485LL;
  }
  *(_QWORD *)v3 = 0LL;
  ResourceSafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceSafe(
                                          (__int64)Current,
                                          (DXGRESOURCEREFERENCE *)(v3 + 40),
                                          *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
  DXGRESOURCEREFERENCE::Assign(
    (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL),
    ResourceSafe);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)(v3 + 40));
  v16 = *(_QWORD *)v3;
  if ( !*(_QWORD *)v3 )
  {
    v17 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v17 + 24) = *(unsigned int *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_14:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL));
    v12 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_8;
  }
  v18 = *(_DWORD *)(*(_QWORD *)(v16 + 8) + 284LL);
  *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v18;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8), v18, v8, (struct DXGDEVICE **)(v3 + 56));
  v21 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v22 + 24) = *(unsigned int *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v22);
LABEL_17:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    goto LABEL_14;
  }
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 64, v21, 0, v20, 0);
  v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 64));
  v28 = v23;
  if ( v23 >= 0 )
  {
    if ( (*(_DWORD *)(v16 + 4) & 1) == 0 )
    {
      v32 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v32 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v32);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
      goto LABEL_17;
    }
    v33 = *(KSPIN_LOCK **)(*(_QWORD *)(v16 + 56) + 160LL);
    if ( v33 )
    {
      LODWORD(v28) = GetPresentPrivateDriverDataFromResource(
                       v33,
                       (UINT **)(v3 + 16),
                       (struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *)(v3 + 24));
      v35 = *(unsigned int *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
    }
    else
    {
      v34 = WdLogNewEntry5_WdWarning(0LL, v24, v26, v27);
      *(_QWORD *)(v34 + 24) = 0LL;
      *(_QWORD *)(v34 + 32) = 10474LL;
      WdLogEvent5_WdWarning(v34);
      v35 = 0LL;
      *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 0;
    }
    v36 = (_DWORD *)(a1 + 4);
    if ( a1 + 4 >= MmUserProbeAddress )
      v36 = (_DWORD *)MmUserProbeAddress;
    *v36 = v35;
    if ( (_DWORD)v35 )
    {
      v37 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      if ( v37 )
      {
        v38 = *(char **)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        if ( (unsigned __int64)&v38[v35] > MmUserProbeAddress || &v38[v35] <= v38 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v38, (const void *)(v37 + 8), v35);
      }
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdEvent(v25, v24, v26, v27);
    *(_QWORD *)(v29 + 24) = v28;
    *(_QWORD *)(v29 + 32) = v21;
    WdLogEvent5_WdEvent(v29);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v30, &EventProfilerExit, v31, 2123);
  return (unsigned int)v28;
}
