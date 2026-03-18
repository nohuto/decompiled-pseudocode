/*
 * XREFs of ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00C0A9C
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00C0910 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00C0BC4 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C00C0BF4 (MonitorAcquireMonitorPendingEvent.c)
 */

__int64 __fastcall DxgkWaitForMonitorEventDoneInternal(struct DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  int v6; // eax
  void *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[72]; // [rsp+30h] [rbp-48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+88h] [rbp+10h] BYREF

  if ( this )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, this, 0LL);
    if ( *((_QWORD *)this + 248) )
    {
      v6 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23);
      if ( v6 < 0 )
      {
        LODWORD(v16) = v6;
      }
      else
      {
        v7 = (void *)*((_QWORD *)this + 22);
        ObfReferenceObject(v7);
        v8 = (int)MonitorAcquireMonitorPendingEvent(this);
        ObfDereferenceObject(v7);
        if ( (int)v8 < 0 )
        {
          v20 = WdLogNewEntry5_WdError(v9);
          *(_QWORD *)(v20 + 24) = v8;
          WdLogEvent5_WdError(v20);
          LODWORD(v16) = v8;
        }
        else
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v23);
          Timeout.QuadPart = -1000000LL;
          PreviousMode = ExGetPreviousMode();
          v11 = KeWaitForSingleObject((PVOID)0x18, UserRequest, PreviousMode, 0, &Timeout);
          v16 = v11;
          if ( v11 == 258 )
          {
            v21 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
            *(_QWORD *)(v21 + 24) = 4997LL;
            WdLogEvent5_WdWarning(v21);
          }
          else if ( v11 < 0 )
          {
            v22 = WdLogNewEntry5_WdError(v13);
            *(_QWORD *)(v22 + 24) = v16;
            WdLogEvent5_WdError(v22);
          }
          MonitorReleaseMonitorPendingEvent(0LL);
        }
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v5);
      LODWORD(v16) = -1073741637;
      *(_QWORD *)(v18 + 24) = this;
      *(_QWORD *)(v18 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v18);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(0LL, a2, a3, a4);
    LODWORD(v16) = -1073741811;
    *(_QWORD *)(v19 + 32) = 0LL;
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
  }
  return (unsigned int)v16;
}
