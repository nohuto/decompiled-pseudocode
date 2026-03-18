/*
 * XREFs of ?_IsModeSupportedByDriver@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C009C22C
 * Callers:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C009C180 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C0007F5C (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 */

__int64 __fastcall DXGMONITOR::_IsModeSupportedByDriver(
        __int64 a1,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        int a3,
        char a4,
        _BYTE *a5,
        _DWORD *a6)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r14
  _QWORD *i; // rbx
  _QWORD *v14; // rbx

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a6 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = (_QWORD *)(a1 + 160);
  for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)v14[12] )
  {
    v14 = i - 12;
    if ( !v14 )
      break;
    if ( *((_DWORD *)v14 + 21) == 5
      && DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
           a2,
           (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v14 + 1),
           a4) )
    {
      *a6 = 7;
      *a5 = 1;
      return 0LL;
    }
  }
  *a5 = 0;
  return 0LL;
}
