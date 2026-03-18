/*
 * XREFs of DxgkReserveGpuVirtualAddress @ 0x1C012FB60
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C001BF00 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001BFD4 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGADAPTER **v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rcx
  bool v14; // zf
  ULONG64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // r15d
  __int64 v31; // r8
  __int64 v32; // rax
  _QWORD *v33; // r8
  _QWORD *v34; // rdx
  char v35; // [rsp+70h] [rbp+0h] BYREF

  v3 = (struct DXGADAPTER **)((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2098);
  Current = DXGPROCESS::GetCurrent(a1);
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v6);
    v11 = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    v13 = qword_1C00467F0;
    v14 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v13, &EventProfilerExit, v12, 2098);
    return (unsigned int)v11;
  }
  v16 = a1;
  if ( a1 >= MmUserProbeAddress )
    v16 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_OWORD *)v16;
  *(_OWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_OWORD *)(v16 + 16);
  *(_OWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_OWORD *)(v16 + 32);
  *(_OWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_OWORD *)(v16 + 48);
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *(_QWORD *)(v16 + 64);
  if ( *(int *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) > 1 )
  {
    v17 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v8, v9);
    v11 = -1073741811;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    *(_QWORD *)(v17 + 32) = 10148LL;
    WdLogEvent5_WdWarning(v17);
LABEL_14:
    v14 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
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
  v21 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  if ( !v21 && !*(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
  {
    v22 = WdLogNewEntry5_WdWarning(v18, 0LL, v19, v20);
    *(_QWORD *)(v22 + 24) = *(unsigned int *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
    v11 = -1073741811;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v22);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v3 + 1);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_14;
  }
  v23 = 0LL;
  if ( v21 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
    *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_QWORD *)(v18 + 16);
    v23 = *(_QWORD *)(v21 + 32);
  }
  v24 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( !*(_QWORD *)(v24 + 1984) )
  {
    v25 = WdLogNewEntry5_WdWarning(v18, v21, v19, v20);
    v11 = -1073741811;
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    *(_QWORD *)(v25 + 32) = 10176LL;
    WdLogEvent5_WdWarning(v25);
LABEL_22:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v3 + 1);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL));
    v14 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)(v3 + 5),
    *(struct DXGADAPTER *const *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    0LL);
  v30 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 5));
  if ( v30 >= 0 )
  {
    if ( *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) <= 1u )
    {
      if ( *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) != 1 || v23 )
      {
        *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)(v24 + 1984);
        v11 = _guard_dispatch_icall_fptr();
        if ( v11 >= 0 )
        {
          v33 = (_QWORD *)(a1 + 56);
          if ( a1 + 56 >= MmUserProbeAddress )
            v33 = (_QWORD *)MmUserProbeAddress;
          *v33 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
          v34 = (_QWORD *)(a1 + 64);
          if ( a1 + 64 >= MmUserProbeAddress )
            v34 = (_QWORD *)MmUserProbeAddress;
          *v34 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
        }
        goto LABEL_31;
      }
      v32 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
      *(_QWORD *)(v32 + 32) = 10197LL;
    }
    else
    {
      v32 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    }
    v11 = -1073741811;
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v32);
LABEL_31:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 5));
    goto LABEL_22;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 5));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v3 + 1);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v31, 2098);
  return (unsigned int)v30;
}
