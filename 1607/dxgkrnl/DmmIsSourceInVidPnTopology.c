/*
 * XREFs of DmmIsSourceInVidPnTopology @ 0x1C00E210C
 * Callers:
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C00E0DB8 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1B9C (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004864 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000ADA0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 */

__int64 __fastcall DmmIsSourceInVidPnTopology(__int64 a1, int a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  DMMVIDPNTOPOLOGY *v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( a3 )
  {
    *a3 = 0;
    v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a1);
    if ( v6 )
    {
      v8 = (DMMVIDPNTOPOLOGY *)(v6 + 96);
      if ( v6 == -96 )
      {
        v12 = WdLogNewEntry5_WdAssertion(v7);
        WdLogEvent5_WdAssertion(v12);
      }
      *a3 = DMMVIDPNTOPOLOGY::IsSourceInTopology(v8, a2);
      return 0LL;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v11 + 24) = a1;
      WdLogEvent5_WdError(v11);
      return 3223192323LL;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v10 + 24) = 0LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
}
