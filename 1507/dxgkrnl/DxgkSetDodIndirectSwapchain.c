/*
 * XREFs of DxgkSetDodIndirectSwapchain @ 0x1C012BE70
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000682C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00BE440 (DxgkMiracastStopAllMiracastSessions.c)
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C0123F3C (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 */

__int64 __fastcall DxgkSetDodIndirectSwapchain(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // rsi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const struct DXGDEVICE *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // r14d
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // esi
  __int64 v41; // r8
  struct DXGDEVICE *v42; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2114);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 30596LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v8, &EventProfilerExit, v9, 2114);
    return 3221225485LL;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)v4;
  *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v4 + 16);
  v11 = *(unsigned int *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
  if ( !(_DWORD)v11
    && *(_DWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) == -1
    && !*(_DWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)
    && !*(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
  {
    DxgkMiracastStopAllMiracastSessions(0, 0LL, 0x90u);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v12, &EventProfilerExit, v13, 2114);
    return 0LL;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 8),
    v11,
    Current,
    (struct DXGDEVICE **)((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL));
  v18 = *(const struct DXGDEVICE **)v3;
  if ( !*(_QWORD *)v3 )
  {
    v19 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v19 + 24) = v11;
    WdLogEvent5_WdWarning(v19);
LABEL_22:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    goto LABEL_6;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    Current,
    (struct DXGADAPTER **)(v3 + 40));
  v24 = *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  if ( !v24 )
  {
    v25 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    *(_QWORD *)(v25 + 24) = *(unsigned int *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    WdLogEvent5_WdWarning(v25);
LABEL_25:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_22;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 48),
    *(struct DXGADAPTER *const *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
    0LL);
  v30 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 48));
  if ( v30 >= 0 )
  {
    if ( *(_QWORD *)(v24 + 1984) )
    {
      v32 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
      *(_QWORD *)(v32 + 24) = *(unsigned int *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      WdLogEvent5_WdWarning(v32);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 48));
      goto LABEL_25;
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(
           *(DXGADAPTER ***)(v24 + 1976),
           v18,
           *(_DWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18)) )
    {
      v40 = ADAPTER_DISPLAY::DodSetIndirectSwapchain(
              *(ADAPTER_DISPLAY **)(v24 + 1976),
              *(unsigned int *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
              *(void **)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
              v36);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 48));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(qword_1C00467F0, &EventProfilerExit, v41, 2114);
      return v40;
    }
    else
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
      v37[3] = v18;
      v37[4] = v24;
      v37[5] = *(unsigned int *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      WdLogEvent5_WdWarning(v37);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 48));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v38, &EventProfilerExit, v39, 2114);
      return 3221225506LL;
    }
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 48));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v31, 2114);
    return (unsigned int)v30;
  }
}
