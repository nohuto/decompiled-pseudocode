/*
 * XREFs of ?_IsModeSupportedByDriver@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0097E10
 * Callers:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0097D64 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C00080B8 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 */

__int64 __fastcall DXGMONITOR::_IsModeSupportedByDriver(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        _DWORD *a6)
{
  char v6; // r15
  _QWORD *v9; // rsi
  _QWORD *i; // rbx
  _QWORD *v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v6 = a4;
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a6 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v15);
  }
  v9 = (_QWORD *)(a1 + 160);
  for ( i = (_QWORD *)*v9; ; i = (_QWORD *)v11[12] )
  {
    if ( i == v9 || (v11 = i - 12) == 0LL )
    {
      *a5 = 0;
      return 0LL;
    }
    if ( *((_DWORD *)v11 + 21) == 5
      && *(_DWORD *)(a2 + 12) == *((_DWORD *)v11 + 5)
      && *(_DWORD *)(a2 + 16) == *((_DWORD *)v11 + 6)
      && ((*(_BYTE *)(a2 + 48) ^ *((_BYTE *)v11 + 56)) & 7) == 0
      && (v6
       || DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
            (const struct _D3DDDI_RATIONAL *)(a2 + 20),
            (const struct _D3DDDI_RATIONAL *)((char *)v11 + 28),
            300)) )
    {
      break;
    }
  }
  *a6 = 7;
  *a5 = 1;
  return 0LL;
}
