/*
 * XREFs of DxgkQueryModeListCacheLuid @ 0x1C00DA500
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C0006568 (-QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryModeListCacheLuid(struct _LUID *a1, unsigned int a2, struct _LUID *a3)
{
  __int64 v3; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  struct DXGADAPTER *v8; // rdi
  __int64 PairingAdapters; // rbx
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE v21[104]; // [rsp+30h] [rbp-68h] BYREF
  struct DXGADAPTER *v22; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v16 + 24) = 5452LL;
LABEL_16:
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  if ( !a3 )
  {
    v16 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v16 + 24) = 5459LL;
    goto LABEL_16;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, (unsigned __int64 *)&v22);
  if ( !v8 )
  {
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = a1->HighPart;
    *(_QWORD *)(v16 + 32) = a1->LowPart;
    goto LABEL_16;
  }
  PairingAdapters = (int)DxgkpGetPairingAdapters(v8, v3, 0LL, 0LL, &v22, &v23);
  DXGADAPTER::ReleaseReference(v8);
  if ( (int)PairingAdapters < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v10);
    v17[3] = 0LL;
    v17[4] = v3;
    v17[5] = PairingAdapters;
    WdLogEvent5_WdEvent(v17);
  }
  else
  {
    v11 = v22;
    if ( !v22 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v18 + 24) = 5506LL;
      WdLogEvent5_WdAssertion(v18);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v11, 0LL);
    PairingAdapters = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21);
    DXGADAPTER::ReleaseReference(v11);
    if ( (int)PairingAdapters < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v19 + 24) = v11;
      *(_QWORD *)(v19 + 32) = PairingAdapters;
      WdLogEvent5_WdError(v19);
    }
    else
    {
      if ( !*((_QWORD *)v11 + 266) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v15 + 24) = 5528LL;
        WdLogEvent5_WdAssertion(v15);
      }
      v13 = *((_QWORD *)v11 + 266);
      if ( (unsigned int)v3 >= *(_DWORD *)(v13 + 80) )
      {
        v20 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v20 + 24) = v3;
        *(_QWORD *)(v20 + 32) = v11;
        WdLogEvent5_WdError(v20);
        LODWORD(PairingAdapters) = -1073741811;
      }
      else
      {
        LODWORD(PairingAdapters) = ADAPTER_DISPLAY::QueryModeListCacheLuid((DXGADAPTER **)v13, v3, a3);
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
  }
  return (unsigned int)PairingAdapters;
}
