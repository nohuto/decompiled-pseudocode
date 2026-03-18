/*
 * XREFs of ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C0125C10
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
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0126428 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 */

__int64 __fastcall DxgkGetSharedPrimaryHandle(struct _D3DKMT_GETSHAREDPRIMARYHANDLE *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  struct _D3DKMT_GETSHAREDPRIMARYHANDLE *v5; // rax
  struct _KTHREAD **Current; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int PairingAdapters; // esi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r8
  struct DXGADAPTER *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // r15d
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  ADAPTER_DISPLAY *v35; // rcx
  __int64 v36; // rax
  unsigned int CddPrimaryShareResourceHandle; // eax
  _DWORD *p_hSharedPrimary; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  _BYTE v41[96]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2021);
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (struct _D3DKMT_GETSHAREDPRIMARYHANDLE *)MmUserProbeAddress;
  *(_QWORD *)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)&v5->hAdapter;
  *(_DWORD *)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v5->hSharedPrimary;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress);
  if ( !Current )
    goto LABEL_7;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
    Current,
    (struct DXGADAPTER **)(v3 + 8));
  v15 = *(_QWORD *)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v16 + 24) = *(unsigned int *)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v16);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_7:
    v9 = (qword_1C00467F0 & 2) == 0;
LABEL_8:
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v7, &EventProfilerExit, v8, 2021);
    return 3221225485LL;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      *(struct DXGADAPTER **)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                      *(unsigned int *)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C),
                      (struct DXGADAPTER **)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 16),
                      (struct DXGADAPTER **)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  if ( PairingAdapters >= 0 )
  {
    v24 = *(struct DXGADAPTER **)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    if ( !v24 || !*(_QWORD *)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v18, v17, v20, v21);
      *(_QWORD *)(v25 + 24) = 6386LL;
      WdLogEvent5_WdAssertion(v25);
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)(v3 + 40),
      v24,
      *(struct DXGADAPTER *const *)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    DXGADAPTER::ReleaseReference(v24);
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    v30 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 40));
    if ( v30 >= 0 )
    {
      if ( !*((_QWORD *)v24 + 248) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
        *(_QWORD *)(v32 + 24) = 6401LL;
        WdLogEvent5_WdAssertion(v32);
      }
      v33 = *(_QWORD *)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( !*(_QWORD *)(v33 + 1976) )
      {
        v34 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
        *(_QWORD *)(v34 + 24) = 6402LL;
        WdLogEvent5_WdAssertion(v34);
      }
      v35 = *(ADAPTER_DISPLAY **)(v33 + 1976);
      if ( *(_DWORD *)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) >= *((_DWORD *)v35 + 20) )
      {
        v36 = WdLogNewEntry5_WdError(v35);
        *(_QWORD *)(v36 + 24) = *(unsigned int *)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
        *(_QWORD *)(v36 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v36);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 40));
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL));
        v9 = (qword_1C00467F0 & 2) == 0;
        goto LABEL_8;
      }
      CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                        v35,
                                        *(_DWORD *)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C));
      p_hSharedPrimary = &a1->hSharedPrimary;
      if ( (unsigned __int64)&a1->hSharedPrimary >= MmUserProbeAddress )
        p_hSharedPrimary = (_DWORD *)MmUserProbeAddress;
      *p_hSharedPrimary = CddPrimaryShareResourceHandle;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 40));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v39, &EventProfilerExit, v40, 2021);
      return 0LL;
    }
    else
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 40));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(qword_1C00467F0, &EventProfilerExit, v31, 2021);
      return (unsigned int)v30;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v22 + 24) = v15;
    *(_QWORD *)(v22 + 32) = *(unsigned int *)(((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
    WdLogEvent5_WdError(v22);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v23, 2021);
    return (unsigned int)PairingAdapters;
  }
}
