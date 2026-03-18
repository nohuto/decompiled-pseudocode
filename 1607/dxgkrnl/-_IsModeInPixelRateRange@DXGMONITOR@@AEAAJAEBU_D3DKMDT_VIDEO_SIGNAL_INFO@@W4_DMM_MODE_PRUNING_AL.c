/*
 * XREFs of ?_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01B4E58
 * Callers:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C007ACC0 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     SupportedPixelRate @ 0x1C01B4A50 (SupportedPixelRate.c)
 */

__int64 __fastcall DXGMONITOR::_IsModeInPixelRateRange(__int64 a1, __int64 a2, int a3, char *a4, _DWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int *v12; // rax
  int *i; // rbx
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rax

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = (int *)(a1 + 208);
  for ( i = *(int **)(a1 + 208); ; i = (int *)*((_QWORD *)i + 6) )
  {
    if ( i == v12 )
      goto LABEL_14;
    if ( i )
      i -= 12;
    if ( !i )
    {
LABEL_14:
      *a4 = 1;
      return 0LL;
    }
    if ( i[9] == 2 )
      break;
  }
  v15 = SupportedPixelRate(a2, (__int64)i, a3);
  *a4 = v15;
  if ( v15 )
    return 0LL;
  if ( *i == 2 )
  {
    *a5 = 3;
    return 0LL;
  }
  if ( *i == 3 )
  {
    *a5 = 5;
    return 0LL;
  }
  v17 = WdLogNewEntry5_WdError(v16);
  *(_QWORD *)(v17 + 24) = *i;
  WdLogEvent5_WdError(v17);
  return 3223192348LL;
}
