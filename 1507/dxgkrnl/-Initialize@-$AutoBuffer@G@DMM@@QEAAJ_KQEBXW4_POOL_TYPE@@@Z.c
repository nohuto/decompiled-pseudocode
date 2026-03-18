/*
 * XREFs of ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0008634
 * Callers:
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C009C3C4 (DmmGetTargetIdFromCcdMonitorId.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMM::AutoBuffer<unsigned short>::Initialize(__int64 a1, unsigned __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  if ( a2 - 1 > 0xFFFFF )
  {
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = a2;
    WdLogEvent5_WdError(v9);
    return 3221225990LL;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v7 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v7);
    }
    v4 = operator new[](a2, 0x4E506456u, PagedPool);
    *(_QWORD *)(a1 + 32) = v4;
    if ( v4 )
    {
      *(_QWORD *)(a1 + 40) = a2;
      *(_DWORD *)(a1 + 48) = 1;
      memset(v4, 0, a2);
      return 0LL;
    }
    else
    {
      v8 = WdLogNewEntry5_WdLowResource(v5);
      *(_QWORD *)(v8 + 24) = a2;
      WdLogEvent5_WdLowResource(v8);
      return 3221225495LL;
    }
  }
}
