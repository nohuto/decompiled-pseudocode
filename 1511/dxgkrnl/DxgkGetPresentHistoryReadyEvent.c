/*
 * XREFs of DxgkGetPresentHistoryReadyEvent @ 0x1C00C2190
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00035C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0003BC0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003BEC (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C006AB00 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 */

__int64 __fastcall DxgkGetPresentHistoryReadyEvent(unsigned int a1, _QWORD *a2)
{
  __int64 v3; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGADAPTER *v10; // rdi
  int PairingAdapters; // eax
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // rbx
  struct _KTHREAD **v14; // rbx
  struct DXGPRESENTHISTORYTOKENQUEUE *PresentHistoryTokenQueue; // rax
  void *v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  DXGPUSHLOCK *v21[2]; // [rsp+20h] [rbp-30h] BYREF
  int v22; // [rsp+30h] [rbp-20h]
  _BYTE v23[24]; // [rsp+38h] [rbp-18h] BYREF
  struct DXGADAPTER *v24; // [rsp+80h] [rbp+30h] BYREF
  DXGADAPTER *v25; // [rsp+88h] [rbp+38h] BYREF

  v3 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v25, v3, Current, &v24);
    v10 = v24;
    if ( v24 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v24, 0, &v24, 0LL);
      v3 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v20 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v20 + 24) = v10;
        *(_QWORD *)(v20 + 32) = v3;
        WdLogEvent5_WdError(v20);
      }
      else
      {
        v13 = v24;
        COREACCESS::COREACCESS((COREACCESS *)v23, v24);
        DXGADAPTER::ReleaseReference(v13);
        v14 = (struct _KTHREAD **)*((_QWORD *)v13 + 249);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, v14 + 83);
        DXGPUSHLOCK::AcquireShared(v21[1]);
        v22 = 1;
        PresentHistoryTokenQueue = ADAPTER_RENDER::GetPresentHistoryTokenQueue((ADAPTER_RENDER *)v14, v21, 1);
        if ( PresentHistoryTokenQueue )
        {
          v16 = (void *)*((_QWORD *)PresentHistoryTokenQueue + 9);
          *a2 = v16;
          ObfReferenceObject(v16);
          LODWORD(v3) = 0;
        }
        else
        {
          *a2 = 0LL;
          LODWORD(v3) = -1073741801;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
        COREACCESS::~COREACCESS((COREACCESS *)v23);
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
      *(_QWORD *)(v19 + 24) = v3;
      LODWORD(v3) = -1073741811;
      *(_QWORD *)(v19 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v19);
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v25);
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v5);
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
  }
  return (unsigned int)v3;
}
