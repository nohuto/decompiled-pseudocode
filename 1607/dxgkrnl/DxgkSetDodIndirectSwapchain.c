/*
 * XREFs of DxgkSetDodIndirectSwapchain @ 0x1C0150830
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C01479BC (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 *     ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0147B60 (-DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkSetDodIndirectSwapchain(__int64 a1, __int64 a2, __int64 a3)
{
  struct DXGDEVICE **v3; // rbp
  _OWORD *v4; // rsi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const struct DXGDEVICE *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // r14d
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  ADAPTER_DISPLAY *v42; // rcx
  unsigned int v43; // eax
  unsigned int v44; // esi
  unsigned __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rax
  char v48; // [rsp+60h] [rbp+0h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (_OWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2114);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 6564LL;
    WdLogEvent5_WdError(v9);
LABEL_6:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v11, 2114);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *v4;
  *(_OWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v4[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24),
    ProcessDxgProcess,
    v3 + 1);
  v17 = *(const struct DXGDEVICE **)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = *(unsigned int *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24);
    WdLogEvent5_WdWarning(v18);
LABEL_14:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_6;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)(v3 + 2),
    *(_DWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
    (struct DXGPROCESS *)ProcessDxgProcess,
    v3 + 1);
  v23 = *(_QWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v23 )
  {
    v24 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    *(_QWORD *)(v24 + 24) = *(unsigned int *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    WdLogEvent5_WdWarning(v24);
LABEL_17:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v3 + 2, v25);
    goto LABEL_14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 64),
    *(struct DXGADAPTER *const *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    0LL);
  v30 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 8));
  if ( v30 >= 0 )
  {
    if ( *(_QWORD *)(v23 + 2136) || (*(_DWORD *)(v23 + 300) & 0x100) == 0 )
    {
      v47 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
      *(_QWORD *)(v47 + 24) = *(unsigned int *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      WdLogEvent5_WdWarning(v47);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 8));
      goto LABEL_17;
    }
    v33 = *(unsigned int *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(
           *(DXGADAPTER ***)(v23 + 2128),
           v17,
           *(_DWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28)) )
    {
      v42 = *(ADAPTER_DISPLAY **)(v23 + 2128);
      if ( *(_DWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) )
        v43 = ADAPTER_DISPLAY::DodTerminateIndirectOutput(v42, (unsigned int)v33, v36, v37);
      else
        v43 = ADAPTER_DISPLAY::DodSetIndirectSwapchain(
                v42,
                (unsigned int)v33,
                *(void **)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                v37);
      v44 = v43;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 8));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v3 + 2, v45);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(qword_1C0056840, &EventProfilerExit, v46, 2114);
      return v44;
    }
    else
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
      v38[3] = v17;
      v38[4] = v23;
      v38[5] = v33;
      WdLogEvent5_WdWarning(v38);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 8));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v3 + 2, v39);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v40, &EventProfilerExit, v41, 2114);
      return 3221225506LL;
    }
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 8));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v3 + 2, v31);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL));
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C0056840, &EventProfilerExit, v32, 2114);
    return (unsigned int)v30;
  }
}
