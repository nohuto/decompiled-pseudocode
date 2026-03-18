/*
 * XREFs of DxgkChangeVideoMemoryReservation @ 0x1C012E080
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
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C011FA1C (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 */

__int64 __fastcall DxgkChangeVideoMemoryReservation(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v5; // rax
  void *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rcx
  bool v22; // zf
  struct DXGPROCESS *Process; // r14
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r15
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  struct DXGADAPTER *v40; // rsi
  int v41; // r15d
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r8
  ADAPTER_RENDER *v45; // r9
  _DWORD *v46; // rdx
  char v47; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2120);
  memset((void *)(v3 + 48), 0, 0x20uLL);
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_OWORD *)v5;
  *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_QWORD *)(v5 + 16);
  v6 = *(void **)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 8), v6, 0);
  if ( v6 )
  {
    v11 = DXGPROCESSMUTEXBYHANDLE::Acquire((DXGPROCESSMUTEXBYHANDLE *)(v3 + 8), v7, v9, v10);
    v16 = v11;
    if ( v11 < 0 )
    {
      v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = v6;
      *(_QWORD *)(v17 + 32) = v16;
      WdLogEvent5_WdWarning(v17);
LABEL_9:
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESS **)(v3 + 8), v18, v19);
      v21 = qword_1C00467F0;
      v22 = (qword_1C00467F0 & 2) == 0;
LABEL_10:
      if ( !v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v21, &EventProfilerExit, v20, 2120);
      return (unsigned int)v16;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)(v3 + 8));
  }
  else
  {
    Process = DXGPROCESS::GetCurrent(v8);
    if ( !Process )
    {
      v26 = WdLogNewEntry5_WdError(v25);
      LODWORD(v16) = -1073741811;
      *(_QWORD *)(v26 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v26);
      goto LABEL_9;
    }
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38),
    (struct _KTHREAD **)Process,
    (struct DXGADAPTER **)(v3 + 80));
  v31 = *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  if ( !v31 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
    LODWORD(v16) = -1073741811;
    v32[3] = -1073741811LL;
    v32[4] = Process;
    v32[5] = *(unsigned int *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    WdLogEvent5_WdWarning(v32);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESS **)(v3 + 8), v33, v34);
    v22 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_10;
  }
  LODWORD(v16) = DxgkpGetPairingAdapters(
                   *(struct DXGADAPTER **)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
                   0LL,
                   (struct DXGADAPTER **)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 40),
                   0LL);
  if ( (int)v16 < 0 )
  {
    v39 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
    *(_QWORD *)(v39 + 24) = v31;
    WdLogEvent5_WdWarning(v39);
LABEL_21:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_9;
  }
  v40 = *(struct DXGADAPTER **)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 88), v40, 0LL);
  v41 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 88));
  DXGADAPTER::ReleaseReference(v40);
  if ( v41 >= 0 )
  {
    v45 = (ADAPTER_RENDER *)*((_QWORD *)v40 + 248);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v40 + 22) + 64LL) + 40LL) + 28LL) >= 0x5018u )
    {
      v46 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v46 = (_DWORD *)MmUserProbeAddress;
      *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *v46;
    }
    LODWORD(v16) = ADAPTER_RENDER::ChangeVideoMemoryReservation(
                     v45,
                     Process,
                     (const struct _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *)(v3 + 48));
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 88));
    goto LABEL_21;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 88));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL));
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESS **)(v3 + 8), v42, v43);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v44, 2120);
  return (unsigned int)v41;
}
