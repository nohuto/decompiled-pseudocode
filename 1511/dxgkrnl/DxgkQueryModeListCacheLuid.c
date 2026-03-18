/*
 * XREFs of DxgkQueryModeListCacheLuid @ 0x1C00C5330
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C00071D4 (-QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 */

__int64 __fastcall DxgkQueryModeListCacheLuid(struct _LUID *a1, unsigned int a2, struct _LUID *a3)
{
  __int64 v3; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rcx
  DXGADAPTER *v9; // rdi
  __int64 PairingAdapters; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGADAPTER *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[64]; // [rsp+20h] [rbp-48h] BYREF
  struct DXGADAPTER *v26; // [rsp+70h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v20 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v20 + 24) = 25954LL;
LABEL_16:
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  if ( !a3 )
  {
    v20 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v20 + 24) = 25961LL;
    goto LABEL_16;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
  v9 = v7;
  if ( !v7 )
  {
    v20 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v20 + 24) = a1->HighPart;
    *(_QWORD *)(v20 + 32) = a1->LowPart;
    goto LABEL_16;
  }
  PairingAdapters = (int)DxgkpGetPairingAdapters(v7, v3, 0LL, &v26);
  DXGADAPTER::ReleaseReference(v9);
  if ( (int)PairingAdapters < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11, v13, v14);
    v21[3] = 0LL;
    v21[4] = v3;
    v21[5] = PairingAdapters;
    WdLogEvent5_WdEvent(v21);
  }
  else
  {
    v15 = v26;
    if ( !v26 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v22 + 24) = 26004LL;
      WdLogEvent5_WdAssertion(v22);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v15, 0LL);
    PairingAdapters = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25);
    DXGADAPTER::ReleaseReference(v15);
    if ( (int)PairingAdapters < 0 )
    {
      v23 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v23 + 24) = v15;
      *(_QWORD *)(v23 + 32) = PairingAdapters;
      WdLogEvent5_WdError(v23);
    }
    else
    {
      if ( !*((_QWORD *)v15 + 248) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v19 + 24) = 26026LL;
        WdLogEvent5_WdAssertion(v19);
      }
      v17 = *((_QWORD *)v15 + 248);
      if ( (unsigned int)v3 >= *(_DWORD *)(v17 + 104) )
      {
        v24 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v24 + 24) = v3;
        *(_QWORD *)(v24 + 32) = v15;
        WdLogEvent5_WdError(v24);
        LODWORD(PairingAdapters) = -1073741811;
      }
      else
      {
        LODWORD(PairingAdapters) = ADAPTER_DISPLAY::QueryModeListCacheLuid((DXGADAPTER **)v17, v3, a3);
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
  }
  return (unsigned int)PairingAdapters;
}
