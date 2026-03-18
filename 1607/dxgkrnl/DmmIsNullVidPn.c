/*
 * XREFs of DmmIsNullVidPn @ 0x1C0085284
 * Callers:
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C00865B4 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1B9C (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DmmIsNullVidPn(__int64 a1, bool *a2)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  if ( a2 )
  {
    if ( a1 && *(_DWORD *)(a1 + 64) == 1833172997 )
      v3 = a1;
    else
      v3 = 0LL;
    if ( v3 )
    {
      *a2 = *(_QWORD *)(v3 + 120) == v3 + 120;
      return 0LL;
    }
    else
    {
      v6 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v6 + 24) = a1;
      WdLogEvent5_WdError(v6);
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
