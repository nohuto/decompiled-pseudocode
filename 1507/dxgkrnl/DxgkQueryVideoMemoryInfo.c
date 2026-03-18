/*
 * XREFs of DxgkQueryVideoMemoryInfo @ 0x1C012F410
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000F0D8 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z @ 0x1C00DB29C (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z.c)
 *     ?Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ @ 0x1C00DB2B4 (-Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C011ECF4 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C0127C8C (-QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z.c)
 */

__int64 __fastcall DxgkQueryVideoMemoryInfo(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // r13
  _OWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGPROCESS *Process; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  bool v21; // zf
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // rcx
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int PairingAdapters; // r15d
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // rcx
  bool v45; // zf
  __int64 v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  _DWORD *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // r8
  char v61; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2119);
  memset((void *)(v3 + 56), 0, 0x38uLL);
  v5 = v4;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *v5;
  *(_OWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v5[1];
  *(_OWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v5[2];
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE(
    (DXGPROCESSMUTEXBYHANDLE *)(v3 + 16),
    *(void **)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38),
    1);
  if ( *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) )
  {
    v10 = DXGPROCESSMUTEXBYHANDLE::Acquire((DXGPROCESSMUTEXBYHANDLE *)(v3 + 16), v6, v8, v9);
    Process = (struct DXGPROCESS *)v10;
    if ( v10 < 0 )
    {
      v16 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v16 + 24) = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      *(_QWORD *)(v16 + 32) = Process;
      WdLogEvent5_WdWarning(v16);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESS **)(v3 + 16), v17, v18);
      v21 = (qword_1C00467F0 & 2) == 0;
LABEL_9:
      if ( !v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v19, &EventProfilerExit, v20, 2119);
      return (unsigned int)Process;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)(v3 + 16));
  }
  else
  {
    Process = DXGPROCESS::GetCurrent(v7);
    if ( !Process )
    {
      v24 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v24 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v24);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESS **)(v3 + 16), v25, v26);
      v28 = qword_1C00467F0;
      v29 = (qword_1C00467F0 & 2) == 0;
      goto LABEL_16;
    }
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
    (struct _KTHREAD **)Process,
    (struct DXGADAPTER **)(v3 + 48));
  v31 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  if ( !v31 )
  {
    v32 = WdLogNewEntry5_WdError(v30);
    *(_QWORD *)(v32 + 24) = Process;
    *(_QWORD *)(v32 + 32) = *(unsigned int *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    WdLogEvent5_WdError(v32);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESS **)(v3 + 16), v33, v34);
    v29 = (qword_1C00467F0 & 2) == 0;
LABEL_16:
    if ( !v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v28, &EventProfilerExit, v27, 2119);
    return 3221225485LL;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      *(struct DXGADAPTER **)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                      0LL,
                      (struct DXGADAPTER **)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                      0LL);
  if ( PairingAdapters < 0 )
  {
    v40 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
    *(_QWORD *)(v40 + 24) = v31;
    WdLogEvent5_WdWarning(v40);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESS **)(v3 + 16), v41, v42);
    v44 = qword_1C00467F0;
    v45 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_24;
  }
  v46 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 112), (struct DXGADAPTER *const)v46, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 112));
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v46);
  if ( PairingAdapters < 0 )
  {
    v51 = WdLogNewEntry5_WdWarning(v48, v47, v49, v50);
    *(_QWORD *)(v51 + 24) = v46;
    WdLogEvent5_WdWarning(v51);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 112));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESS **)(v3 + 16), v52, v53);
    v45 = (qword_1C00467F0 & 2) == 0;
LABEL_24:
    if ( !v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v44, &EventProfilerExit, v43, 2119);
    return (unsigned int)PairingAdapters;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 176) + 64LL) + 40LL) + 28LL) >= 0x5018u )
  {
    v54 = v4 + 3;
    if ( (unsigned __int64)(v4 + 3) >= MmUserProbeAddress )
      v54 = (_DWORD *)MmUserProbeAddress;
    *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *v54;
    v46 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  }
  LODWORD(Process) = ADAPTER_RENDER::QueryVideoMemoryInfo(
                       *(ADAPTER_RENDER **)(v46 + 1984),
                       Process,
                       (struct _D3DKMT_QUERYVIDEOMEMORYINFO *)(v3 + 56));
  if ( (int)Process < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 112));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESS **)(v3 + 16), v55, v56);
    v19 = qword_1C00467F0;
    v21 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_9;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *v4 = *(_OWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  v4[1] = *(_OWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
  v4[2] = *(_OWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 112));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL));
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESS **)(v3 + 16), v57, v58);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v59, &EventProfilerExit, v60, 2119);
  return 0LL;
}
