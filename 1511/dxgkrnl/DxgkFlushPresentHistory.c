/*
 * XREFs of DxgkFlushPresentHistory @ 0x1C00C64C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkFlushPresentHistory(unsigned int a1)
{
  __int64 v1; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGADAPTER *v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v19[8]; // [rsp+20h] [rbp-48h] BYREF
  struct DXGADAPTER *v20; // [rsp+78h] [rbp+10h] BYREF
  DXGADAPTER *v21; // [rsp+80h] [rbp+18h] BYREF

  v1 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v4 = 0;
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v21, v1, Current, &v20);
    v9 = v20;
    if ( v20 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v20, 0LL);
      v10 = COREADAPTERACCESS::AcquireExclusive(v19);
      if ( v10 != -1073741130 )
      {
        if ( v10 < 0 )
        {
          v4 = v10;
        }
        else
        {
          v14 = *((_QWORD *)v9 + 249);
          if ( v14 )
          {
            ADAPTER_RENDER::FlushScheduler(v14, 1, 0xFFFFFFFF, 0);
          }
          else
          {
            v16 = WdLogNewEntry5_WdWarning(0LL, v11, v12, v13);
            v4 = -1073741637;
            *(_QWORD *)(v16 + 24) = v1;
            *(_QWORD *)(v16 + 32) = -1073741637LL;
            WdLogEvent5_WdWarning(v16);
          }
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
      v4 = -1073741811;
      *(_QWORD *)(v18 + 24) = v1;
      *(_QWORD *)(v18 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v18);
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v21);
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v3);
    v4 = -1073741811;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
  }
  return v4;
}
