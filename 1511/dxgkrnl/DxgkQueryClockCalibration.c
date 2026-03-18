/*
 * XREFs of DxgkQueryClockCalibration @ 0x1C0131630
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
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C001984C (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 */

__int64 __fastcall DxgkQueryClockCalibration(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // r15
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  ULONG64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  bool v23; // zf
  struct DXGADAPTER *v24; // rsi
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  ADAPTER_RENDER *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  char v46; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2125);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 31517LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v8, &EventProfilerExit, v9, 2125);
    return 3221225485LL;
  }
  v11 = v4;
  if ( v4 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_OWORD *)v11;
  *(_OWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_OWORD *)(v11 + 16);
  *(_DWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_DWORD *)(v11 + 32);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
    Current,
    (struct DXGADAPTER **)(v3 + 8));
  v13 = *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = Current;
    *(_QWORD *)(v14 + 32) = *(unsigned int *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
    WdLogEvent5_WdError(v14);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_6;
  }
  LODWORD(v17) = DxgkpGetPairingAdapters(
                   *(struct DXGADAPTER **)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                   0,
                   (struct DXGADAPTER **)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                   0LL);
  if ( (int)v17 < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v16, v15, v18, v19);
    *(_QWORD *)(v20 + 24) = v13;
    WdLogEvent5_WdWarning(v20);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL));
    v22 = qword_1C00467F0;
    v23 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_16;
  }
  v24 = *(struct DXGADAPTER **)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 16), v24, 0LL);
  v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 16));
  DXGADAPTER::ReleaseReference(v24);
  if ( v25 >= 0 )
  {
    v33 = (ADAPTER_RENDER *)*((_QWORD *)v24 + 249);
    v34 = *((_QWORD *)v33 + 2);
    if ( *(_QWORD *)(v34 + 768) && *(int *)(v34 + 1656) >= 0x2000 )
    {
      v35 = ADAPTER_RENDER::DdiCalibrateGpuClock(
              v33,
              *(_DWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C),
              *(unsigned int *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
              (struct _DXGK_GPUCLOCKDATA *)(v3 + 84));
      v17 = v35;
      if ( v35 < 0 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
        v40[3] = v17;
        v40[4] = *(unsigned int *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C);
        v40[5] = *(unsigned int *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
        WdLogEvent5_WdWarning(v40);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 16));
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL));
        v23 = (qword_1C00467F0 & 2) == 0;
LABEL_16:
        if ( !v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v22, &EventProfilerExit, v21, 2125);
        return (unsigned int)v17;
      }
      if ( v4 >= MmUserProbeAddress )
        v4 = MmUserProbeAddress;
      *(_OWORD *)v4 = *(_OWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
      *(_OWORD *)(v4 + 16) = *(_OWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
      *(_DWORD *)(v4 + 32) = *(_DWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 16));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v41, &EventProfilerExit, v42, 2125);
      return 0LL;
    }
    else
    {
      v43 = WdLogNewEntry5_WdError(v33);
      *(_QWORD *)(v43 + 24) = 31578LL;
      WdLogEvent5_WdError(v43);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 16));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v44, &EventProfilerExit, v45, 2125);
      return 3221225473LL;
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    *(_QWORD *)(v30 + 24) = v24;
    WdLogEvent5_WdWarning(v30);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 16));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v31, &EventProfilerExit, v32, 2125);
    return (unsigned int)v25;
  }
}
