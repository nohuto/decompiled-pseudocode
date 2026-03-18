/*
 * XREFs of ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00D19BC
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00D1310 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00080C8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00D1AE8 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C00D1B18 (MonitorAcquireMonitorPendingEvent.c)
 */

__int64 __fastcall DxgkWaitForMonitorEventDoneInternal(struct DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  void *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[88]; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+98h] [rbp+10h] BYREF

  if ( this )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, this, 0LL);
    if ( *(_QWORD *)(v6 + 2128) )
    {
      v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24);
      if ( v7 < 0 )
      {
        LODWORD(v17) = v7;
      }
      else
      {
        v8 = (void *)*((_QWORD *)this + 24);
        ObfReferenceObject(v8);
        v9 = (int)MonitorAcquireMonitorPendingEvent(this);
        ObfDereferenceObject(v8);
        if ( (int)v9 < 0 )
        {
          v21 = WdLogNewEntry5_WdError(v10);
          *(_QWORD *)(v21 + 24) = v9;
          WdLogEvent5_WdError(v21);
          LODWORD(v17) = v9;
        }
        else
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v24);
          Timeout.QuadPart = -1000000LL;
          PreviousMode = ExGetPreviousMode();
          v12 = KeWaitForSingleObject((PVOID)0x18, UserRequest, PreviousMode, 0, &Timeout);
          v17 = v12;
          if ( v12 == 258 )
          {
            v22 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
            *(_QWORD *)(v22 + 24) = 1537LL;
            WdLogEvent5_WdWarning(v22);
          }
          else if ( v12 < 0 )
          {
            v23 = WdLogNewEntry5_WdError(v14);
            *(_QWORD *)(v23 + 24) = v17;
            WdLogEvent5_WdError(v23);
          }
          MonitorReleaseMonitorPendingEvent(0LL);
        }
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v5);
      LODWORD(v17) = -1073741637;
      *(_QWORD *)(v19 + 24) = this;
      *(_QWORD *)(v19 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v19);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(0LL, a2, a3, a4);
    LODWORD(v17) = -1073741811;
    *(_QWORD *)(v20 + 32) = 0LL;
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
  }
  return (unsigned int)v17;
}
