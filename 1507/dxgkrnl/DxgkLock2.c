/*
 * XREFs of DxgkLock2 @ 0x1C0140DB0
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
 *     ?Lock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@IPEAPEAX@Z @ 0x1C0140888 (-Lock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@IPEAPEAX@Z.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0140920 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 */

__int64 __fastcall DxgkLock2(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  ULONG64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // r12d
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGALLOCATION *v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // r8
  __int64 v35; // r9
  int v36; // r15d
  __int64 v37; // rcx
  __int64 v38; // r8
  struct DXGALLOCATION *v39; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 2103;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2103);
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
      Template_q(v9, &EventProfilerExit, v8, 2103);
    return 3221225485LL;
  }
  v12 = a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *(_OWORD *)v12;
  *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_QWORD *)(v12 + 16);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 8),
    *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
    Current,
    (struct DXGDEVICE **)(v3 + 32));
  v14 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = *(unsigned int *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
LABEL_14:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    v10 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 16),
    *(struct DXGDEVICE **)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 80, v14, 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 80));
  if ( v17 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 80));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 16));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v18, 2103);
    return (unsigned int)v17;
  }
  DXGPROCESS::GetAllocationSafe(
    (__int64)Current,
    (DXGALLOCATIONREFERENCE *)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C));
  v22 = *(struct DXGALLOCATION **)v3;
  if ( !*(_QWORD *)v3 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, 0LL, v20, v21);
    v23[3] = *(unsigned int *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C);
    v23[4] = -1073741811LL;
LABEL_22:
    WdLogEvent5_WdWarning(v23);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(
      (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL),
      v24,
      v25,
      v26);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 80));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 16));
    goto LABEL_14;
  }
  v27 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 1) + 16LL) + 16LL);
  v28 = *(_QWORD *)(v14 + 16);
  v29 = 0LL;
  if ( v27 != *(_QWORD *)(v28 + 16) )
    goto LABEL_24;
  if ( !*((_QWORD *)v22 + 3) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v22, v27, v28);
    v23[3] = *(unsigned int *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C);
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v22 + 6) + 4LL) & 2) == 0 )
  {
    v30 = *((_QWORD *)v22 + 5);
    if ( v30 )
    {
      v31 = *(_DWORD *)(v30 + 4);
      if ( (v31 & 1) != 0 && (v31 & 2) == 0 )
      {
        v32 = *(_QWORD *)(v28 + 16);
        if ( (*(_DWORD *)(v32 + 284) & 8) == 0 )
        {
          v29 = *(unsigned int *)(v32 + 1380);
          if ( (v29 & 0x80u) == 0LL )
          {
LABEL_24:
            v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v22, v27, v28);
            v23[3] = v14;
LABEL_25:
            v23[4] = *(_QWORD *)v3;
            v23[5] = -1073741811LL;
            goto LABEL_22;
          }
        }
      }
    }
  }
  v36 = DXGDEVICE::Lock2((PERESOURCE *)v14, v22, v27, (void **)(v3 + 56));
  if ( v36 >= 0 )
  {
    v34 = (_QWORD *)(a1 + 16);
    if ( a1 + 16 >= MmUserProbeAddress )
      v34 = (_QWORD *)MmUserProbeAddress;
    *v34 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(
    (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL),
    v33,
    (__int64)v34,
    v35);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 80));
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 16));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v37, &EventProfilerExit, v38, 2103);
  return (unsigned int)v36;
}
