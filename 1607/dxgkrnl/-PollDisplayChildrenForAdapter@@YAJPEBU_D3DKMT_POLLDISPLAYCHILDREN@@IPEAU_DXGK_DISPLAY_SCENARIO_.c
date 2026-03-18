/*
 * XREFs of ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014DE48
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C014F880 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00080C8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00D1AE8 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C00D1B18 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C0193460 (DpiPollDisplayChildren.c)
 *     DmmEnableModeResetOnMonitorEvent @ 0x1C01A378C (DmmEnableModeResetOnMonitorEvent.c)
 */

__int64 __fastcall PollDisplayChildrenForAdapter(
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a1,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DXGADAPTER *QuadPart; // rsi
  _QWORD *v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rbx
  void *v22; // r15
  union _LARGE_INTEGER v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdi
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  DXGADAPTER *v52[2]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v53[10]; // [rsp+48h] [rbp-19h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
      (DXGADAPTERBYHANDLE *)v52,
      a1->hAdapter,
      ProcessDxgProcess,
      (struct DXGADAPTER **)&Timeout);
    QuadPart = (DXGADAPTER *)Timeout.QuadPart;
    if ( !Timeout.QuadPart )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      v11 = -1073741811;
      v19[3] = -1073741811LL;
      v19[4] = v10;
      v19[5] = a1->hAdapter;
      WdLogEvent5_WdWarning(v19);
LABEL_35:
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v52, v20);
      return v11;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v53, (struct DXGADAPTER *const)Timeout.QuadPart, 0LL);
    LODWORD(v21) = COREADAPTERACCESS::AcquireExclusive(v53);
    if ( (int)v21 < 0 )
    {
LABEL_34:
      v11 = v21;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
      goto LABEL_35;
    }
    v22 = (void *)*((_QWORD *)QuadPart + 24);
    v23.QuadPart = 0LL;
    Timeout.QuadPart = 0LL;
    ObfReferenceObject(v22);
    if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
    {
      v26 = MonitorAcquireMonitorPendingEvent(QuadPart, &Timeout, v24, v25);
      v23 = Timeout;
      v21 = v26;
      if ( v26 >= 0 )
      {
LABEL_12:
        if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
        {
          v30 = DmmEnableModeResetOnMonitorEvent(QuadPart, 0LL);
          v21 = v30;
          if ( v30 < 0 )
          {
            v32 = WdLogNewEntry5_WdError(v31);
            *(_QWORD *)(v32 + 24) = v21;
            WdLogEvent5_WdError(v32);
          }
        }
LABEL_15:
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v53);
        if ( (int)v21 < 0 )
        {
          ObfDereferenceObject(v22);
          if ( v23.QuadPart )
            MonitorReleaseMonitorPendingEvent((struct _MONITOR_PENDING_EVENT *)v23.QuadPart, v33, v34, v35);
          goto LABEL_34;
        }
        LODWORD(v21) = DpiPollDisplayChildren(v22, a2, a3);
        ObfDereferenceObject(v22);
        if ( !v23.QuadPart )
        {
LABEL_26:
          if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
          {
            v43 = COREADAPTERACCESS::AcquireExclusive(v53);
            v46 = v43;
            if ( v43 < 0 )
            {
              v50 = WdLogNewEntry5_WdError(v45);
              *(_QWORD *)(v50 + 24) = v46;
              WdLogEvent5_WdError(v50);
            }
            else
            {
              LOBYTE(v44) = 1;
              v47 = DmmEnableModeResetOnMonitorEvent(QuadPart, v44);
              v46 = v47;
              if ( v47 < 0 )
              {
                v49 = WdLogNewEntry5_WdError(v48);
                *(_QWORD *)(v49 + 24) = v46;
                WdLogEvent5_WdError(v49);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v53);
            }
            if ( !(_DWORD)v21 )
              LODWORD(v21) = v46;
          }
          goto LABEL_34;
        }
        if ( (int)v21 >= 0 )
        {
          Timeout.QuadPart = -10000000LL;
          PreviousMode = ExGetPreviousMode();
          v40 = KeWaitForSingleObject((PVOID)(v23.QuadPart + 24), UserRequest, PreviousMode, 0, &Timeout);
          v21 = v40;
          if ( v40 == 258 )
          {
            v42 = WdLogNewEntry5_WdError(v41);
            *(_QWORD *)(v42 + 24) = 1371LL;
LABEL_24:
            WdLogEvent5_WdError(v42);
            goto LABEL_25;
          }
          if ( v40 < 0 )
          {
            v42 = WdLogNewEntry5_WdError(v41);
            *(_QWORD *)(v42 + 24) = v21;
            goto LABEL_24;
          }
        }
LABEL_25:
        MonitorReleaseMonitorPendingEvent((struct _MONITOR_PENDING_EVENT *)v23.QuadPart, v36, v37, v38);
        goto LABEL_26;
      }
      if ( Timeout.QuadPart )
      {
        v28 = WdLogNewEntry5_WdAssertion(v27);
        *(_QWORD *)(v28 + 24) = 1306LL;
        WdLogEvent5_WdAssertion(v28);
      }
      v29 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v29 + 24) = v21;
      WdLogEvent5_WdError(v29);
    }
    if ( (int)v21 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
  v11 = -1073741811;
  v12 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v12 + 24) = -1073741811LL;
  *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v13);
  WdLogEvent5_WdError(v12);
  return v11;
}
