/*
 * XREFs of DxgkFlushPresentHistory @ 0x1C00DB1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall DxgkFlushPresentHistory(__int64 a1)
{
  __int64 v1; // rsi
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGADAPTER *v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  DXGADAPTER *v22[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v23[10]; // [rsp+30h] [rbp-58h] BYREF
  struct DXGADAPTER *v24; // [rsp+98h] [rbp+10h] BYREF

  v1 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v3);
  v6 = 0;
  if ( ProcessDxgProcess )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v22, v1, ProcessDxgProcess, &v24);
    v11 = v24;
    if ( v24 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v24, 0LL);
      v12 = COREADAPTERACCESS::AcquireExclusive(v23);
      if ( v12 != -1073741130 )
      {
        if ( v12 < 0 )
        {
          v6 = v12;
        }
        else
        {
          v16 = *((_QWORD *)v11 + 267);
          if ( v16 )
          {
            ADAPTER_RENDER::FlushScheduler(v16, 1, 0xFFFFFFFF, 0);
          }
          else
          {
            v19 = WdLogNewEntry5_WdWarning(0LL, v13, v14, v15);
            v6 = -1073741637;
            *(_QWORD *)(v19 + 24) = v1;
            *(_QWORD *)(v19 + 32) = -1073741637LL;
            WdLogEvent5_WdWarning(v19);
          }
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
    }
    else
    {
      v21 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
      v6 = -1073741811;
      *(_QWORD *)(v21 + 24) = v1;
      *(_QWORD *)(v21 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v21);
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v22, v17);
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v5);
    v6 = -1073741811;
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
  }
  return v6;
}
