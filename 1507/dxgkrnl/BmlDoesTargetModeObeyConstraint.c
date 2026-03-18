/*
 * XREFs of BmlDoesTargetModeObeyConstraint @ 0x1C0098FC0
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1C0098D10 (BmlGetNextBestTargetMode.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C00080B8 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00976F8 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C0099738 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

char __fastcall BmlDoesTargetModeObeyConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  __int64 v4; // rdx
  int *v6; // rbx
  int IsSupportedByMonitor; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  int v13; // r10d
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  _D3DKMDT_MODE_PRUNING_REASON v21; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v22; // [rsp+38h] [rbp+10h] BYREF

  v4 = 104LL * a2;
  v6 = *(int **)(v4 + a1 + 16);
  if ( (*(_DWORD *)(a1 + 4) & 0x20000) != 0 && (*v6 & 0x87) != 0 )
    goto LABEL_4;
  v21 = D3DKMDT_MPR_UNINITIALIZED;
  v22 = 0;
  LOBYTE(v4) = a4;
  IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor((DMMVIDPNTARGETMODE *)a3, v4, &v22, &v21);
  v12 = IsSupportedByMonitor;
  if ( IsSupportedByMonitor < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v16[3] = v12;
    v19 = *(unsigned int *)(a3 + 24);
    v16[4] = v19;
    if ( !*(_QWORD *)(a3 + 40) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v19, v15, v17, v18);
      WdLogEvent5_WdAssertion(v20);
    }
    v16[5] = *(_QWORD *)(a3 + 40);
    return 0;
  }
  if ( v22 )
  {
LABEL_4:
    v13 = *v6;
    if ( (*v6 & 0x87) == 0
      || ((v13 & 4) == 0 || (((unsigned __int8)*(_DWORD *)(a3 + 120) ^ *((_BYTE *)v6 + 72)) & 7) == 0)
      && ((v13 & 1) == 0 || (v6[1] & 1) == 0 || !(unsigned int)BmlCompareModeExtents(a3 + 84, v6 + 9))
      && ((v13 & 2) == 0
       || (v6[1] & 2) == 0
       || DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
            (const struct _D3DDDI_RATIONAL *)(a3 + 92),
            (const struct _D3DDDI_RATIONAL *)(v6 + 11),
            0)) )
    {
      return 1;
    }
  }
  return 0;
}
