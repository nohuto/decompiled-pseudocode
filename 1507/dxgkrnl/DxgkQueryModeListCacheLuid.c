/*
 * XREFs of DxgkQueryModeListCacheLuid @ 0x1C00B0A80
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C0006360 (-QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 */

__int64 __fastcall DxgkQueryModeListCacheLuid(struct _LUID *a1, __int64 a2, struct _LUID *a3, __int64 a4)
{
  __int64 v4; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rcx
  DXGADAPTER *v10; // rdi
  __int64 PairingAdapters; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGADAPTER *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE v29[64]; // [rsp+20h] [rbp-48h] BYREF
  struct DXGADAPTER *v30; // [rsp+70h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  if ( !a1 )
  {
    v24 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v24 + 24) = 25437LL;
LABEL_16:
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
  if ( !a3 )
  {
    v24 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v24 + 24) = 25444LL;
    goto LABEL_16;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, (__int64)a3, a4);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
  v10 = v8;
  if ( !v8 )
  {
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = a1->HighPart;
    *(_QWORD *)(v24 + 32) = a1->LowPart;
    goto LABEL_16;
  }
  PairingAdapters = (int)DxgkpGetPairingAdapters(v8, (unsigned int)v4, 0LL, &v30);
  DXGADAPTER::ReleaseReference(v10);
  if ( (int)PairingAdapters < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
    v25[3] = 0LL;
    v25[4] = v4;
    v25[5] = PairingAdapters;
    WdLogEvent5_WdEvent(v25);
  }
  else
  {
    v16 = v30;
    if ( !v30 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v26 + 24) = 25487LL;
      WdLogEvent5_WdAssertion(v26);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v16, 0LL);
    PairingAdapters = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29);
    DXGADAPTER::ReleaseReference(v16);
    if ( (int)PairingAdapters < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v27 + 24) = v16;
      *(_QWORD *)(v27 + 32) = PairingAdapters;
      WdLogEvent5_WdError(v27);
    }
    else
    {
      if ( !*((_QWORD *)v16 + 247) )
      {
        v23 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        *(_QWORD *)(v23 + 24) = 25509LL;
        WdLogEvent5_WdAssertion(v23);
      }
      v21 = *((_QWORD *)v16 + 247);
      if ( (unsigned int)v4 >= *(_DWORD *)(v21 + 80) )
      {
        v28 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v28 + 24) = v4;
        *(_QWORD *)(v28 + 32) = v16;
        WdLogEvent5_WdError(v28);
        LODWORD(PairingAdapters) = -1073741811;
      }
      else
      {
        LODWORD(PairingAdapters) = ADAPTER_DISPLAY::QueryModeListCacheLuid((DXGADAPTER **)v21, v4, a3);
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
  }
  return (unsigned int)PairingAdapters;
}
