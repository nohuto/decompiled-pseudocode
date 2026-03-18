/*
 * XREFs of DxgkFreeGpuVirtualAddress @ 0x1C00C9B60
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkFreeGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // rsi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // zf
  int v15; // r15d
  unsigned int v16; // esi
  __int64 v17; // r8
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r8
  char v22; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2099);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v19 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    v12 = qword_1C00467F0;
    v14 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_14;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_OWORD *)v4;
  *(_QWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_QWORD *)(v4 + 16);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
    Current,
    (struct DXGADAPTER **)(v3 + 8));
  v11 = *(_QWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v11 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    v20[3] = -1073741811LL;
    v20[4] = Current;
    v20[5] = *(unsigned int *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
    WdLogEvent5_WdWarning(v20);
    goto LABEL_7;
  }
  if ( !*(_QWORD *)(v11 + 1992) )
  {
LABEL_7:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL));
    v14 = (qword_1C00467F0 & 2) == 0;
LABEL_14:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v12, &EventProfilerExit, v13, 2099);
    return 3221225485LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 16),
    *(struct DXGADAPTER *const *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    0LL);
  v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 16));
  if ( v15 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 16));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v21, 2099);
    return (unsigned int)v15;
  }
  else
  {
    v16 = _guard_dispatch_icall_fptr();
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 16));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v17, 2099);
    return v16;
  }
}
