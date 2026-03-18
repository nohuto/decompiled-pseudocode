/*
 * XREFs of ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C014DA00
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0147CC4 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 */

__int64 __fastcall DxgkGetSharedPrimaryHandle(struct _D3DKMT_GETSHAREDPRIMARYHANDLE *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  struct _D3DKMT_GETSHAREDPRIMARYHANDLE *v5; // rax
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGADAPTER *v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  int PairingAdapters; // r15d
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  struct DXGADAPTER *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  struct DXGADAPTER *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int CddPrimaryShareResourceHandle; // eax
  _DWORD *p_hSharedPrimary; // r8
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  struct DXGADAPTER *v37; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2021);
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (struct _D3DKMT_GETSHAREDPRIMARYHANDLE *)MmUserProbeAddress;
  *(_QWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_QWORD *)&v5->hAdapter;
  *(_DWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v5->hSharedPrimary;
  CurrentProcess = PsGetCurrentProcess(MmUserProbeAddress);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  if ( !ProcessDxgProcess )
    goto LABEL_7;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)(v3 + 24),
    *(_DWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    ProcessDxgProcess,
    (struct DXGADAPTER **)((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL));
  v16 = *(struct DXGADAPTER **)v3;
  if ( !*(_QWORD *)v3 )
  {
    v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = *(unsigned int *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
LABEL_13:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 24), v18);
LABEL_7:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v9, &EventProfilerExit, v10, 2021);
    return 3221225485LL;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      v16,
                      *(_DWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC),
                      (struct DXGADAPTER **)(v3 + 40),
                      (unsigned __int64 *)(v3 + 56),
                      (struct DXGADAPTER **)((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL),
                      (unsigned __int64 *)(v3 + 48));
  if ( PairingAdapters < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v21 + 24) = v16;
    *(_QWORD *)(v21 + 32) = *(unsigned int *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    WdLogEvent5_WdError(v21);
    goto LABEL_16;
  }
  v24 = *(struct DXGADAPTER **)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  if ( !v24 || !*(_QWORD *)v3 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v25 + 24) = 3128LL;
    WdLogEvent5_WdAssertion(v25);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 64), v24, *(struct DXGADAPTER *const *)v3);
  DXGADAPTER::ReleaseReference(v24);
  DXGADAPTER::ReleaseReference(*(DXGADAPTER **)v3);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 64));
  if ( PairingAdapters < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 64));
LABEL_16:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 24), v22);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C0056840, &EventProfilerExit, v23, 2021);
    return (unsigned int)PairingAdapters;
  }
  if ( !*((_QWORD *)v24 + 267) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v26);
    *(_QWORD *)(v27 + 24) = 3143LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v28 = *(struct DXGADAPTER **)v3;
  if ( !*(_QWORD *)(*(_QWORD *)v3 + 2128LL) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v26);
    *(_QWORD *)(v29 + 24) = 3144LL;
    WdLogEvent5_WdAssertion(v29);
  }
  v30 = *((_QWORD *)v28 + 266);
  if ( *(_DWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) >= *(_DWORD *)(v30 + 80) )
  {
    v31 = WdLogNewEntry5_WdError(v30);
    *(_QWORD *)(v31 + 24) = *(unsigned int *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 64));
    goto LABEL_13;
  }
  CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                    (DXGADAPTER **)v30,
                                    *(_DWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC));
  p_hSharedPrimary = &a1->hSharedPrimary;
  if ( (unsigned __int64)&a1->hSharedPrimary >= MmUserProbeAddress )
    p_hSharedPrimary = (_DWORD *)MmUserProbeAddress;
  *p_hSharedPrimary = CddPrimaryShareResourceHandle;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 64));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 24), v34);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v35, &EventProfilerExit, v36, 2021);
  return 0LL;
}
