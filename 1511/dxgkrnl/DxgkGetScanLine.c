/*
 * XREFs of DxgkGetScanLine @ 0x1C00C8510
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C0097CD8 (DmmIsSourceInActiveVidPnTopology.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C00C89D0 (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C0129DDC (-DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C012C910 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 */

__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rsi
  _OWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  __int64 v14; // r14
  int PairingAdapters; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  struct DXGADAPTER *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r15d
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  ADAPTER_DISPLAY *v30; // rcx
  int ScanLine; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  _BYTE *v34; // rdx
  _DWORD *v35; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  bool v39; // zf
  _QWORD *v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // rax
  unsigned int v48; // ecx
  struct DXGGLOBAL *Global; // rax
  char v50; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v38 = WdLogNewEntry5_WdError(v5);
    LODWORD(v20) = -1073741811;
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    v32 = qword_1C00467F0;
    v39 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_32;
  }
  v7 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *v7;
  *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0;
  *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = 0LL;
  if ( (unsigned int)_guard_dispatch_icall_fptr() )
  {
    Global = DXGGLOBAL::GetGlobal(v8);
    LODWORD(v20) = REMOTE_VSYNC::GetScanLine(
                     (struct DXGGLOBAL *)((char *)Global + 728),
                     (struct _DXGKARG_GETSCANLINE *)(v3 + 88));
LABEL_20:
    if ( (int)v20 >= 0 )
    {
      v34 = (_BYTE *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v34 = (_BYTE *)MmUserProbeAddress;
      *v34 = *(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C);
      v35 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v35 = (_DWORD *)MmUserProbeAddress;
      *v35 = *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v32, &EventProfilerExit, v33, 2034);
      return 0LL;
    }
    goto LABEL_37;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    Current,
    (struct DXGADAPTER **)(v3 + 8));
  v13 = *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v13 )
  {
    v41 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v41 + 24) = *(unsigned int *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    LODWORD(v20) = -1073741811;
    *(_QWORD *)(v41 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v41);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_37:
    v39 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_32;
  }
  v14 = *(unsigned int *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
  PairingAdapters = DxgkpGetPairingAdapters(
                      *(struct DXGADAPTER **)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                      *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
                      0LL,
                      (struct DXGADAPTER **)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  v20 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16, v18, v19);
    v42[3] = v13;
    v42[4] = v14;
    v42[5] = v20;
    WdLogEvent5_WdEvent(v42);
    goto LABEL_40;
  }
  v21 = *(struct DXGADAPTER **)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v21 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v44 + 24) = 25727LL;
    WdLogEvent5_WdAssertion(v44);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32), v21, 0LL);
  DXGADAPTER::ReleaseReference(v21);
  v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 32));
  if ( v26 >= 0 )
  {
    if ( !*((_QWORD *)v21 + 248) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v37 + 24) = 25741LL;
      WdLogEvent5_WdAssertion(v37);
    }
    if ( (unsigned int)v14 < *(_DWORD *)(*((_QWORD *)v21 + 248) + 104LL) )
    {
      if ( DmmIsSourceInActiveVidPnTopology((__int64)v21, v14) )
      {
        v29 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v21 + 248) + 136LL) + 1016 * v14 + 956);
        *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v29;
        if ( (_DWORD)v29 == -1 )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdEvent(1016 * v14, v29, v27, v28);
          v40[3] = v14;
          v40[4] = *(unsigned int *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          LODWORD(v20) = -1071774912;
          v40[5] = -1071774912LL;
          WdLogEvent5_WdEvent(v40);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
          DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL));
          v32 = qword_1C00467F0;
          v39 = (qword_1C00467F0 & 2) == 0;
          goto LABEL_32;
        }
        v30 = (ADAPTER_DISPLAY *)*((_QWORD *)v21 + 248);
        if ( *((_QWORD *)v21 + 249) )
          ScanLine = ADAPTER_DISPLAY::DdiGetScanLine(v30, (struct _DXGKARG_GETSCANLINE *)(v3 + 88));
        else
          ScanLine = ADAPTER_DISPLAY::DodGetScanLine(v30, v14, (struct _DXGKARG_GETSCANLINE *)(v3 + 88));
        LODWORD(v20) = ScanLine;
      }
      else
      {
        v46 = *((_QWORD *)v21 + 248);
        v47 = *(_QWORD *)(v46 + 136);
        v48 = *(_DWORD *)(v47 + 1016 * v14 + 964) + 20;
        if ( v48 <= *(_DWORD *)(v47 + 1016 * v14 + 904) )
        {
          *(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = 0;
        }
        else
        {
          v48 = 0;
          *(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = 1;
        }
        *(_DWORD *)(*(_QWORD *)(v46 + 136) + 1016 * v14 + 964) = v48;
        *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v48;
        LODWORD(v20) = 0;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL));
      goto LABEL_20;
    }
    v43 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    *(_QWORD *)(v43 + 24) = v14;
    LODWORD(v20) = -1073741811;
    *(_QWORD *)(v43 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v43);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
LABEL_40:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL));
    v39 = (qword_1C00467F0 & 2) == 0;
LABEL_32:
    if ( !v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v32, &EventProfilerExit, v33, 2034);
    return (unsigned int)v20;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v45, 2034);
  return (unsigned int)v26;
}
