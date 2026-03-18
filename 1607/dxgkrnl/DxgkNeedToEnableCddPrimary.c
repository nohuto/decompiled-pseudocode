/*
 * XREFs of DxgkNeedToEnableCddPrimary @ 0x1C014EDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0006B7C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00884F8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 */

char __fastcall DxgkNeedToEnableCddPrimary(struct DXGADAPTER *a1, unsigned int a2)
{
  char v2; // bl
  __int64 v3; // rsi
  __int64 v5; // rax
  int PairingAdapters; // eax
  __int64 v7; // rcx
  __int64 v8; // rbp
  _QWORD *v9; // rax
  DXGADAPTER ***v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _BYTE v15[104]; // [rsp+30h] [rbp-68h] BYREF
  struct DXGADAPTER *v16; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+B0h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v5 + 24) = 5332LL;
    WdLogEvent5_WdAssertion(v5);
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, v3, 0LL, 0LL, &v16, &v17);
  v8 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v11 = (DXGADAPTER ***)v16;
    if ( !v16 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v12 + 24) = 5362LL;
      WdLogEvent5_WdAssertion(v12);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, (struct DXGADAPTER *const)v11, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v11);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v15) >= 0 )
    {
      if ( !v11[266] )
      {
        v14 = WdLogNewEntry5_WdAssertion(v13);
        *(_QWORD *)(v14 + 24) = 5376LL;
        WdLogEvent5_WdAssertion(v14);
      }
      if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(v11[266], v3, 0)
        && !ADAPTER_DISPLAY::GetVidPnSourceOwner(v11[266], v3) )
      {
        v2 = 1;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15);
    return v2;
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdEvent(v7);
    v9[3] = a1;
    v9[4] = v3;
    v9[5] = v8;
    WdLogEvent5_WdEvent(v9);
    return 0;
  }
}
