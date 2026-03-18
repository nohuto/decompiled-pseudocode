/*
 * XREFs of DxgkUnlock2 @ 0x1C0141150
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00013C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00013F8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000F754 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0140920 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 */

__int64 __fastcall DxgkUnlock2(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // r15d
  __int64 v17; // r8
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGALLOCATION *v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGALLOCATION *v42; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_QWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2104);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v9 = qword_1C00467F0;
    v10 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v9, &EventProfilerExit, v8, 2104);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *v4;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 8),
    *(_DWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
    Current,
    (struct DXGDEVICE **)(v3 + 16));
  v13 = *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = *(unsigned int *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_14:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    v10 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 16),
    *(struct DXGDEVICE **)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 48, v13, 0, v15, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 48));
  if ( v16 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 48));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 16));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v17, 2104);
    return (unsigned int)v16;
  }
  v18 = *(unsigned int *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24);
  DXGPROCESS::GetAllocationSafe(
    (__int64)Current,
    (DXGALLOCATIONREFERENCE *)((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24));
  v22 = *(struct DXGALLOCATION **)v3;
  if ( !*(_QWORD *)v3 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, 0LL, v20, v21);
    v23[3] = v18;
LABEL_22:
    WdLogEvent5_WdWarning(v23);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(
      (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL),
      v24,
      v25,
      v26);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 48));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 16));
    goto LABEL_14;
  }
  v27 = *(_QWORD *)(*((_QWORD *)v22 + 1) + 16LL);
  if ( *(_QWORD *)(v27 + 16) != *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v22, 0LL, v21);
    v23[3] = v13;
    v23[4] = *(_QWORD *)v3;
    v23[5] = -1073741811LL;
    goto LABEL_22;
  }
  if ( !*((_QWORD *)v22 + 3) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v22, 0LL, v21);
    v23[3] = v18;
    v23[4] = *(_QWORD *)v3;
    goto LABEL_22;
  }
  v28 = DXGDEVICE::Unlock2((struct DXGADAPTER **)v13, v22, 1);
  v33 = v28;
  if ( v28 >= 0 )
  {
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(
      (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL),
      v29,
      v31,
      v32);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 48));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 16));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v40, &EventProfilerExit, v41, 2104);
    return 0LL;
  }
  else
  {
    v34 = WdLogNewEntry5_WdError(v30);
    *(_QWORD *)(v34 + 24) = *(_QWORD *)v3;
    *(_QWORD *)(v34 + 32) = v33;
    WdLogEvent5_WdError(v34);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(
      (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL),
      v35,
      v36,
      v37);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 48));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 16));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v38, &EventProfilerExit, v39, 2104);
    return (unsigned int)v33;
  }
}
