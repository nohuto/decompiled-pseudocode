/*
 * XREFs of DmmIsSourceInVidPnTopology @ 0x1C0176DE8
 * Callers:
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C011FC00 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C013BAEC (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043C4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007520 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 */

__int64 __fastcall DmmIsSourceInVidPnTopology(__int64 a1, int a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  DMMVIDPNTOPOLOGY *v14; // rbx
  __int64 v15; // rax

  if ( a3 )
  {
    *a3 = 0;
    v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a1);
    if ( v8 )
    {
      v14 = (DMMVIDPNTOPOLOGY *)(v8 + 96);
      if ( v8 == -96 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        WdLogEvent5_WdAssertion(v15);
      }
      *a3 = DMMVIDPNTOPOLOGY::IsSourceInTopology(v14, a2);
      return 0LL;
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v13 + 24) = a1;
      WdLogEvent5_WdError(v13);
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
