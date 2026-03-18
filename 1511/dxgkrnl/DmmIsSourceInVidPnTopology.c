/*
 * XREFs of DmmIsSourceInVidPnTopology @ 0x1C017B380
 * Callers:
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C0125730 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0141F18 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EC4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 */

__int64 __fastcall DmmIsSourceInVidPnTopology(__int64 a1, int a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  DMMVIDPNTOPOLOGY *v11; // rbx
  __int64 v12; // rax

  if ( a3 )
  {
    *a3 = 0;
    v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a1);
    if ( v8 )
    {
      v11 = (DMMVIDPNTOPOLOGY *)(v8 + 96);
      if ( v8 == -96 )
      {
        v12 = WdLogNewEntry5_WdAssertion(v9);
        WdLogEvent5_WdAssertion(v12);
      }
      *a3 = DMMVIDPNTOPOLOGY::IsSourceInTopology(v11, a2);
      return 0LL;
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v10 + 24) = a1;
      WdLogEvent5_WdError(v10);
      return 3223192323LL;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
