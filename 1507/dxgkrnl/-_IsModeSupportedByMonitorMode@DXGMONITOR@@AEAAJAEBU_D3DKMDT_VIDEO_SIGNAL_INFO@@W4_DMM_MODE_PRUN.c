/*
 * XREFs of ?_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0186C40
 * Callers:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0097D64 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C000806C (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     ?GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE@@SAIAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C002CDA8 (-GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE@@SAIAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_IsModeSupportedByMonitorMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        bool *a5,
        _DWORD *a6)
{
  char v6; // r12
  int v7; // r15d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 i; // rbx
  bool HaveEquivalentMonitorFrequencyRequirements; // al
  __int64 v16; // rcx
  char v17; // r10
  unsigned int TruncatedMonitorVSyncFreq; // eax
  unsigned int v19; // r11d
  bool v20; // al
  unsigned int v21; // eax
  __int64 v22; // rbx
  int v24; // eax
  __int64 v25; // rax

  v6 = a4;
  v7 = a3;
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a6 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = a1 + 160;
  for ( i = *(_QWORD *)(a1 + 160); ; i = *(_QWORD *)(v22 + 96) )
  {
    if ( i == v13 || (v22 = i - 96) == 0 )
    {
      *a5 = 0;
      return 0LL;
    }
    if ( *(_DWORD *)(v22 + 84) != 5 )
    {
      if ( v7 == 2 )
      {
        HaveEquivalentMonitorFrequencyRequirements = DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
                                                       (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a2,
                                                       (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v22 + 8),
                                                       v6);
      }
      else
      {
        v16 = (unsigned int)DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a2)
            - 56;
        v20 = 1;
        if ( (unsigned int)v16 > 5 )
        {
          TruncatedMonitorVSyncFreq = DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v22 + 8));
          if ( v19 > TruncatedMonitorVSyncFreq )
            v20 = 0;
        }
        HaveEquivalentMonitorFrequencyRequirements = 0;
        if ( v17 )
        {
          if ( v20 )
          {
            v21 = *(_DWORD *)(a2 + 48);
            v16 = v21 ^ *(_DWORD *)(v22 + 56);
            if ( (((unsigned __int8)v21 ^ *(_BYTE *)(v22 + 56)) & 7) == 0 )
              HaveEquivalentMonitorFrequencyRequirements = 1;
          }
        }
      }
      *a5 = HaveEquivalentMonitorFrequencyRequirements;
      if ( HaveEquivalentMonitorFrequencyRequirements )
        break;
    }
  }
  v24 = *(_DWORD *)(v22 + 84);
  switch ( v24 )
  {
    case 2:
      *a6 = 2;
      return 0LL;
    case 3:
      *a6 = 4;
      return 0LL;
    case 1:
      *a6 = 6;
      return 0LL;
  }
  v25 = WdLogNewEntry5_WdError(v16);
  *(_QWORD *)(v25 + 24) = *(int *)(v22 + 84);
  WdLogEvent5_WdError(v25);
  return 3223192354LL;
}
