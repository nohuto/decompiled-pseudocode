/*
 * XREFs of ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C0178F4C
 * Callers:
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00DB89C (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179100 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0089D68 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C00DB948 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 */

__int64 __fastcall GetUnusedVidpnSourceId(struct CCD_TOPOLOGY *this, const struct _LUID *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // r8
  unsigned int i; // edi
  unsigned int j; // ebp
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  __int64 v11; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  unsigned int k; // esi
  __int64 v17; // rcx
  unsigned __int16 v18; // ax
  __int64 v19; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int16 v23; // dx
  unsigned __int16 v24; // ax
  void *v26[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v27; // [rsp+60h] [rbp-38h]
  int v28; // [rsp+74h] [rbp-24h]

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v26, 8u, 0);
  v28 |= 1u;
  CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(v5, v4, v6, v26);
  for ( i = 0; i < 0x10; ++i )
  {
    for ( j = 0; ; ++j )
    {
      v9 = *((_QWORD *)this + 8);
      v10 = v9 ? *(_WORD *)(v9 + 20) : 0;
      if ( j >= v10 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, j);
      if ( (*(_DWORD *)PathDescriptor & 0x3000) != 0x3000 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v11);
        *(_QWORD *)(v13 + 24) = 3776LL;
        WdLogEvent5_WdAssertion(v13);
      }
      if ( (*(_DWORD *)PathDescriptor & 0x3000) == 0x3000
        && *((_DWORD *)PathDescriptor + 2) == a2->LowPart
        && *((_DWORD *)PathDescriptor + 3) == a2->HighPart
        && i == *((_DWORD *)PathDescriptor + 4) )
      {
        break;
      }
    }
    v14 = *((_QWORD *)this + 8);
    if ( v14 )
      v15 = *(_WORD *)(v14 + 20);
    else
      v15 = 0;
    if ( j >= v15 )
    {
      for ( k = 0; ; ++k )
      {
        v17 = v27;
        v18 = v27 ? *(_WORD *)(v27 + 20) : 0;
        if ( k >= v18 )
          break;
        v20 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v26, k);
        if ( (*(_DWORD *)v20 & 0x10) != 0 )
        {
          if ( (*(_DWORD *)v20 & 0x3000) != 0x3000 )
          {
            v21 = WdLogNewEntry5_WdAssertion(v19);
            *(_QWORD *)(v21 + 24) = 3799LL;
            WdLogEvent5_WdAssertion(v21);
          }
          if ( (*(_DWORD *)v20 & 0x3000) == 0x3000
            && *((_DWORD *)v20 + 2) == a2->LowPart
            && *((_DWORD *)v20 + 3) == a2->HighPart
            && i == *((_DWORD *)v20 + 4) )
          {
            v17 = v27;
            break;
          }
        }
      }
      v22 = *((_QWORD *)this + 8);
      v23 = v22 ? *(_WORD *)(v22 + 20) : 0;
      if ( j >= v23 )
      {
        v24 = v17 ? *(_WORD *)(v17 + 20) : 0;
        if ( k >= v24 )
          break;
      }
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v26);
  return i;
}
