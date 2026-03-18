/*
 * XREFs of DxgkInvalidateCache @ 0x1C0131000
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
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkInvalidateCache(__int64 a1, __int64 a2, __int64 a3)
{
  struct DXGDEVICE **v3; // rbp
  ULONG64 v4; // rsi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // r15d
  __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // [rsp+70h] [rbp+0h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2122);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 34LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v8, &EventProfilerExit, v9, 2122);
    return 3221225485LL;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_OWORD *)v4;
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v4 + 16);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 1),
    *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
    Current,
    v3 + 2);
  v12 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    WdLogEvent5_WdError(v13);
LABEL_14:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
    goto LABEL_6;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 16),
    *(struct DXGDEVICE **)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 8), v12, 0, v14, 0);
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 8));
  if ( v15 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 8));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 2));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v16, 2122);
    return (unsigned int)v15;
  }
  v17 = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24);
  DXGPROCESS::GetAllocationSafe(
    (__int64)Current,
    (DXGALLOCATIONREFERENCE *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24));
  if ( !*v3 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    v22[3] = v12;
    v22[4] = v17;
LABEL_22:
    WdLogEvent5_WdWarning(v22);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(
      (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL),
      v23,
      v24,
      v25);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 8));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 2));
    goto LABEL_14;
  }
  if ( !*((_QWORD *)*v3 + 3) )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, 0LL, v20, v21);
    v22[3] = v12;
    v22[4] = v17;
    v22[5] = *v3;
    goto LABEL_22;
  }
  v26 = _guard_dispatch_icall_fptr();
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(
    (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL),
    v27,
    v28,
    v29);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 8));
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 2));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v30, 2122);
  return v26;
}
