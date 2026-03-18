/*
 * XREFs of DxgkNeedToEnableCddPrimary @ 0x1C0129FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B014 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00B6BDC (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 */

char __fastcall DxgkNeedToEnableCddPrimary(struct DXGADAPTER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v5; // rsi
  __int64 v7; // rax
  int PairingAdapters; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  _QWORD *v14; // rax
  DXGADAPTER ***v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _BYTE v23[64]; // [rsp+20h] [rbp-48h] BYREF
  struct DXGADAPTER *v24; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 25211LL;
    WdLogEvent5_WdAssertion(v7);
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, (unsigned int)v5, 0LL, &v24);
  v13 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v16 = (DXGADAPTER ***)v24;
    if ( !v24 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v17 + 24) = 25238LL;
      WdLogEvent5_WdAssertion(v17);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, (struct DXGADAPTER *const)v16, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23) >= 0 )
    {
      if ( !v16[247] )
      {
        v22 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        *(_QWORD *)(v22 + 24) = 25252LL;
        WdLogEvent5_WdAssertion(v22);
      }
      if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(v16[247], (unsigned int)v5, v20, v21)
        && !ADAPTER_DISPLAY::GetVidPnSourceOwner(v16[247], v5) )
      {
        v4 = 1;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
    return v4;
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
    v14[3] = a1;
    v14[4] = v5;
    v14[5] = v13;
    WdLogEvent5_WdEvent(v14);
    return 0;
  }
}
