/*
 * XREFs of DxgkQueryVideoMemoryInfo @ 0x1C0134490
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000B0AC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z @ 0x1C00B2138 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C012486C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C012DE58 (-QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C014D708 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkQueryVideoMemoryInfo(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // r15
  _OWORD *v5; // rax
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  bool v13; // r8
  struct DXGPROCESS *Process; // r12
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  int PairingAdapters; // esi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  _DWORD *v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // r8
  char v51; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2119);
  memset((void *)(v3 + 24), 0, 0x38uLL);
  v5 = v4;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v5;
  *(_OWORD *)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v5[1];
  *(_OWORD *)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v5[2];
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    v10 = qword_1C00467F0;
    v11 = (qword_1C00467F0 & 2) == 0;
LABEL_8:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2119);
    return 3221225485LL;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE(
    (DXGPROCESSMUTEXBYHANDLE *)(v3 + 144),
    *(void **)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
    1);
  Process = (struct DXGPROCESS *)Current;
  if ( *(_QWORD *)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
  {
    v15 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)(v3 + 144), v13);
    v20 = v15;
    if ( v15 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v21 + 24) = *(_QWORD *)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      *(_QWORD *)(v21 + 32) = v20;
      WdLogEvent5_WdWarning(v21);
      goto LABEL_15;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)(v3 + 144));
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
    Current,
    (struct DXGADAPTER **)(v3 + 16));
  v27 = *(_QWORD *)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( !v27 )
  {
    v28 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v28 + 24) = Current;
    *(_QWORD *)(v28 + 32) = *(unsigned int *)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    WdLogEvent5_WdError(v28);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 144), v29, v30);
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_8;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      *(struct DXGADAPTER **)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
                      0,
                      (struct DXGADAPTER **)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                      0LL);
  if ( PairingAdapters < 0 )
  {
    v36 = WdLogNewEntry5_WdWarning(v32, v31, v34, v35);
    *(_QWORD *)(v36 + 24) = v27;
    WdLogEvent5_WdWarning(v36);
    goto LABEL_24;
  }
  v40 = *(_QWORD *)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 80), (struct DXGADAPTER *const)v40, 0LL);
  LODWORD(v20) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 80));
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v40);
  if ( (int)v20 < 0 )
  {
    v45 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
    *(_QWORD *)(v45 + 24) = v40;
    WdLogEvent5_WdWarning(v45);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 80));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_15:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 144), v22, v23);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v24, &EventProfilerExit, v25, 2119);
    return (unsigned int)v20;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 176) + 64LL) + 40LL) + 28LL) >= 0x5018u )
  {
    v46 = v4 + 3;
    if ( (unsigned __int64)(v4 + 3) >= MmUserProbeAddress )
      v46 = (_DWORD *)MmUserProbeAddress;
    *(_DWORD *)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *v46;
    v40 = *(_QWORD *)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  }
  PairingAdapters = ADAPTER_RENDER::QueryVideoMemoryInfo(
                      *(ADAPTER_RENDER **)(v40 + 1992),
                      Process,
                      (struct _D3DKMT_QUERYVIDEOMEMORYINFO *)(v3 + 24));
  if ( PairingAdapters < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 80));
LABEL_24:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 144), v37, v38);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v39, 2119);
    return (unsigned int)PairingAdapters;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *v4 = *(_OWORD *)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  v4[1] = *(_OWORD *)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  v4[2] = *(_OWORD *)(((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 80));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v51 & 0xFFFFFFFFFFFFFFC0uLL));
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 144), v47, v48);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v49, &EventProfilerExit, v50, 2119);
  return 0LL;
}
