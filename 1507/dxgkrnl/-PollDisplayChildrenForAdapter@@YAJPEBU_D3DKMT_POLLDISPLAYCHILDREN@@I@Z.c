/*
 * XREFs of ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C0126EB8
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C012AED0 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0001AF8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00A7750 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C00A7780 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C0167108 (DpiPollDisplayChildren.c)
 *     DmmEnableModeResetOnMonitorEvent @ 0x1C01758E8 (DmmEnableModeResetOnMonitorEvent.c)
 */

__int64 __fastcall PollDisplayChildrenForAdapter(const struct _D3DKMT_POLLDISPLAYCHILDREN *a1, unsigned int a2)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DXGADAPTER *QuadPart; // r14
  _QWORD *v15; // rax
  __int64 v16; // rbx
  void *v17; // r15
  union _LARGE_INTEGER v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdi
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD v50[8]; // [rsp+30h] [rbp-40h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+B0h] [rbp+40h] BYREF
  DXGADAPTER *v52; // [rsp+B8h] [rbp+48h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1);
  v6 = Current;
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
      (DXGADAPTERBYHANDLE *)&v52,
      a1->hAdapter,
      Current,
      (struct DXGADAPTER **)&Timeout);
    QuadPart = (DXGADAPTER *)Timeout.QuadPart;
    if ( !Timeout.QuadPart )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      v7 = -1073741811;
      v15[3] = -1073741811LL;
      v15[4] = v6;
      v15[5] = a1->hAdapter;
      WdLogEvent5_WdWarning(v15);
LABEL_35:
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v52);
      return v7;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v50, (struct DXGADAPTER *const)Timeout.QuadPart, 0LL);
    LODWORD(v16) = COREADAPTERACCESS::AcquireExclusive(v50);
    if ( (int)v16 < 0 )
    {
LABEL_34:
      v7 = v16;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
      goto LABEL_35;
    }
    v17 = (void *)*((_QWORD *)QuadPart + 22);
    v18.QuadPart = 0LL;
    Timeout.QuadPart = 0LL;
    ObfReferenceObject(v17);
    if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
    {
      v21 = MonitorAcquireMonitorPendingEvent(QuadPart, &Timeout, v19, v20);
      v18 = Timeout;
      v16 = v21;
      if ( v21 >= 0 )
      {
LABEL_12:
        if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
        {
          v28 = DmmEnableModeResetOnMonitorEvent(QuadPart, 0LL);
          v16 = v28;
          if ( v28 < 0 )
          {
            v30 = WdLogNewEntry5_WdError(v29);
            *(_QWORD *)(v30 + 24) = v16;
            WdLogEvent5_WdError(v30);
          }
        }
LABEL_15:
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v50);
        if ( (int)v16 < 0 )
        {
          ObfDereferenceObject(v17);
          if ( v18.QuadPart )
            MonitorReleaseMonitorPendingEvent((struct _MONITOR_PENDING_EVENT *)v18.QuadPart, v31, v32, v33);
          goto LABEL_34;
        }
        LODWORD(v16) = DpiPollDisplayChildren(v17, a2);
        ObfDereferenceObject(v17);
        if ( !v18.QuadPart )
        {
LABEL_26:
          if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
          {
            v41 = COREADAPTERACCESS::AcquireExclusive(v50);
            v44 = v41;
            if ( v41 < 0 )
            {
              v48 = WdLogNewEntry5_WdError(v43);
              *(_QWORD *)(v48 + 24) = v44;
              WdLogEvent5_WdError(v48);
            }
            else
            {
              LOBYTE(v42) = 1;
              v45 = DmmEnableModeResetOnMonitorEvent(QuadPart, v42);
              v44 = v45;
              if ( v45 < 0 )
              {
                v47 = WdLogNewEntry5_WdError(v46);
                *(_QWORD *)(v47 + 24) = v44;
                WdLogEvent5_WdError(v47);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v50);
            }
            if ( !(_DWORD)v16 )
              LODWORD(v16) = v44;
          }
          goto LABEL_34;
        }
        if ( (int)v16 >= 0 )
        {
          Timeout.QuadPart = -10000000LL;
          PreviousMode = ExGetPreviousMode();
          v38 = KeWaitForSingleObject((PVOID)(v18.QuadPart + 24), UserRequest, PreviousMode, 0, &Timeout);
          v16 = v38;
          if ( v38 == 258 )
          {
            v40 = WdLogNewEntry5_WdError(v39);
            *(_QWORD *)(v40 + 24) = 4722LL;
LABEL_24:
            WdLogEvent5_WdError(v40);
            goto LABEL_25;
          }
          if ( v38 < 0 )
          {
            v40 = WdLogNewEntry5_WdError(v39);
            *(_QWORD *)(v40 + 24) = v16;
            goto LABEL_24;
          }
        }
LABEL_25:
        MonitorReleaseMonitorPendingEvent((struct _MONITOR_PENDING_EVENT *)v18.QuadPart, v34, v35, v36);
        goto LABEL_26;
      }
      if ( Timeout.QuadPart )
      {
        v26 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
        *(_QWORD *)(v26 + 24) = 4657LL;
        WdLogEvent5_WdAssertion(v26);
      }
      v27 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v27 + 24) = v16;
      WdLogEvent5_WdError(v27);
    }
    if ( (int)v16 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
  v7 = -1073741811;
  v8 = WdLogNewEntry5_WdError(v5);
  *(_QWORD *)(v8 + 24) = -1073741811LL;
  *(_QWORD *)(v8 + 32) = PsGetCurrentProcess(v9);
  WdLogEvent5_WdError(v8);
  return v7;
}
