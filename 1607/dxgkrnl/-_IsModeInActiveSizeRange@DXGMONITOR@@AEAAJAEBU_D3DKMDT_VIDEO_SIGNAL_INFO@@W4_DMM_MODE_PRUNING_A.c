/*
 * XREFs of ?_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01B4D64
 * Callers:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C007ACC0 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     SupportedVideoSignal @ 0x1C01B4BC4 (SupportedVideoSignal.c)
 */

__int64 __fastcall DXGMONITOR::_IsModeInActiveSizeRange(__int64 a1, _DWORD *a2, int a3, char *a4, _DWORD *a5)
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
      *a4 = 0;
      return 0LL;
    }
    if ( i[9] == 1 )
      break;
  }
  v15 = SupportedVideoSignal(a2, (unsigned int *)i, a3);
  *a4 = v15;
  if ( !v15 )
    return 0LL;
  if ( *i == 4 )
  {
    *a5 = 8;
    return 0LL;
  }
  v17 = WdLogNewEntry5_WdError(v16);
  *(_QWORD *)(v17 + 24) = *i;
  WdLogEvent5_WdError(v17);
  return 3223192348LL;
}
