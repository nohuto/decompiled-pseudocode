/*
 * XREFs of DxgkReserveGpuVirtualAddress @ 0x1C00C97F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C000D158 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C000D210 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGADAPTER **v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r15d
  int v22; // ebx
  _QWORD *v23; // r8
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  bool v27; // zf
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  char v35; // [rsp+70h] [rbp+0h] BYREF

  v3 = (struct DXGADAPTER **)((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2098);
  Current = DXGPROCESS::GetCurrent();
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = Current;
  if ( !Current )
  {
    v30 = WdLogNewEntry5_WdError(v6);
    v22 = -1073741811;
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    v25 = qword_1C00467F0;
    v27 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_21;
  }
  v10 = a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_OWORD *)v10;
  *(_OWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_OWORD *)(v10 + 16);
  *(_OWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_OWORD *)(v10 + 32);
  *(_OWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_OWORD *)(v10 + 48);
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *(_QWORD *)(v10 + 64);
  if ( *(int *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) > 1 )
  {
    v31 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v8, v9);
    v22 = -1073741811;
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    *(_QWORD *)(v31 + 32) = 9865LL;
    WdLogEvent5_WdWarning(v31);
LABEL_30:
    v27 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_21;
  }
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE(
    (DXGPAGINGQUEUEBYHANDLE *)((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
    Current,
    v3 + 3);
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)(v3 + 1),
    *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
    (struct _KTHREAD **)Current,
    v3 + 2);
  v14 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  if ( !v14 && !*(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
  {
    v32 = WdLogNewEntry5_WdWarning(v11, 0LL, v12, v13);
    *(_QWORD *)(v32 + 24) = *(unsigned int *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
    v22 = -1073741811;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v32);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v3 + 1);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUE **)((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_30;
  }
  v15 = 0LL;
  if ( v14 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
    *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_QWORD *)(v11 + 16);
    v15 = *(_QWORD *)(v14 + 32);
  }
  v16 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( !*(_QWORD *)(v16 + 1992) )
  {
    v29 = WdLogNewEntry5_WdWarning(v11, v14, v12, v13);
    v22 = -1073741811;
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    *(_QWORD *)(v29 + 32) = 9893LL;
    WdLogEvent5_WdWarning(v29);
    goto LABEL_20;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 40),
    *(struct DXGADAPTER *const *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    0LL);
  v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 5));
  if ( v21 >= 0 )
  {
    if ( *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) > 1u )
    {
      v34 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    }
    else
    {
      if ( *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) != 1 || v15 )
      {
        *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)(v16 + 1992);
        v22 = _guard_dispatch_icall_fptr();
        if ( v22 >= 0 )
        {
          v23 = (_QWORD *)(a1 + 56);
          if ( a1 + 56 >= MmUserProbeAddress )
            v23 = (_QWORD *)MmUserProbeAddress;
          *v23 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
          v24 = (_QWORD *)(a1 + 64);
          if ( a1 + 64 >= MmUserProbeAddress )
            v24 = (_QWORD *)MmUserProbeAddress;
          *v24 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
        }
        goto LABEL_19;
      }
      v34 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      *(_QWORD *)(v34 + 32) = 9914LL;
    }
    v22 = -1073741811;
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v34);
LABEL_19:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 5));
LABEL_20:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v3 + 1);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUE **)((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL));
    v27 = (qword_1C00467F0 & 2) == 0;
LABEL_21:
    if ( !v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v25, &EventProfilerExit, v26, 2098);
    return (unsigned int)v22;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 5));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v3 + 1);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUE **)((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v33, 2098);
  return (unsigned int)v21;
}
