/*
 * XREFs of DxgkGetScanLine @ 0x1C00B2CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C00B3250 (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C00B6E28 (DmmIsSourceInActiveVidPnTopology.c)
 *     ?DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C0123EE4 (-DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C012676C (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 */

__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rsi
  _OWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // r14
  int PairingAdapters; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  struct DXGADAPTER *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r15d
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  ADAPTER_DISPLAY *v33; // rcx
  int ScanLine; // eax
  __int64 v35; // r8
  DXGADAPTER *v36; // rcx
  _BYTE *v37; // rdx
  _DWORD *v38; // rdx
  __int64 v40; // rax
  _QWORD *v41; // rax
  bool v42; // zf
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rax
  unsigned int v51; // ecx
  struct DXGGLOBAL *Global; // rax
  DXGADAPTER *v53; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v40 = WdLogNewEntry5_WdError(v5);
    LODWORD(v23) = -1073741811;
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v40);
    goto LABEL_33;
  }
  v7 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *v7;
  *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0;
  *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = 0LL;
  if ( (unsigned int)_guard_dispatch_icall_fptr() )
  {
    Global = DXGGLOBAL::GetGlobal(v9, v8, v10, v11);
    LODWORD(v23) = REMOTE_VSYNC::GetScanLine(
                     (struct DXGGLOBAL *)((char *)Global + 584),
                     (struct _DXGKARG_GETSCANLINE *)(v3 + 88));
    goto LABEL_21;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    Current,
    (struct DXGADAPTER **)(v3 + 8));
  v16 = *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v16 )
  {
    v43 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v43 + 24) = *(unsigned int *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    LODWORD(v23) = -1073741811;
    *(_QWORD *)(v43 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v43);
    goto LABEL_35;
  }
  v17 = *(unsigned int *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
  PairingAdapters = DxgkpGetPairingAdapters(
                      *(struct DXGADAPTER **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                      v17,
                      0LL,
                      (struct DXGADAPTER **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  v23 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
    v44[3] = v16;
    v44[4] = v17;
    v44[5] = v23;
    WdLogEvent5_WdEvent(v44);
    goto LABEL_35;
  }
  v24 = *(struct DXGADAPTER **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v24 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    *(_QWORD *)(v45 + 24) = 25101LL;
    WdLogEvent5_WdAssertion(v45);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32), v24, 0LL);
  DXGADAPTER::ReleaseReference(v24);
  v29 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 32));
  if ( v29 >= 0 )
  {
    if ( !*((_QWORD *)v24 + 247) )
    {
      v47 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
      *(_QWORD *)(v47 + 24) = 25115LL;
      WdLogEvent5_WdAssertion(v47);
    }
    if ( (unsigned int)v17 < *(_DWORD *)(*((_QWORD *)v24 + 247) + 80LL) )
    {
      if ( !(unsigned __int8)DmmIsSourceInActiveVidPnTopology(v24, (unsigned int)v17, v27, v28) )
      {
        v49 = *((_QWORD *)v24 + 247);
        v50 = *(_QWORD *)(v49 + 112);
        v51 = *(_DWORD *)(v50 + 1008 * v17 + 964) + 20;
        if ( v51 <= *(_DWORD *)(v50 + 1008 * v17 + 904) )
        {
          *(_BYTE *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = 0;
        }
        else
        {
          v51 = 0;
          *(_BYTE *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = 1;
        }
        *(_DWORD *)(*(_QWORD *)(v49 + 112) + 1008 * v17 + 964) = v51;
        *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v51;
        LODWORD(v23) = 0;
LABEL_19:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
        v36 = *(DXGADAPTER **)v3;
        if ( *(_QWORD *)v3 )
          DXGADAPTER::ReleaseReference(v36);
LABEL_21:
        if ( (int)v23 >= 0 )
        {
          v37 = (_BYTE *)(a1 + 8);
          if ( a1 + 8 >= MmUserProbeAddress )
            v37 = (_BYTE *)MmUserProbeAddress;
          *v37 = *(_BYTE *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C);
          v38 = (_DWORD *)(a1 + 12);
          if ( a1 + 12 >= MmUserProbeAddress )
            v38 = (_DWORD *)MmUserProbeAddress;
          *v38 = *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
          if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
            Template_q((__int64)v36, &EventProfilerExit, v35, 2034);
          return 0LL;
        }
        goto LABEL_36;
      }
      v32 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v24 + 247) + 112LL) + 1008 * v17 + 956);
      *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v32;
      if ( (_DWORD)v32 != -1 )
      {
        v33 = (ADAPTER_DISPLAY *)*((_QWORD *)v24 + 247);
        if ( *((_QWORD *)v24 + 248) )
          ScanLine = ADAPTER_DISPLAY::DdiGetScanLine(v33, (struct _DXGKARG_GETSCANLINE *)(v3 + 88));
        else
          ScanLine = ADAPTER_DISPLAY::DodGetScanLine(v33, v17, (struct _DXGKARG_GETSCANLINE *)(v3 + 88));
        LODWORD(v23) = ScanLine;
        goto LABEL_19;
      }
      v41 = (_QWORD *)WdLogNewEntry5_WdEvent(1008 * v17, v32, v30, v31);
      v41[3] = v17;
      v41[4] = *(unsigned int *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      LODWORD(v23) = -1071774912;
      v41[5] = -1071774912LL;
      WdLogEvent5_WdEvent(v41);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_33:
      v36 = (DXGADAPTER *)qword_1C00467F0;
      v42 = (qword_1C00467F0 & 2) == 0;
      goto LABEL_37;
    }
    v48 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
    *(_QWORD *)(v48 + 24) = v17;
    LODWORD(v23) = -1073741811;
    *(_QWORD *)(v48 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v48);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
LABEL_35:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_36:
    v42 = (qword_1C00467F0 & 2) == 0;
LABEL_37:
    if ( !v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q((__int64)v36, &EventProfilerExit, v35, 2034);
    return (unsigned int)v23;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v46, 2034);
  return (unsigned int)v29;
}
