/*
 * XREFs of DxgkChangeVideoMemoryReservation @ 0x1C01336B0
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
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C0125540 (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C014D708 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkChangeVideoMemoryReservation(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v5; // rax
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  void *v14; // r15
  bool v15; // r8
  struct DXGPROCESS *Process; // r12
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  struct DXGADAPTER *v38; // rsi
  int v39; // r14d
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r8
  ADAPTER_RENDER *v43; // r9
  _DWORD *v44; // rdx
  char v45; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2120);
  memset((void *)(v3 + 16), 0, 0x20uLL);
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)v5;
  *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v5 + 16);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_8:
    v11 = qword_1C00467F0;
    v12 = (qword_1C00467F0 & 2) == 0;
LABEL_9:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2120);
    return (unsigned int)v9;
  }
  v14 = *(void **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 112), v14, 1);
  Process = (struct DXGPROCESS *)Current;
  if ( v14 )
  {
    v17 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)(v3 + 112), v15);
    v9 = v17;
    if ( v17 < 0 )
    {
      v22 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v22 + 24) = v14;
      *(_QWORD *)(v22 + 32) = v9;
      WdLogEvent5_WdWarning(v22);
LABEL_16:
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 112), v23, v24);
      goto LABEL_8;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)(v3 + 112));
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
    Current,
    (struct DXGADAPTER **)(v3 + 48));
  v29 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  if ( !v29 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
    LODWORD(v9) = -1073741811;
    v30[3] = -1073741811LL;
    v30[4] = Current;
    v30[5] = *(unsigned int *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    WdLogEvent5_WdWarning(v30);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 112), v31, v32);
    v12 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_9;
  }
  LODWORD(v9) = DxgkpGetPairingAdapters(
                  *(struct DXGADAPTER **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                  0,
                  (struct DXGADAPTER **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                  0LL);
  if ( (int)v9 < 0 )
  {
    v37 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
    *(_QWORD *)(v37 + 24) = v29;
    WdLogEvent5_WdWarning(v37);
LABEL_22:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_16;
  }
  v38 = *(struct DXGADAPTER **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 56), v38, 0LL);
  v39 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 56));
  DXGADAPTER::ReleaseReference(v38);
  if ( v39 >= 0 )
  {
    v43 = (ADAPTER_RENDER *)*((_QWORD *)v38 + 249);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v38 + 22) + 64LL) + 40LL) + 28LL) >= 0x5018u )
    {
      v44 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v44 = (_DWORD *)MmUserProbeAddress;
      *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *v44;
    }
    LODWORD(v9) = ADAPTER_RENDER::ChangeVideoMemoryReservation(
                    v43,
                    Process,
                    (const struct _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *)(v3 + 16));
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 56));
    goto LABEL_22;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 56));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL));
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 112), v40, v41);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v42, 2120);
  return (unsigned int)v39;
}
