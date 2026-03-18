/*
 * XREFs of sub_1C00A6C58 @ 0x1C00A6C58
 * Callers:
 *     sub_1C00A6A98 @ 0x1C00A6A98 (sub_1C00A6A98.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0007FA8 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00A0D14 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00A0FE4 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

char __fastcall sub_1C00A6C58(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
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
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  _D3DKMDT_MODE_PRUNING_REASON v18; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v19; // [rsp+38h] [rbp+10h] BYREF

  v4 = 104LL * a2;
  v6 = *(int **)(v4 + a1 + 16);
  if ( (*(_DWORD *)(a1 + 4) & 0x20000) != 0 && (*v6 & 0x87) != 0 )
    goto LABEL_4;
  v18 = D3DKMDT_MPR_UNINITIALIZED;
  v19 = 0;
  LOBYTE(v4) = a4;
  IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor((DMMVIDPNTARGETMODE *)a3, v4, &v19, &v18);
  v12 = IsSupportedByMonitor;
  if ( IsSupportedByMonitor < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v15[3] = v12;
    v16 = *(unsigned int *)(a3 + 24);
    v15[4] = v16;
    if ( !*(_QWORD *)(a3 + 40) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v17);
    }
    v15[5] = *(_QWORD *)(a3 + 40);
    return 0;
  }
  if ( v19 )
  {
LABEL_4:
    v13 = *v6;
    if ( (*v6 & 0x87) == 0
      || ((v13 & 4) == 0 || (((unsigned __int8)*(_DWORD *)(a3 + 120) ^ *((_BYTE *)v6 + 72)) & 7) == 0)
      && ((v13 & 1) == 0 || (v6[1] & 1) == 0 || !(unsigned int)BmlCompareModeExtents((int *)(a3 + 84), v6 + 9))
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
