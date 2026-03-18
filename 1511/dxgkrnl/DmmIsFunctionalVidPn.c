/*
 * XREFs of DmmIsFunctionalVidPn @ 0x1C017B314
 * Callers:
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C0125730 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C0092248 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DmmIsFunctionalVidPn(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v5; // rax
  DMMVIDPN *v7; // rax
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rax

  if ( a3 )
  {
    v7 = (DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a1);
    if ( v7 )
    {
      *a3 = DMMVIDPN::IsFunctional(v7, v8);
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
    v5 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
