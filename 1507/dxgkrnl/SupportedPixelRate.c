/*
 * XREFs of SupportedPixelRate @ 0x1C0186748
 * Callers:
 *     ?_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0186B48 (-_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_AL.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C00099D4 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 */

char __fastcall SupportedPixelRate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  int v10; // r8d
  unsigned int v11; // r8d

  v4 = a3;
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *(_DWORD *)(a2 + 36) != 2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( v4 == 2 )
  {
    if ( *(_QWORD *)(a1 + 40) > *(_QWORD *)(a2 + 40)
      || *(unsigned int *)(a1 + 20) * (unsigned __int64)*(unsigned int *)(a2 + 8) < *(unsigned int *)(a2 + 4)
                                                                                  * (unsigned __int64)*(unsigned int *)(a1 + 24)
      || operator><_D3DDDI_RATIONAL>((unsigned int *)(a1 + 20), (unsigned int *)(a2 + 12))
      || *(unsigned int *)(a1 + 28) * (unsigned __int64)*(unsigned int *)(a2 + 24) < *(unsigned int *)(a2 + 20)
                                                                                   * (unsigned __int64)*(unsigned int *)(a1 + 32)
      || operator><_D3DDDI_RATIONAL>((unsigned int *)(a1 + 28), (unsigned int *)(a2 + 28)) )
    {
      return 0;
    }
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 16);
    if ( (unsigned __int64)(unsigned int)(v10 * *(_DWORD *)(a1 + 12) * (*(_DWORD *)(a1 + 20) / *(_DWORD *)(a1 + 24))) > *(_QWORD *)(a2 + 40)
      || *(_DWORD *)(a1 + 20) / *(_DWORD *)(a1 + 24) - *(_DWORD *)(a2 + 4) / *(_DWORD *)(a2 + 8) < 0
      || *(_DWORD *)(a1 + 20) / *(_DWORD *)(a1 + 24) - *(_DWORD *)(a2 + 12) / *(_DWORD *)(a2 + 16) > 0
      && *(_DWORD *)(a1 + 20) / *(_DWORD *)(a1 + 24) - 61 > 0 )
    {
      return 0;
    }
    v11 = v10 * (unsigned int)*(_QWORD *)(a1 + 20) / (unsigned int)HIDWORD(*(_QWORD *)(a1 + 20));
    if ( (int)(v11 - *(_DWORD *)(a2 + 20) / *(_DWORD *)(a2 + 24)) < 0
      && *(_DWORD *)(a1 + 20) / *(_DWORD *)(a1 + 24) - 60 < 0 )
    {
      return 0;
    }
    if ( (int)(v11 - *(_DWORD *)(a2 + 28) / *(_DWORD *)(a2 + 32)) > 0
      && *(_DWORD *)(a1 + 20) / *(_DWORD *)(a1 + 24) - 61 > 0 )
    {
      return 0;
    }
  }
  return 1;
}
