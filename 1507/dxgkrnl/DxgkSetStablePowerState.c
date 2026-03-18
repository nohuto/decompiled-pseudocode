/*
 * XREFs of DxgkSetStablePowerState @ 0x1C014A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C011F804 (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0127DC8 (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSetStablePowerState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int PairingAdapters; // r15d
  __int64 v19; // rax
  __int64 v20; // r8
  struct DXGADAPTER *v21; // r15
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r15
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // eax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r8
  _BYTE v47[96]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_QWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2124);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 2245LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v8, &EventProfilerExit, v9, 2124);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v4;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    (struct _KTHREAD **)Current,
    (struct DXGADAPTER **)(v3 + 24));
  v12 = *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = Current;
    *(_QWORD *)(v13 + 32) = *(unsigned int *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    WdLogEvent5_WdError(v13);
LABEL_14:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_6;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      *(struct DXGADAPTER **)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
                      0LL,
                      (struct DXGADAPTER **)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 16),
                      0LL);
  if ( PairingAdapters >= 0 )
  {
    v21 = *(struct DXGADAPTER **)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32), v21, 0LL);
    v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 32));
    DXGADAPTER::ReleaseReference(v21);
    if ( v22 >= 0 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)Current + 144, 0LL);
      *((_QWORD *)Current + 19) = KeGetCurrentThread();
      v33 = *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      v34 = *(unsigned int *)(v33 + 184);
      v35 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8 * v34);
      if ( !v35 )
      {
        v36 = WdLogNewEntry5_WdWarning(v34, v30, v31, v32);
        *(_QWORD *)(v36 + 24) = v33;
        *(_QWORD *)(v36 + 32) = Current;
        WdLogEvent5_WdWarning(v36);
        *((_QWORD *)Current + 19) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 144, 0LL);
        KeLeaveCriticalRegion();
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
        goto LABEL_14;
      }
      v37 = *(_QWORD *)(v33 + 1984);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v37 + 1048, 0LL);
      *(_QWORD *)(v37 + 1056) = KeGetCurrentThread();
      if ( *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) )
      {
        if ( !*(_DWORD *)(v35 + 28) )
          ADAPTER_RENDER::AddStablePowerReference(*(ADAPTER_RENDER **)(v33 + 1984));
        ++*(_DWORD *)(v35 + 28);
      }
      else
      {
        v42 = *(_DWORD *)(v35 + 28);
        if ( v42 )
        {
          v44 = v42 - 1;
          *(_DWORD *)(v35 + 28) = v44;
          if ( !v44 )
            ADAPTER_RENDER::ReleaseStablePowerReference(*(ADAPTER_RENDER **)(v33 + 1984), v38, v40);
        }
        else
        {
          v43 = WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
          *(_QWORD *)(v43 + 24) = Current;
          *(_QWORD *)(v43 + 32) = *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          WdLogEvent5_WdWarning(v43);
        }
      }
      *(_QWORD *)(v37 + 1056) = 0LL;
      ExReleasePushLockExclusiveEx(v37 + 1048, 0LL);
      KeLeaveCriticalRegion();
      *((_QWORD *)Current + 19) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 144, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v45, &EventProfilerExit, v46, 2124);
      return 0LL;
    }
    else
    {
      v27 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      *(_QWORD *)(v27 + 24) = v21;
      WdLogEvent5_WdWarning(v27);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v28, &EventProfilerExit, v29, 2124);
      return (unsigned int)v22;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v19 + 24) = v12;
    WdLogEvent5_WdWarning(v19);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v20, 2124);
    return (unsigned int)PairingAdapters;
  }
}
