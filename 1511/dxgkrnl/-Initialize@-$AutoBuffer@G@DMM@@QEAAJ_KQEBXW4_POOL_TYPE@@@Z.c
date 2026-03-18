/*
 * XREFs of ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0001524
 * Callers:
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C005E9E4 (DmmGetTargetIdFromCcdMonitorId.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMM::AutoBuffer<unsigned short>::Initialize(__int64 a1, unsigned __int64 a2)
{
  void *v4; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( a2 - 1 > 0xFFFFF )
  {
    v8 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v8 + 24) = a2;
    WdLogEvent5_WdError(v8);
    return 3221225990LL;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v6);
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
      v7 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v7 + 24) = a2;
      WdLogEvent5_WdLowResource(v7);
      return 3221225495LL;
    }
  }
}
