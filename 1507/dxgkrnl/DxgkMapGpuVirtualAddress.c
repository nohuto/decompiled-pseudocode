/*
 * XREFs of DxgkMapGpuVirtualAddress @ 0x1C012EF70
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00013C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00013F8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C00026D8 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000F754 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C001BF00 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001BFD4 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkMapGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  ULONG64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  struct DXGDEVICE *v19; // r13
  __int64 v20; // r9
  char v21; // al
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  _QWORD *v29; // r8
  __int64 v30; // r9
  struct DXGPAGINGQUEUE *v31; // [rsp+80h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2100);
  Current = DXGPROCESS::GetCurrent(a1);
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v10 = qword_1C00467F0;
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  v13 = a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_OWORD *)v13;
  *(_OWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *(_OWORD *)(v13 + 16);
  *(_OWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = *(_OWORD *)(v13 + 32);
  *(_OWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_OWORD *)(v13 + 48);
  *(_OWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = *(_OWORD *)(v13 + 64);
  *(_OWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = *(_OWORD *)(v13 + 80);
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = *(_QWORD *)(v13 + 96);
  *(_QWORD *)v3 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE(
    (DXGPAGINGQUEUEBYHANDLE *)(v3 + 8),
    *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90),
    Current,
    (struct DXGPAGINGQUEUE **)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( !*(_QWORD *)v3 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
    v8 = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
LABEL_14:
    WdLogEvent5_WdWarning(v18);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)(v3 + 8));
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  if ( (*(_BYTE *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) & 0x10) != 0
    || (*(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    v8 = -1073741811;
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    goto LABEL_14;
  }
  v19 = *(struct DXGDEVICE **)(*(_QWORD *)v3 + 16LL);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 24),
    v19);
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 64, (__int64)v19, 0, v20, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 64));
  if ( v8 >= 0 )
  {
    *(_QWORD *)v3 = 0LL;
    v21 = *(_BYTE *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8);
    if ( (v21 & 4) != 0
      || (v21 & 8) != 0
      || (AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                        (__int64)Current,
                                                        (DXGALLOCATIONREFERENCE *)(v3 + 16),
                                                        *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                  + 0xB0)),
          DXGALLOCATIONREFERENCE::MoveAssign(
            (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL),
            AllocationSafe),
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)(v3 + 16), v23, v24, v25),
          *(_QWORD *)v3) )
    {
      *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *((_QWORD *)v19 + 2);
      DXGDEVICE::UmdManagesResidency(v19);
      v8 = _guard_dispatch_icall_fptr();
      if ( v8 >= 0 )
      {
        v30 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        v29 = (_QWORD *)(v30 + 88);
        if ( v30 + 88 >= MmUserProbeAddress )
          v29 = (_QWORD *)MmUserProbeAddress;
        *v29 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8);
        v28 = (_QWORD *)(v30 + 96);
        if ( v30 + 96 >= MmUserProbeAddress )
          v28 = (_QWORD *)MmUserProbeAddress;
        *v28 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0);
      }
    }
    else
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v8 = -1073741811;
      v27[3] = -1073741811LL;
      v27[4] = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0);
      v27[5] = Current;
      WdLogEvent5_WdError(v27);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(
      (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL),
      (__int64)v28,
      (__int64)v29,
      v30);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 24));
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)(v3 + 8));
    v11 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 24));
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)(v3 + 8));
    v10 = qword_1C00467F0;
    v11 = (qword_1C00467F0 & 2) == 0;
  }
LABEL_6:
  if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v9, 2100);
  return (unsigned int)v8;
}
