/*
 * XREFs of ?_IsModeSupportedByDriver@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C007AD6C
 * Callers:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C007ACC0 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C000189C (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 */

__int64 __fastcall DXGMONITOR::_IsModeSupportedByDriver(__int64 a1, __int64 a2, int a3, char a4, _BYTE *a5, _DWORD *a6)
{
  __int64 *v9; // rsi
  __int64 i; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a5 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a6 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v14);
  }
  v9 = (__int64 *)(a1 + 160);
  for ( i = *v9; ; i = *(_QWORD *)(i + 96) )
  {
    if ( (__int64 *)i == v9 )
      goto LABEL_14;
    if ( i )
      i -= 96LL;
    if ( !i )
    {
LABEL_14:
      *a5 = 0;
      return 0LL;
    }
    if ( *(_DWORD *)(i + 84) == 5
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)(i + 20)
      && *(_DWORD *)(a2 + 16) == *(_DWORD *)(i + 24)
      && ((*(_BYTE *)(a2 + 48) ^ *(_BYTE *)(i + 56)) & 7) == 0
      && (a4
       || DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
            (const struct _D3DDDI_RATIONAL *)(a2 + 20),
            (const struct _D3DDDI_RATIONAL *)(i + 28),
            300)) )
    {
      break;
    }
  }
  *a6 = 7;
  *a5 = 1;
  return 0LL;
}
