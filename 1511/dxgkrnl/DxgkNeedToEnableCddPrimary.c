/*
 * XREFs of DxgkNeedToEnableCddPrimary @ 0x1C0130680
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0007E78 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C009B8E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 */

char __fastcall DxgkNeedToEnableCddPrimary(struct DXGADAPTER *a1, unsigned int a2)
{
  char v2; // bl
  __int64 v3; // rsi
  __int64 v5; // rax
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  _QWORD *v12; // rax
  DXGADAPTER ***v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  _BYTE v18[64]; // [rsp+20h] [rbp-48h] BYREF
  struct DXGADAPTER *v19; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a2;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v5 + 24) = 25837LL;
    WdLogEvent5_WdAssertion(v5);
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, v3, 0LL, &v19);
  v11 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v14 = (DXGADAPTER ***)v19;
    if ( !v19 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v15 + 24) = 25864LL;
      WdLogEvent5_WdAssertion(v15);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, (struct DXGADAPTER *const)v14, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v14);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18) >= 0 )
    {
      if ( !v14[248] )
      {
        v17 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v17 + 24) = 25878LL;
        WdLogEvent5_WdAssertion(v17);
      }
      if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(v14[248], v3)
        && !ADAPTER_DISPLAY::GetVidPnSourceOwner(v14[248], v3) )
      {
        v2 = 1;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
    return v2;
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    v12[3] = a1;
    v12[4] = v3;
    v12[5] = v11;
    WdLogEvent5_WdEvent(v12);
    return 0;
  }
}
