/*
 * XREFs of ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C012D090
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C0131470 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00C0BC4 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C00C0BF4 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C016B6D8 (DpiPollDisplayChildren.c)
 *     DmmEnableModeResetOnMonitorEvent @ 0x1C0179E80 (DmmEnableModeResetOnMonitorEvent.c)
 */

__int64 __fastcall PollDisplayChildrenForAdapter(const struct _D3DKMT_POLLDISPLAYCHILDREN *a1, unsigned int a2)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  DXGADAPTER *QuadPart; // r14
  _QWORD *v14; // rax
  __int64 v15; // rbx
  void *v16; // r15
  union _LARGE_INTEGER v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD v46[8]; // [rsp+30h] [rbp-40h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+B0h] [rbp+40h] BYREF
  DXGADAPTER *v48; // [rsp+B8h] [rbp+48h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
      (DXGADAPTERBYHANDLE *)&v48,
      a1->hAdapter,
      Current,
      (struct DXGADAPTER **)&Timeout);
    QuadPart = (DXGADAPTER *)Timeout.QuadPart;
    if ( !Timeout.QuadPart )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      v7 = -1073741811;
      v14[3] = -1073741811LL;
      v14[4] = v6;
      v14[5] = a1->hAdapter;
      WdLogEvent5_WdWarning(v14);
LABEL_35:
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v48);
      return v7;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v46, (struct DXGADAPTER *const)Timeout.QuadPart, 0LL);
    LODWORD(v15) = COREADAPTERACCESS::AcquireExclusive(v46);
    if ( (int)v15 < 0 )
    {
LABEL_34:
      v7 = v15;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
      goto LABEL_35;
    }
    v16 = (void *)*((_QWORD *)QuadPart + 22);
    v17.QuadPart = 0LL;
    Timeout.QuadPart = 0LL;
    ObfReferenceObject(v16);
    if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
    {
      v20 = MonitorAcquireMonitorPendingEvent(QuadPart, &Timeout, v18, v19);
      v17 = Timeout;
      v15 = v20;
      if ( v20 >= 0 )
      {
LABEL_12:
        if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
        {
          v24 = DmmEnableModeResetOnMonitorEvent(QuadPart, 0LL);
          v15 = v24;
          if ( v24 < 0 )
          {
            v26 = WdLogNewEntry5_WdError(v25);
            *(_QWORD *)(v26 + 24) = v15;
            WdLogEvent5_WdError(v26);
          }
        }
LABEL_15:
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v46);
        if ( (int)v15 < 0 )
        {
          ObfDereferenceObject(v16);
          if ( v17.QuadPart )
            MonitorReleaseMonitorPendingEvent((struct _MONITOR_PENDING_EVENT *)v17.QuadPart, v27, v28, v29);
          goto LABEL_34;
        }
        LODWORD(v15) = DpiPollDisplayChildren(v16, a2);
        ObfDereferenceObject(v16);
        if ( !v17.QuadPart )
        {
LABEL_26:
          if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
          {
            v37 = COREADAPTERACCESS::AcquireExclusive(v46);
            v40 = v37;
            if ( v37 < 0 )
            {
              v44 = WdLogNewEntry5_WdError(v39);
              *(_QWORD *)(v44 + 24) = v40;
              WdLogEvent5_WdError(v44);
            }
            else
            {
              LOBYTE(v38) = 1;
              v41 = DmmEnableModeResetOnMonitorEvent(QuadPart, v38);
              v40 = v41;
              if ( v41 < 0 )
              {
                v43 = WdLogNewEntry5_WdError(v42);
                *(_QWORD *)(v43 + 24) = v40;
                WdLogEvent5_WdError(v43);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v46);
            }
            if ( !(_DWORD)v15 )
              LODWORD(v15) = v40;
          }
          goto LABEL_34;
        }
        if ( (int)v15 >= 0 )
        {
          Timeout.QuadPart = -10000000LL;
          PreviousMode = ExGetPreviousMode();
          v34 = KeWaitForSingleObject((PVOID)(v17.QuadPart + 24), UserRequest, PreviousMode, 0, &Timeout);
          v15 = v34;
          if ( v34 == 258 )
          {
            v36 = WdLogNewEntry5_WdError(v35);
            *(_QWORD *)(v36 + 24) = 4831LL;
LABEL_24:
            WdLogEvent5_WdError(v36);
            goto LABEL_25;
          }
          if ( v34 < 0 )
          {
            v36 = WdLogNewEntry5_WdError(v35);
            *(_QWORD *)(v36 + 24) = v15;
            goto LABEL_24;
          }
        }
LABEL_25:
        MonitorReleaseMonitorPendingEvent((struct _MONITOR_PENDING_EVENT *)v17.QuadPart, v30, v31, v32);
        goto LABEL_26;
      }
      if ( Timeout.QuadPart )
      {
        v22 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v22 + 24) = 4766LL;
        WdLogEvent5_WdAssertion(v22);
      }
      v23 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v23 + 24) = v15;
      WdLogEvent5_WdError(v23);
    }
    if ( (int)v15 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
  v7 = -1073741811;
  v8 = WdLogNewEntry5_WdError(v5);
  *(_QWORD *)(v8 + 24) = -1073741811LL;
  *(_QWORD *)(v8 + 32) = PsGetCurrentProcess();
  WdLogEvent5_WdError(v8);
  return v7;
}
