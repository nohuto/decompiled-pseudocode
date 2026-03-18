/*
 * XREFs of DxgkGetPresentHistoryReadyEvent @ 0x1C00AE490
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0001E30 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001E60 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C0094220 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 */

__int64 __fastcall DxgkGetPresentHistoryReadyEvent(__int64 a1, _QWORD *a2)
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
  __int64 v14; // rbx
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

  v3 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v25, v3, Current, &v24);
    v10 = v24;
    if ( v24 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v24, 0LL, &v24, 0LL);
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
        v14 = *((_QWORD *)v13 + 248);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)(v14 + 592));
        DXGPUSHLOCK::AcquireShared(v21[1]);
        v22 = 1;
        PresentHistoryTokenQueue = ADAPTER_RENDER::GetPresentHistoryTokenQueue((void **)v14, v21, 1);
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
