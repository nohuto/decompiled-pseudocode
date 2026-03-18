/*
 * XREFs of BmlDoesTargetModeObeyConstraint @ 0x1C00BE7E4
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1C00BE624 (BmlGetNextBestTargetMode.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C000189C (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C007D1B8 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00C01A8 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
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
  struct _D3DDDI_RATIONAL v15; // rax
  int v16; // ecx
  int v17; // ecx
  struct _D3DDDI_RATIONAL v18; // rax
  int v19; // ecx
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _D3DDDI_RATIONAL v23; // [rsp+20h] [rbp-10h] BYREF
  struct _D3DDDI_RATIONAL v24; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int8 v25; // [rsp+58h] [rbp+28h] BYREF

  v4 = 104LL * a2;
  v6 = *(int **)(v4 + a1 + 16);
  if ( (*(_DWORD *)(a1 + 4) & 0x20000) != 0 && (*v6 & 0x87) != 0 )
    goto LABEL_4;
  v24.Numerator = 0;
  v25 = 0;
  LOBYTE(v4) = a4;
  IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(
                           (DMMVIDPNTARGETMODE *)a3,
                           v4,
                           &v25,
                           (enum _D3DKMDT_MODE_PRUNING_REASON *const)&v24);
  v12 = IsSupportedByMonitor;
  if ( IsSupportedByMonitor < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v20[3] = v12;
    v21 = *(unsigned int *)(a3 + 24);
    v20[4] = v21;
    if ( !*(_QWORD *)(a3 + 40) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v22);
    }
    v20[5] = *(_QWORD *)(a3 + 40);
    return 0;
  }
  if ( v25 )
  {
LABEL_4:
    v13 = *v6;
    if ( (*v6 & 0x87) == 0 )
      return 1;
    if ( ((v13 & 4) == 0 || (((unsigned __int8)*(_DWORD *)(a3 + 120) ^ *((_BYTE *)v6 + 72)) & 7) == 0)
      && ((v13 & 1) == 0 || (v6[1] & 1) == 0 || !(unsigned int)BmlCompareModeExtents(a3 + 84, v6 + 9)) )
    {
      if ( (v13 & 2) == 0 || (v6[1] & 2) == 0 )
        return 1;
      v15 = *(struct _D3DDDI_RATIONAL *)(v6 + 11);
      v16 = ((unsigned int)v6[18] >> 3) & 0x3F;
      if ( v16 )
      {
        v24.Numerator = *(_QWORD *)(v6 + 11);
        v24.Denominator = v16 * v15.Denominator;
        v15 = v24;
      }
      v17 = *(_DWORD *)(a3 + 120) >> 3;
      v23 = v15;
      v18 = *(struct _D3DDDI_RATIONAL *)(a3 + 92);
      v19 = v17 & 0x3F;
      if ( v19 )
      {
        v24.Numerator = *(_QWORD *)(a3 + 92);
        v24.Denominator = v19 * v18.Denominator;
        v18 = v24;
      }
      v24 = v18;
      if ( DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(&v24, &v23, 0) )
        return 1;
    }
  }
  return 0;
}
