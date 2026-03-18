/*
 * XREFs of DxgkGetScanLine @ 0x1C00DD610
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C0088C5C (DmmIsSourceInActiveVidPnTopology.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C00DDB78 (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C0147964 (-DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C017496C (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 */

__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // rsi
  _OWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGADAPTER *v15; // r15
  __int64 v16; // r14
  int PairingAdapters; // eax
  __int64 v18; // rcx
  __int64 v19; // rsi
  struct DXGADAPTER *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r15d
  int v26; // edx
  ADAPTER_DISPLAY *v27; // rcx
  int ScanLine; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _BYTE *v32; // rdx
  _DWORD *v33; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  bool v37; // zf
  _QWORD *v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  _QWORD *v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // rax
  unsigned int v50; // ecx
  struct DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v52; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2034);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v36 = WdLogNewEntry5_WdError(v7);
    LODWORD(v19) = -1073741811;
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    v30 = qword_1C0056840;
    v37 = (qword_1C0056840 & 2) == 0;
    goto LABEL_32;
  }
  v9 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v9;
  *(_DWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0;
  *(_QWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x84) = 0LL;
  if ( (unsigned int)_guard_dispatch_icall_fptr() )
  {
    Global = DXGGLOBAL::GetGlobal(v10);
    LODWORD(v19) = REMOTE_VSYNC::GetScanLine(
                     (struct DXGGLOBAL *)((char *)Global + 576),
                     (struct _DXGKARG_GETSCANLINE *)(v3 + 128));
LABEL_20:
    if ( (int)v19 >= 0 )
    {
      v32 = (_BYTE *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v32 = (_BYTE *)MmUserProbeAddress;
      *v32 = *(_BYTE *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x84);
      v33 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v33 = (_DWORD *)MmUserProbeAddress;
      *v33 = *(_DWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v30, &EventProfilerExit, v31, 2034);
      return 0LL;
    }
    goto LABEL_37;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)(v3 + 8),
    *(_DWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
    ProcessDxgProcess,
    (struct DXGADAPTER **)((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL));
  v15 = *(struct DXGADAPTER **)v3;
  if ( !*(_QWORD *)v3 )
  {
    v40 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v40 + 24) = *(unsigned int *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    LODWORD(v19) = -1073741811;
    *(_QWORD *)(v40 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v40);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 8), v41);
LABEL_37:
    v37 = (qword_1C0056840 & 2) == 0;
    goto LABEL_32;
  }
  v16 = *(unsigned int *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
  PairingAdapters = DxgkpGetPairingAdapters(
                      v15,
                      *(_DWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C),
                      0LL,
                      0LL,
                      (struct DXGADAPTER **)((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL),
                      (unsigned __int64 *)(v3 + 40));
  v19 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdEvent(v18);
    v42[3] = v15;
    v42[4] = v16;
    v42[5] = v19;
    WdLogEvent5_WdEvent(v42);
    goto LABEL_40;
  }
  v20 = *(struct DXGADAPTER **)v3;
  if ( !*(_QWORD *)v3 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v45 + 24) = 5222LL;
    WdLogEvent5_WdAssertion(v45);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 48), v20, 0LL);
  DXGADAPTER::ReleaseReference(v20);
  v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 48));
  if ( v25 >= 0 )
  {
    if ( !*((_QWORD *)v20 + 266) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v35 + 24) = 5236LL;
      WdLogEvent5_WdAssertion(v35);
    }
    if ( (unsigned int)v16 < *(_DWORD *)(*((_QWORD *)v20 + 266) + 80LL) )
    {
      if ( DmmIsSourceInActiveVidPnTopology((__int64)v20, v16) )
      {
        v26 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 266) + 112LL) + 1016 * v16 + 964);
        *(_DWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v26;
        if ( v26 == -1 )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdEvent(1016 * v16);
          v38[3] = v16;
          v38[4] = *(unsigned int *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          LODWORD(v19) = -1071774912;
          v38[5] = -1071774912LL;
          WdLogEvent5_WdEvent(v38);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 48));
          DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 8), v39);
          v30 = qword_1C0056840;
          v37 = (qword_1C0056840 & 2) == 0;
          goto LABEL_32;
        }
        v27 = (ADAPTER_DISPLAY *)*((_QWORD *)v20 + 266);
        if ( *((_QWORD *)v20 + 267) )
          ScanLine = ADAPTER_DISPLAY::DdiGetScanLine(v27, (struct _DXGKARG_GETSCANLINE *)(v3 + 128));
        else
          ScanLine = ADAPTER_DISPLAY::DodGetScanLine(v27, v16, (struct _DXGKARG_GETSCANLINE *)(v3 + 128));
        LODWORD(v19) = ScanLine;
      }
      else
      {
        v48 = *((_QWORD *)v20 + 266);
        v49 = *(_QWORD *)(v48 + 112);
        v50 = *(_DWORD *)(v49 + 1016 * v16 + 972) + 20;
        if ( v50 <= *(_DWORD *)(v49 + 1016 * v16 + 912) )
        {
          *(_BYTE *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x84) = 0;
        }
        else
        {
          v50 = 0;
          *(_BYTE *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x84) = 1;
        }
        *(_DWORD *)(*(_QWORD *)(v48 + 112) + 1016 * v16 + 972) = v50;
        *(_DWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v50;
        LODWORD(v19) = 0;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 48));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 8), v29);
      goto LABEL_20;
    }
    v44 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
    *(_QWORD *)(v44 + 24) = v16;
    LODWORD(v19) = -1073741811;
    *(_QWORD *)(v44 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v44);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 48));
LABEL_40:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 8), v43);
    v37 = (qword_1C0056840 & 2) == 0;
LABEL_32:
    if ( !v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v30, &EventProfilerExit, v31, 2034);
    return (unsigned int)v19;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 48));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 8), v46);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C0056840, &EventProfilerExit, v47, 2034);
  return (unsigned int)v25;
}
